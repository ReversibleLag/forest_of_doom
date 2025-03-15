use std::{io, process::exit};
mod models;
use models::*;
use rand::Rng;
use std::fmt::Display;

// Define a trait for common choice behavior
trait Choice: Display + Clone {
    fn get_next_page(&self) -> Option<i64>;
    fn get_name(&self) -> &str;
}

// Implement the trait for ItemChoice
impl Choice for ItemChoice {
    fn get_next_page(&self) -> Option<i64> {
        None // ItemChoice does not lead to another page
    }

    fn get_name(&self) -> &str {
        &self.name
    }
}

// Implement the trait for PathChoice
impl Choice for PathChoice {
    fn get_next_page(&self) -> Option<i64> {
        Some(self.nextpage) // PathChoice leads to another page
    }

    fn get_name(&self) -> &str {
        &self.name
    }
}

// Implement Display for ItemChoice
impl Display for ItemChoice {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{}", self.name)
    }
}

// Implement Display for PathChoice
impl Display for PathChoice {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{}", self.name)
    }
}

//fn load_pages() {
//    let file_contents =
//        std::fs::read_to_string("src/pages.json").expect("Failed to read JSON file!!");
//    let pages: Pages = serde_json::from_str(&file_contents).expect("Failed to deserialize");
//
//    let player = Player::new(vec![Items {
//        name: String::from("Sword"),
//        price: 100,
//        details: String::from("Your Starting Sword!"),
//    }]);
//    // let json:pages
//    // println!("{:#?}", pages);
//    if let Some(first_page) = pages.pages {
//        //println!("First page number: {}", first_page.number);
//        //println!("{}", first_page.text);
//        let mut input = String::new();
//        for next in first_page.text.split("\n\n") {
//            println!("{}", next);
//            io::stdin()
//                .read_line(&mut input)
//                .expect("error: unable to read user input");
//        }
//
//        println!("{:#?}", player);
//        player.stats.print_stats();
//    } else {
//        println!("No pages found in the JSON file.");
//    }
//}
fn load_pages() -> Pages {
    let file_contents =
        std::fs::read_to_string("src/pages.json").expect("Failed to read JSON file!!");
    let pages: Pages = serde_json::from_str(&file_contents).expect("Failed to deserialize");

    pages
}

fn run_page(mut player: Player, pages: &Pages) {
    let mut current_page: i64 = 7; // Start with page 0
                                   //player.add_item(Items {
                                   //    name: "Ring of Light".to_string(),
                                   //    price: 5,
                                   //    details: "Text".to_string(),
                                   //});
    loop {
        // Find the page matching the current_page number
        if let Some(page) = pages.pages.iter().find(|p| p.number == current_page) {
            match page.pagetype {
                PageType::Intro => {
                    let mut input = String::new();
                    for paragraph in page.text.split("\n\n") {
                        println!("{}", paragraph);
                        io::stdin()
                            .read_line(&mut input)
                            .expect("error: unable to read user input");
                    }
                    println!("\nChoose your starting potion.");
                    let starting_potion: Items = potion_choice(&mut player, page);
                    //println!("{:?}", starting_potion);
                    player.add_potion(starting_potion);
                    println!(
                        "Creating your Character: Rolling 2 dice to determine skills.\n\nRolling for initial SKILL: {}\nRolling for initial STAMINA: {}\nRolling for initial LUCK: {}. \n\n",
                        player.stats.init_skill, player.stats.init_stamina, player.stats.init_luck
                    );
                    player.print_inventory();
                    //current_page = page.next.expect("Failed to go to next page");
                    current_page += 1;
                }
                PageType::Battle1enemy => {
                    println!("Battle!");
                    // Implement battle logic here
                }
                PageType::Decision2path => {
                    //player.print_inventory();
                    //println!("{}", page.text);

                    current_page = path_choice(&mut player, page); // Update current_page to selected page
                }
                PageType::Decision3path => {
                    //player.print_inventory();
                    //println!("{}", page.text);
                    current_page = path_choice(&mut player, page); // Update current_page to selected page
                }
                PageType::Death => {
                    //player.print_inventory();
                    println!("{}", page.text);
                    exit(0);
                }
                PageType::UseItem => {
                    //player.print_inventory();
                    println!("{}", page.text);
                    let hasitem = player.has_item(page.requireitem.clone());
                    if hasitem {
                        current_page = use_item_choice(&mut player, page);
                    } else {
                        if let Some(noitem) = &page.noitemchoice {
                            println!("{}", noitem.name)
                        } else {
                            println!("No valid noitemchoice provided.");
                        }

                        get_input();

                        if let Some(next_page) = &page.noitemchoice {
                            current_page = next_page.nextpage;
                        }
                    }
                }
                PageType::StatModify => {
                    //player.print_inventory();
                    println!("{}", page.text);
                    if let Some(statmod) = &page.statchange {
                        //println!("Number of stat changes: {}", statmod.len());
                        for changestat in statmod {
                            //player.stats.print_stats();
                            match changestat.stat {
                                StatType::Stamina => {}
                                StatType::Skill => {}
                                StatType::Luck => {}
                                _ => {}
                            }

                            //player.stats.print_stats();
                            if player.stats.stamina <= 0 {
                                if let Some(deathtext) = &page.resultdeadtext {
                                    println!("{}", deathtext);
                                } else {
                                    println!(
                                        "You have perished in combat. Your adventure ends here."
                                    );
                                }
                                std::process::exit(0);
                            } else if let Some(resultalive) = &page.resultalivetext {
                                println!("{}", resultalive);
                                //player.stats.print_stats();
                                current_page = path_choice(&mut player, page);
                            }
                        }
                    }
                }
                PageType::ContinuePath => {
                    //player.print_inventory();
                    println!("{}", &page.text);

                    println!("\nContinue.");

                    get_input();
                    if let Some(next) = &page.next {
                        current_page = *next;
                    }
                }
                PageType::BattleMutliSeparate => {
                    //player.print_inventory();
                    //println!("{}", &page.text);
                    //current_page =
                    multi_battle(&player, page);
                }
                PageType::YaztromoShop => {
                    println!("{}", page.text);

                    if let Some(itemchoices) = &page.itemchoices {
                        let mut itemchoices = itemchoices.clone();
                        loop {
                            let mut final_index: usize = 0;
                            println!("\nAmount of Gold: {}", player.gold);
                            println!("Item ------------------------ Price ");
                            for (index, itemchoice) in itemchoices.iter().enumerate() {
                                println!(
                                    "{}. {} -------- {}",
                                    index + 1,
                                    itemchoice.name,
                                    itemchoice.price
                                );
                                final_index = index;
                            }
                            final_index += 2;
                            println!("{}. Leave shop.", final_index);

                            let input = get_input();

                            if let Ok(choice_index) = input.trim().parse::<usize>() {
                                if choice_index >= 1 && choice_index <= itemchoices.len() {
                                    let selected_item = itemchoices[choice_index - 1].clone();
                                    if player.gold >= selected_item.price {
                                        player.gold -= selected_item.price;
                                        itemchoices.remove(choice_index - 1);

                                        println!(
                                            "Added {} to your Inventory - {} Gold left.",
                                            selected_item.name, player.gold
                                        );
                                        let item = Items {
                                            name: selected_item.name.to_string(),
                                            price: selected_item.price,
                                            details: selected_item.details.to_string(),
                                        };
                                        match selected_item.name.as_str() {
                                            "Potion of Healing"
                                            | "Potion of Plant Control"
                                            | "Potion of Stillness"
                                            | "Potion of Insect Control"
                                            | "Potion of Anti-Poison" => {
                                                player.add_potion(item);
                                            }
                                            _ => {
                                                player.add_item(item);
                                            }
                                        }
                                    } else {
                                        println!(
                                            "\nYou have run out of gold! Cannot buy anything else"
                                        );
                                        if let Some(next) = &page.next {
                                            if let Some(text2) = &page.text2 {
                                                println!("{}", text2);
                                            }
                                            player.print_inventory();
                                            current_page = *next;
                                            break;
                                        }
                                    }
                                } else if choice_index == final_index {
                                    if let Some(next) = &page.next {
                                        if let Some(text2) = &page.text2 {
                                            println!("{}", text2);
                                            player.print_inventory();
                                        }
                                        current_page = *next;
                                        break;
                                    } else {
                                        println!("Invalid choice. Please select a valid option.");
                                    }
                                }
                            } else {
                                println!("Invalid input. Please enter a number.");
                            }
                        }
                    }
                }
            }
        } else {
            println!("Page not found! Exiting...");
            break;
        }
    }
}

fn get_input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read input");
    input
}

fn multi_battle(player: &Player, page: &Page) {
    println!("{}", page.text);
    if let Some(enemies) = &page.enemies {
        for enemy in enemies {
            println!(
                "{}\n\tSkill: {}\n\tStamina: {}",
                enemy.enemyname, enemy.enemyskill, enemy.enemystamina
            );
        }
    }
}

fn player_battle(player: &Player, page: &Page) {
    //give the player options
}

fn roll_dice() -> i64 {
    let mut rng = rand::thread_rng();
    rng.gen_range(2..=12)
}

//fn combat_round(player: &mut Player, enemy: &Enemy) {
//    let player_attack = roll_dice() + player.
//}

//fn mutti_battle(player: &Player, page: &Page) {
//
//
//}

//fn use_potion(player: &Player, page: &Page) {
//   for potion in player.has_item(item)
//}

fn generic_choice<T: Choice>(player: &mut Player, page: &Page, choices: &[T]) -> Option<T> {
    loop {
        println!("{}", page.text);
        println!("0. Show additional Options.");
        for (index, choice) in choices.iter().enumerate() {
            println!("{}. {}", index + 1, choice);
        }

        let input = get_input();
        if let Ok(choice_index) = input.trim().parse::<usize>() {
            if choice_index == 0 {
                show_options(player, page);
                continue;
            } else if choice_index >= 1 && choice_index <= choices.len() {
                return Some(choices[choice_index - 1].clone());
            } else {
                println!("Invalid choice. Please select a valid option.");
            }
        } else {
            println!("Invalid input. Please enter a number.");
        }
    }
}

fn path_choice(player: &mut Player, page: &Page) -> i64 {
    if let Some(pathchoices) = &page.pathchoices {
        if let Some(choice) = generic_choice(player, page, pathchoices) {
            return choice.get_next_page().unwrap();
        }
    }
    panic!("No choices available in the page.");
}

fn use_item_choice(player: &mut Player, page: &Page) -> i64 {
    if let Some(hasitemchoices) = &page.hasitemchoices {
        if let Some(choice) = generic_choice(player, page, hasitemchoices) {
            return choice.get_next_page().unwrap();
        }
    }
    panic!("No choices available in the page.");
}

fn item_choice(player: &mut Player, page: &Page) -> Items {
    if let Some(itemchoices) = &page.itemchoices {
        if let Some(choice) = generic_choice(player, page, itemchoices) {
            return Items {
                name: choice.name.clone(),
                price: choice.price,
                details: choice.details.clone(),
            };
        }
    }
    panic!("No choices available in the page.");
}

fn potion_choice(player: &mut Player, page: &Page) -> Items {
    if let Some(potionchoices) = &page.potionchoices {
        if let Some(choice) = generic_choice(player, page, potionchoices) {
            return Items {
                name: choice.name.clone(),
                price: choice.price,
                details: choice.details.clone(),
            };
        }
    }
    panic!("No choices available in the page.");
}

fn show_options(player: &mut Player, page: &Page) {
    loop {
        player.print_inventory();
        println!("0. Use a Potion.");
        println!("1. Continue.");
        if let Some(rest) = page.restoptional {
            println!("2. Rest and use a Provision to heal 4 stamina points.");
        }
        let input = get_input();
        if let Ok(choice_index) = input.trim().parse::<usize>() {
            match choice_index {
                0 => match player.potions.is_empty() {
                    true => {
                        println!("\nYou have no potions!");
                        break;
                    }
                    false => {
                        println!("Which potion do you want to use?");
                        for (index, potions) in player.potions.iter().enumerate() {
                            println!("{}. {} - {}", index + 1, potions.name, potions.details);
                        }
                        let input = get_input();
                        if let Ok(choice_index) = input.trim().parse::<usize>() {
                            if choice_index >= 1 && choice_index <= player.potions.len() {
                                let selected_potion = &player.potions[choice_index - 1];
                                println!("You chose: {}", selected_potion.name);
                                player.use_potion(selected_potion.name.to_string());
                                player.potions.remove(choice_index - 1);
                            } else {
                                println!("Invalid choice. Please select a valid option.");
                            }
                        } else {
                            println!("Invalid input. Please enter a valid number.");
                        }
                    }
                },
                1 => {
                    break;
                }
                2 => {
                    if let Some(rest) = page.restoptional {
                        if player.provisions >= 1 {
                            player.rest();
                            println!("\nYou have rested for several hours.");
                        } else {
                            println!("You do not have anymore provisions.");
                        }
                    } else {
                        continue;
                        //println!("\nYou may not rest now.");
                    }
                }
                _ => {
                    println!("Invalid input. Please enter a valid number.");
                }
            }
        } else {
            println!("Invalid input. Please enter a number.");
        }
    }
}

fn main() {
    let player = Player::new(vec![Items {
        name: String::from("Sword"),
        price: 100,
        details: String::from("Your Starting Sword!"),
    }]);

    let pages = load_pages();

    run_page(player, &pages);
}

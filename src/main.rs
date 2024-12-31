use std::{io, process::exit};
mod models;
use models::*;

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
    let mut current_page: i64 = 4; // Start with page 0
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

                    let starting_potion: Items = item_choice(page);
                    player.add_item(starting_potion);
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
                    println!("{}", page.text);
                    current_page = path_choice(page); // Update current_page to selected page
                }
                PageType::Decision3path => {
                    println!("{}", page.text);
                    current_page = path_choice(page); // Update current_page to selected page
                }
                PageType::Death => {
                    println!("{}", page.text);
                    exit(0);
                }
                PageType::UseItem => {
                    println!("{}", page.text);
                    let hasitem = player.has_item(page.requireitem.clone());
                    if hasitem {
                        current_page = use_item_choice(page);
                    } else {
                        if let Some(noitem) = &page.noitemchoice {
                            println!("{}", noitem.name)
                        } else {
                            println!("No valid noitemchoice provided.");
                        }

                        let mut input = String::new();
                        io::stdin()
                            .read_line(&mut input)
                            .expect("Failed to read input");

                        if let Some(next_page) = &page.noitemchoice {
                            current_page = next_page.nextpage;
                        }
                    }

                    //for inventory in &player.items {
                    //    if Some(&inventory.name) == page.requireitem.as_ref() {
                    //        let next_page = path_choice(page);
                    //        current_page = next_page as i64;
                    //    } else {
                    //        //TODO: handle checking if player has an item for specific pages most
                    //        //likely need to add a new function that is just like path choices or
                    //        //abstract the path choices function to just do input and then loop the
                    //        //input im not sure
                    //        //let next_page = &page.noitemchoices.iter().enumerate();
                    //        //current_page = next_page as i64;
                    //    }
                    //}
                }
                PageType::StatModify => {
                    if let Some(statmod) = &page.statchange {
                        println!("Number of stat changes: {}", statmod.len());
                        for changestat in statmod {
                            player.stat_change(changestat);
                            if player.stats.stamina <= 0 {
                                println!("You have perished in combat. Your adventure ends here.");
                                std::process::exit(0);
                            } else if let Some(resultalive) = &page.resultalivetext {
                                println!("{}", resultalive);
                                //player.stats.print_stats();
                                current_page = path_choice(page);
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

fn use_item_choice(page: &Page) -> i64 {
    if let Some(hasitemchoices) = &page.hasitemchoices {
        loop {
            //println!("Choose an option:");
            //for item in player_item.items.iter().enumerate() {
            //    if Some(item) == &page.requireitem {}
            //}
            //if let Some(player.has_item(page.requireitem)) {
            for (index, hasitemchoices) in hasitemchoices.iter().enumerate() {
                println!("{}. {}", index + 1, hasitemchoices.name);
            }
            //}

            let mut input = String::new();
            io::stdin()
                .read_line(&mut input)
                .expect("Failed to read input");

            if let Ok(choice_index) = input.trim().parse::<usize>() {
                if choice_index >= 1 && choice_index <= hasitemchoices.len() {
                    let selected_item = &hasitemchoices[choice_index - 1];
                    return selected_item.nextpage;
                //println!("You chose: {}", selected_item.name);
                } else {
                    println!("Invalid choice. Please select a valid option.");
                }
            } else {
                println!("Invalid input. Please enter a number.");
            }
        }
    } else {
        panic!("No choices available in the page.");
    }
}
fn path_choice(page: &Page) -> i64 {
    if let Some(pathchoices) = &page.pathchoices {
        loop {
            //println!("Choose an option:");
            for (index, pathchoices) in pathchoices.iter().enumerate() {
                println!("{}. {}", index + 1, pathchoices.name);
            }

            let mut input = String::new();
            io::stdin()
                .read_line(&mut input)
                .expect("Failed to read input");

            if let Ok(choice_index) = input.trim().parse::<usize>() {
                if choice_index >= 1 && choice_index <= pathchoices.len() {
                    let selected_item = &pathchoices[choice_index - 1];
                    return selected_item.nextpage;
                //println!("You chose: {}", selected_item.name);
                } else {
                    println!("Invalid choice. Please select a valid option.");
                }
            } else {
                println!("Invalid input. Please enter a number.");
            }
        }
    } else {
        panic!("No choices available in the page.");
    }
}

fn item_choice(page: &Page) -> Items {
    if let Some(itemchoices) = &page.itemchoices {
        loop {
            println!("Choose an option:");
            for (index, itemchoice) in itemchoices.iter().enumerate() {
                println!("{}. {}", index + 1, itemchoice.name);
            }

            let mut input = String::new();
            io::stdin()
                .read_line(&mut input)
                .expect("Failed to read input");

            if let Ok(choice_index) = input.trim().parse::<usize>() {
                if choice_index >= 1 && choice_index <= itemchoices.len() {
                    let selected_item = &itemchoices[choice_index - 1];
                    println!("You chose: {}", selected_item.name);
                    return Items {
                        name: selected_item.name.clone(),
                        price: selected_item.price,
                        details: selected_item.details.clone(),
                    };
                } else {
                    println!("Invalid choice. Please select a valid option.");
                }
            } else {
                println!("Invalid input. Please enter a number.");
            }
        }
    } else {
        panic!("No choices available in the page.");
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

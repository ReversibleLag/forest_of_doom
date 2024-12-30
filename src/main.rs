use rand::Rng;
use serde::{Deserialize, Serialize};
use std::io;

#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Pages {
    pub pages: Vec<Page>,
}

#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Page {
    pub number: i64,
    pagetype: PageType,
    pub text: String,
    // pub actions: Actions,
    pub next: Option<i64>,
    pub itemchoices: Option<Vec<ItemChoice>>,
    pub pathchoices: Option<Vec<PathChoice>>,
}

#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct ItemChoice {
    pub name: String,
    pub price: i32,
    pub details: String,
}

#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct PathChoice {
    pub name: String,
    pub nextpage: i32,
}

#[allow(dead_code)]
#[derive(Debug)]
pub struct Items {
    name: String,
    price: i32,
    details: String,
}

#[derive(Debug, Serialize, Deserialize)]
enum PageType {
    Intro,
    Decision2path,
    Decision3path,
    Battle1enemy,
}

#[derive(Debug)]
struct PlayerStats {
    init_skill: u8,
    init_stamina: u8,
    init_luck: u8,
    skill: u8,
    stamina: u8,
    luck: u8,
}

impl PlayerStats {
    // Function to initialize stats, setting stamina and luck to initial values
    fn initialize(&mut self) {
        let mut rng = rand::thread_rng();
        self.init_stamina = (rng.gen_range(1..=10) % 6 + 1) + 6; // Generate random stamina between 1 and 10
        self.init_luck = (rng.gen_range(1..=10) % 12 + 1) + 12; // Generate random luck between 1 and 10
        self.init_skill = (rng.gen_range(1..=10) % 6 + 1) + 6;
        self.stamina = self.init_stamina;
        self.luck = self.init_luck;
        self.skill = self.init_skill;
    }

    //pub fn print_stats(&self) {
    //    println!(
    //        "Skill: {}, Stamina: {}, Luck: {}",
    //        self.skill, self.stamina, self.luck
    //    );
    //}
}

#[allow(dead_code)]
#[derive(Debug)]
struct Player {
    stats: PlayerStats,
    items: Vec<Items>,
    rations: i32,
    gold: i32,
}

impl Player {
    fn new(items: Vec<Items>) -> Self {
        let mut player_stats = PlayerStats {
            init_skill: 0,
            init_stamina: 0,
            init_luck: 0,
            skill: 0,
            stamina: 0,
            luck: 0,
        };

        player_stats.initialize(); // Initialize stats with random values

        //player_stats.print_stats();
        Self {
            stats: player_stats,
            items,
            rations: 10, // Default rations to 10 if not provided
            gold: 30,
        }
    }
    fn add_item(&mut self, item: Items) {
        self.items.push(item);
    }

    fn print_inventory(&self) {
        println!("---Player Stats---");
        println!("SKILL: {}", self.stats.skill);
        println!("STAMINA: {}", self.stats.stamina);
        println!("LUCK: {}", self.stats.luck);
        println!("\nRations to restore Stamina: {}", self.rations);
        println!("Gold: {}", self.gold);

        println!("\n---Inventory---");
        for item in &self.items {
            println!("{}", item.name);
            println!("\tPrice: {} Gold", item.price);
            println!("\tDetails: {}", item.details);
        }
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
    let mut current_page: i64 = 0; // Start with page 0
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
                    let next_page = path_choice(page);
                    current_page = next_page as i64; // Update current_page to selected page
                }
                PageType::Decision3path => {
                    println!("3 path decision!");
                    // Implement 3-path decision logic here
                }
            }
        } else {
            println!("Page not found! Exiting...");
            break;
        }
    }
}

fn path_choice(page: &Page) -> i32 {
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

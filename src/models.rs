use rand::Rng;
use serde::{Deserialize, Serialize};

#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Pages {
    pub pages: Vec<Page>,
}

#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Page {
    pub number: i64,
    pub pagetype: PageType,
    pub text: String,
    pub text2: Option<String>,
    // pub actions: Actions,
    pub next: Option<i64>,
    pub restoptional: bool,
    pub itemchoices: Option<Vec<ItemChoice>>,
    pub potionchoices: Option<Vec<ItemChoice>>,
    pub pathchoices: Option<Vec<PathChoice>>,
    pub hasitemchoices: Option<Vec<PathChoice>>,
    pub noitemchoice: Option<PathChoice>,
    pub requireitem: Option<String>,
    pub resultdeadtext: Option<String>,
    pub resultalivetext: Option<String>,
    pub statchange: Option<Vec<StatChange>>,
    pub enemies: Option<Vec<Enemy>>,
}

#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct StatChange {
    pub stat: StatType,
    pub value: i64,
}

#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Enemy {
    pub enemyname: String,
    pub enemyskill: i64,
    pub enemystamina: i64,
}

#[derive(Debug, Serialize, Deserialize)]
pub enum StatType {
    Skill,
    Stamina,
    Luck,
}

#[derive(Clone, Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct ItemChoice {
    pub name: String,
    pub price: i64,
    pub details: String,
}

#[derive(Clone, Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct PathChoice {
    pub name: String,
    pub nextpage: i64,
}

#[allow(dead_code)]
#[derive(Debug)]
pub struct Items {
    pub name: String,
    pub price: i64,
    pub details: String,
}

#[derive(Debug, Serialize, Deserialize)]
pub enum PageType {
    Intro,
    ContinuePath,
    Decision2path,
    Decision3path,
    Battle1enemy,
    Death,
    UseItem,
    StatModify,
    BattleMutliSeparate,
    YaztromoShop,
}

#[derive(Debug)]
pub struct PlayerStats {
    pub init_skill: i64,
    pub init_stamina: i64,
    pub init_luck: i64,
    pub skill: i64,
    pub stamina: i64,
    pub luck: i64,
}

impl PlayerStats {
    // Function to initialize stats, setting stamina and luck to initial values
    pub fn initialize(&mut self) {
        let mut rng = rand::thread_rng();
        self.init_stamina = (rng.gen_range(1..=10) % 6 + 1) + 6; // Generate random stamina between 1 and 10
        self.init_luck = (rng.gen_range(1..=10) % 12 + 1) + 12; // Generate random luck between 1 and 10
        self.init_skill = (rng.gen_range(1..=10) % 6 + 1) + 6;
        self.stamina = self.init_stamina;
        self.luck = self.init_luck;
        self.skill = self.init_skill;
    }

    pub fn print_stats(&self) {
        println!(
            "Skill: {}, Stamina: {}, Luck: {}",
            self.skill, self.stamina, self.luck
        );
    }
}

#[allow(dead_code)]
#[derive(Debug)]
pub struct Player {
    pub stats: PlayerStats,
    pub items: Vec<Items>,
    pub potions: Vec<Items>,
    pub provisions: i64,
    pub gold: i64,
}

impl Player {
    pub fn new(items: Vec<Items>) -> Self {
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
            potions: Vec::new(),
            provisions: 10, // Default provisions to 10 if not provided
            gold: 30,
        }
    }
    pub fn add_item(&mut self, item: Items) {
        self.items.push(item);
    }
    pub fn add_potion(&mut self, potion: Items) {
        self.potions.push(potion);
    }

    pub fn rest(&mut self) {
        if self.provisions >= 1 {
            self.provisions -= 1;
            self.stats.stamina += 4;
        }
        println!("\nRestored 4 Stamina points. Removed 1 Provision.");
    }

    pub fn use_potion(&mut self, potion: String) {
        match potion.as_str() {
            "Potion of SKILL" => {
                self.stats.skill = self.stats.init_skill;
                println!("\nSkill restored to {}", self.stats.init_skill);
            }
            "Potion of STAMINA" => {
                self.stats.stamina = self.stats.init_stamina;
                println!("\nStamina restored to {}", self.stats.init_stamina);
            }
            "Potion of LUCK" => {
                self.stats.luck = self.stats.init_luck;
                println!("\nLuck restored to {}", self.stats.init_luck);
            }
            "Potion of Healing" => {
                self.stats.stamina += 10;
                println!("\nStamina restored by 10");
            }
            _ => {
                println!("\nCan't use that potion.")
            }
        }
    }

    pub fn print_inventory(&self) {
        println!("---Player Stats---");
        println!("SKILL: {}", self.stats.skill);
        println!("STAMINA: {}", self.stats.stamina);
        println!("LUCK: {}", self.stats.luck);
        println!("\nProvisions to restore Stamina: {}", self.provisions);
        println!("Gold: {}", self.gold);

        println!("\n---Inventory---");
        for item in &self.items {
            println!("{}", item.name);
            println!("\tPrice: {} Gold", item.price);
            println!("\tDetails: {}", item.details);
        }

        println!("\n---Potions---");
        for potion in &self.potions {
            println!("{}", potion.name);
            println!("\tPrice: {} Gold", potion.price);
            println!("\tDetails: {}", potion.details);
        }
    }

    pub fn has_item(&self, item: Option<String>) -> bool {
        for inventory in &self.items {
            if Some(&inventory.name) == item.as_ref() {
                return true;
            }
        }
        false
    }

    pub fn stat_change(&mut self, stat: &StatChange) {
        match stat.stat {
            StatType::Skill => self.stats.skill += stat.value,
            StatType::Stamina => {
                self.stats.stamina += stat.value;
                //if self.stats.stamina <= 0 {
                //    println!("You have perished in combat. Your adventure ends here.");
                //    self.stats.print_stats();
                //    std::process::exit(0);
                //}
            }
            StatType::Luck => self.stats.luck += stat.value,
        }
    }
}

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
    pub text: String,
    // pub actions: Actions,
    pub next: i64,
}

// struct Player {}

fn load_pages() {
    let file_contents =
        std::fs::read_to_string("src/pages.json").expect("Failed to read JSON file!!");
    let pages: Pages = serde_json::from_str(&file_contents).expect("Failed to deserialize");
    // let json:pages
    println!("{:#?}", pages);
    if let Some(first_page) = pages.pages.first() {
        println!("First page number: {}", first_page.number);
    } else {
        println!("No pages found in the JSON file.");
    }
}

fn main() {
    load_pages();
    println!("Hello, world!");
}

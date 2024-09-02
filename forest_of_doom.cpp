#include <iostream>
#include <stdlib.h>

class Player {

public:
  // Determines swordsmanship and general fighting expertise, higher is better.
  int initSkill = 0;
  // Stamina determins you general constitution, will to survive, determination,
  // and overall fitness. Higher means surviving longer.
  int initStamina = 0;
  // Luck indicates how naturally lucky you are.
  int initLuck = 0;

  // Current skill of the player, based on initSkill. Can be buffed or debuffed.
  int currSkill = 0;
  // Current Statmina of the player, based on initStamina. Will be decreased
  // with use and restored with rest.
  int currStamina = 0;
  // Current Luck, based on initLuck.
  int currLuck = 0;

  Player() {
    srand(time(NULL));

    initSkill = (rand() % 6 + 1) + 6;
    initStamina = (rand() % 12 + 1) + 12;
    initLuck = (rand() % 6 + 1) + 6;

    currSkill = initSkill;
    currStamina = initStamina;
    currLuck = initLuck;
  }
};

void intro(Player &player) {

  std::cout << "Welcome to the Forest of Doom!\nBased on Ian Liviningstone's "
               "Book: The Forest Of Doom.\n";

  std::cout
      << "\n\n---PREFACE---\nOnly the foolhardy or the very brave would "
         "willingly risk a journey into Darkwood Forest, where strange, "
         "twisting paths wind their way into the eeire depths. Who knows what "
         "monstrous creatures lurk in the threatening shadows, or what deadly "
         "adventures await the unwary traveller? Do YOU dare to enter?\n\nIn a "
         "desperate race against time, deep within Darkwood, your quest is to "
         "find the missing pieces of the legendary Hammer of Stonebridge, "
         "which was fashioned by Dwarfs to protect peaceful Stonebrdige "
         "against its ancient doom.\n\nTwo dice, a pencil and an eraser are "
         "all you need to embark on this thrilling adventure of sword and "
         "sorcery, complete with its elaborate combat system and a score sheet "
         "to record your gains and losses.\n\nMany dangers be ahead and your "
         "success is by no means certain. Powerful adversaries are ranged "
         "against you and often your only chice is to kill or be killed!";

  std::cout
      << "\n\n---HOW TO PLAY---\nBefore embarking on your adventure, you "
         "must first determine your own strengths and weaknesses. You have in "
         "your possession a sword "
         "and a backpack containing provisions (food and drink) for the trip. "
         "You have been preparing for your quest by training yourself in "
         "swordplay and exercising vigorously to build up your stamina.\n\nTo "
         "see how effective your preparations have been, you must use the dice "
         "to determine your initial SKILL and STAMINA scores. \n\nThere will "
         "be an option to review your STATS on every menu.";

  std::cout << "\n\n---Skill, Stamina and Luck---\nWe will now determine "
               "your SKILLS. Skills are decided with dice rolling, we will "
               "take care of that for you.\n\n";
  std::cout
      << "\nSKILL score reflects your swordsmanship and general fighting "
         "expertis; higher is better!\nSTAMINA score reflects your general "
         "constitution, your will to survive, your determiniation and overall "
         "fitness; higher score will longer your survival.\nLUCK score "
         "indicates how naturally luck you are as a person!\n";

  std::cout << "\n********************************";
  std::cout << "\nRolling for initial SKILL: " << player.initSkill;
  std::cout << "\nRolling for initial STAMINA: " << player.initStamina;
  std::cout << "\nRolling for initial LUCK: " << player.initLuck;
  std::cout << "\n********************************";
  std::cout << "\nPress key to Continue...";
  std::cin.get();

  std::cout << "\n---BATTLES---";
  std::cout << "\nYou will often come across creatures in this game, where you "
               "must fight. An option to flee may be given, but if not - or if "
               "you choose to attack the creature anyway - you must resolve "
               "the battle as described below.";
  std::cout
      << "\n\nThe squence of combat is: \n1. Roll both dice once for the "
         "creature. Add its SKILL score. This total is the creatures "
         "Attack Strength.\n2. Roll both dice once for yourself. Add the "
         "number rolled to your current SKILL score. This total is your "
         "Attack Strength.\n3. If your Attack Strength is higher than that of "
         "the creature, you have wounded it. Proceed to step 4. If the "
         "creature's Attack Strength total are the same, you have avoided each "
         "other's blows - start the next Attack Round from step 1 "
         "above.\n4.You have wounded the creature, so subtract 2 points from "
         "its STAMINA score. You may use your LUCK here to  do additional "
         "damage! (Button option when available)\n5. The creature has wounded "
         "you, so subtract 2 points from your own STAMINA score. Again you may "
         "use LUCK at this stage.\n6. Make the appropriate adjustments to "
         "either the creature's or your own STAMINA scores (and your LUCK "
         "score if you used LUCK).\n7. Begin the next Attack Round by "
         "returning to your current SKILL score and repeating steps 1-6. This "
         "sequence continues until the STAMINA score of either you or the "
         "creature you are fighting has been reduced to zero (death).";

  std::cout << "\n\n---ESCAPING---\nSome situations you may be given the "
               "option of running away from a battle should things be going "
               "badly for you. However, if you do run away, the creature "
               "automatically gets in one wound on you (subtract 2 STAMINA "
               "points) as you flee. Such is the price of cowardice. Note that "
               "you may use LUCK on this wound in the normal way. You may only "
               "ESCAPE if that option is specifically given to you.";
  std::cout << "\n\n---FIGHTING MORE THAN ONE CREATURE---\nIf you come across "
               "more than one creature in a particular encounter, the "
               "instructions on that page will tell you how to handle the "
               "battle. Sometimes you will treat them as a single monster, "
               "somtimes you will fight each one in turn.";
  std::cout
      << "\n\n---LUCK---\nAt various times during your adventure, either in "
         "battles or when you come across situations in which you could either "
         "be lucky or unlucky (details of these are given on the pages "
         "themselves), you may call on your luck to make the outcome more "
         "favourable. But beware! Using luck is a risky business and if you "
         "are unlucky, the results could be disastrous.\n\nThe procedure for "
         "using your luck is as follows: roll two dice. If the number rolled "
         "is equal to or less than your current LUCK score, you have been "
         "lucky and the result will go in your favour. If th enumber rolled is "
         "higher than your current LOCK score, you have been unlucky and you "
         "will be penalized.\n\nRoll <= Your LUCK Score(LUCKY)\nRoll > Your "
         "LUCK Score(UNLUCKY)\nThis procedure is known as Testing your Luck. "
         "Each time ou Test your Luck, you must subtract one point from your "
         "current LUCK score. This you will soon realize that the more you "
         "rely on your luck, the more risky this will become.";
  std::cout
      << "\n\n---USING LUCK IN BATTLES---\nOn certain pages of the book you "
         "will be told to Test your Luck and will be told the consequences of "
         "your being lucky or unlucky. However, in battles, you always have "
         "the option of using your luck either to inflict a more serious wound "
         "on a creature you have just wounded, or to minimize the effects of a "
         "wound the creature has just inflicted on you.\nIf you have just "
         "wounded the creature, you may Test your Luck as described above. If "
         "you are lucky, you have inflicted a severe wound and may subtract an "
         "extra 2 points from the creature's STAMINA score. However, if you "
         "are unlucky, the wound was a mere graze and you must restore 1 point "
         "to the creature's STAMINA (i.e. instead of scoring the normal 2 "
         "points of damage, you have now scored only 1).\n If the creature has "
         "just wounded you, you may Test your Luck to try to minimize the "
         "wound. If you are lucky, you have managed to avoid the full damage "
         "of the blow. Restore 1 point to STAMINA (i.e. instead of doing 2 "
         "points of damage it has done only 1). If you are unlucky, you have "
         "taken a more serious blow. Subtract 1 extra STAMINA point.\nRemember "
         "that you must subtract 1 point from your onw LUCK score each time "
         "you Test your Luck.";
  std::cout
      << "\n\n---RESTORING SKILL, STAMINA, AND LUCK---\n\n-SKILL-\nYour SKILL "
         "score will not change much during ou adventure. Occasionally, a page "
         "may give instructions to increase or decrease your SKILL score. A "
         "Magic Weapon may increase your SKILL, but remember that only one "
         "weapon can be used at a time! You cannot claim 2 SKILL bonuses for "
         "carrying two Magic Swords. Your SKILL score can never exceed its "
         "Initial value unless specifically instructed. Drinking the Potion of "
         "Skill will restore your SKILL to its Inital level at "
         "anytime.\n\n-STAMINA AND PROVISIONS-\nYour STAMINA score will change "
         "a "
         "lot during your adventure as you fight monsters and undertake "
         "arduous tasks. As you near your goal. your STAMINA level maybe "
         "dangerously low and battles maybe particularly risky, so be "
         "careful!\nYour backpack contains enough provisions for ten meals. "
         "You may rest and eat at any time except when engaged in a Battle. "
         "Eating a meal restores 4 STAMINA points. When you eat a meal, add 4 "
         "points to your STAMINA score and deduct 1 point from your "
         "Provisions. A separate Provisions Remaining box is provided on the "
         "Adventure Sheet for recording details of Provisions. Remember that "
         "you have a long way to go, so use your Provisions wisely!\nRemember "
         "also that your STAMINA score may never exceed its Inital value "
         "unless specifically instructed on a page. Drinking the Potion of "
         "Strength will restore your STAMINA to its Inital level at any "
         "time.\n\n-LUCK-\nAdditions to your LUCK score are awarded through "
         "the "
         "adventure when you have been particularly lucky. Details are given "
         "on the pages of the book. Remember that as with SKILL and STAMINA, "
         "your LUCK score may never exceed its Inital unless specifically "
         "instructed to do so. Drinking the Potion of Fortune will restore "
         "your LUCK to its Initial level at any time, and increase your "
         "Initial LUCK by 1 point.";
  std::cout
      << "\n\n---EQUIPMENT AND POTIONS---\nYou will start your "
         "adventure with a bare minimum of equipment, but you may find "
         "or buy other items during your travels, You are armed with a "
         "sword and are dressed in leather armour. You have a backpack "
         "to hold your Provisions and any treasures you may come across.\nIn "
         "addition, you may take one bottle of a magical potion which will aid "
         "you on your quest. You may choose to take a bottle of any of the "
         "following:\n*********************************************************"
         "***********************\n\t1. A Potion "
         "of Skill - restores "
         "SKILL points.\n\t2. A Potion "
         "of Strength - restores STAMINA points\n\t3. A Potion of Fortune - "
         "restores LUCK points and adds 1 to Initial "
         "LUCK\n***************************************************************"
         "*****************\n";
  std::cout << "\nPress 1, 2, or 3 to Choose starter Potion...";
  int starterPotion = 0;
  std::cin.get();
  switch (starterPotion) {
  case 1:
    std::cout << "Potion of SKILL added to inventory.";
  case 2:
    std::cout << "Potion of STAMINA added to inventory.";
  case 3:
    std::cout << "Potion of LUCK added to inventory.";
  }
}

int main() {

  Player player;

  intro(player);

  return 0;
}

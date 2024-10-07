// #include <algorithm>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <stdlib.h>
#include <string>
#include <vector>

struct Item {
  Item(const std::string &name, int price) : _name{name}, _price{price} {}
  // Getter method for the name
  const std::string &getName() const { return _name; }
  const int &getPrice() const { return _price; }
  friend std::ostream &operator<<(std::ostream &out, Item &item) {
    out << item._name << "\t\t\t\t\t" << item._price << "\n";
    return out;
  }

private:
  std::string _name;
  int _price;
};

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

  int gold = 0;
  int diceDebuff = 0;
  // 1 Potion of SKILL
  // 2 Potion of STRENGTH
  // 3 Potion of LUCK
  // int starterPotion = 0;

  std::vector<Item> potions;
  int provisions = 10;
  std::vector<Item> equipment;
  Player() {
    srand(time(NULL));

    initSkill = (rand() % 6 + 1) + 6;
    initStamina = (rand() % 12 + 1) + 12;
    initLuck = (rand() % 6 + 1) + 6;

    currSkill = initSkill;
    currStamina = initStamina;
    currLuck = initLuck;
    gold = 30;
  }

  void removeGold(int goldToRemove) {
    if (gold > goldToRemove) {
      gold -= goldToRemove;
    } else {
      gold = 0;
    }
  }
  void addGold(int goldToAdd) { gold += goldToAdd; }
  void addSkill(int addedSkill) { currSkill += addedSkill; }
  void addStamina(int addedStamina) { currStamina += addedStamina; }
  void addLuck(int addedLuck) { currLuck += addedLuck; }
  void removeSkill(int removedSkill) {
    if (currSkill > removedSkill) {
      currSkill -= removedSkill;
    } else {
      currSkill = 1;
    }
  }
  void removeStamina(int removedStamina) {
    if (currStamina > removedStamina) {
      currStamina -= removedStamina;
    } else {
      currStamina = 1;
    }
  }
  void removeLuck(int removedLuck) {
    if (currLuck > removedLuck) {
      currLuck -= removedLuck;
    } else {
      currLuck = 1;
    }
  }
  void removeDiceDebuff(int debuff) { diceDebuff += debuff; }
  void addDiceDebuff(int debuff) { diceDebuff -= debuff; }
};

class Enemy {
public:
  std::string name = "";
  int skill, stamina = 0;
  Enemy(std::string name, int skill, int stamina) {
    this->name = name;
    this->skill = skill;
    this->stamina = stamina;
  }
};
void next();
bool battle(Player &player, Enemy &enemy, int turnsToEscape);
void intro(Player &player);
void background();
int choice();
void viewInventory(Player &player);
void page_1(Player &player);
void page_2(Player &player);
void page_3(Player &player);
void page_4(Player &player);
void page_5(Player &player);
void page_6(Player &player);
void page_7(Player &player);
void page_8(Player &player);
void page_9(Player &player);
void page_10(Player &player);
void page_11(Player &player);
void page_12(Player &player);
void page_13(Player &player);
void page_14(Player &player);
void page_15(Player &player);
void page_16(Player &player);
void page_17(Player &player);
void page_18(Player &player);
void page_19(Player &player);
void page_20(Player &player);
void page_21(Player &player);
void page_22(Player &player);
void page_23(Player &player);
void page_24(Player &player);
void page_25(Player &player);
void page_26(Player &player);
void page_27(Player &player);
void page_28(Player &player);
void page_29(Player &player);
void page_30(Player &player);
void page_31(Player &player);
void page_32(Player &player);
void page_33(Player &player);
void page_34(Player &player);
void page_35(Player &player);
void page_36(Player &player);
void page_37(Player &player);
void page_38(Player &player);
void page_39(Player &player);
void page_40(Player &player);
void page_41(Player &player);
void page_42(Player &player);
void page_43(Player &player);
void page_44(Player &player);
void page_45(Player &player);
void page_46(Player &player);
void page_47(Player &player);
void page_48(Player &player);
void page_49(Player &player);
void page_50(Player &player);
void page_51(Player &player);
void page_52(Player &player);
void page_53(Player &player);
void page_54(Player &player);
void page_55(Player &player);
void page_56(Player &player);
void page_57(Player &player);
void page_58(Player &player);
void page_59(Player &player);
void page_60(Player &player);
void page_61(Player &player);
void page_62(Player &player);
void page_63(Player &player);
void page_64(Player &player);
void page_65(Player &player);
void page_66(Player &player);
void page_67(Player &player);
void page_68(Player &player);
void page_69(Player &player);
void page_70(Player &player);
void page_71(Player &player);
void page_72(Player &player);
void page_73(Player &player);
void page_74(Player &player);
void page_75(Player &player);
void page_76(Player &player);
void page_77(Player &player);
void page_78(Player &player);
void page_79(Player &player);
void page_80(Player &player);
void page_81(Player &player);
void page_82(Player &player);
void page_83(Player &player);
void page_84(Player &player);
void page_85(Player &player);
void page_86(Player &player);
void page_87(Player &player);
void page_88(Player &player);
void page_89(Player &player);
void page_90(Player &player);
void page_91(Player &player);
void page_92(Player &player);
void page_93(Player &player);
void page_94(Player &player);
void page_95(Player &player);
void page_96(Player &player);
void page_97(Player &player);
void page_98(Player &player);
void page_99(Player &player);
void page_100(Player &player);
void page_101(Player &player);
void page_102(Player &player);
void page_103(Player &player);
void page_104(Player &player);
void page_105(Player &player);
void page_106(Player &player);
void page_107(Player &player);
void page_108(Player &player);
void page_109(Player &player);
void page_110(Player &player);
void page_111(Player &player);
void page_112(Player &player);
void page_113(Player &player);
void page_114(Player &player);
void page_115(Player &player);
void page_116(Player &player);
void page_117(Player &player);
void page_118(Player &player);
void page_119(Player &player);
void page_120(Player &player);
void page_121(Player &player);
void page_122(Player &player);
void page_123(Player &player);
void page_124(Player &player);
void page_125(Player &player);
void page_126(Player &player);
void page_127(Player &player);
void page_128(Player &player);
void page_129(Player &player);
void page_130(Player &player);
void page_131(Player &player);
void page_132(Player &player);
void page_133(Player &player);
void page_134(Player &player);
void page_135(Player &player);
void page_136(Player &player);
void page_137(Player &player);
void page_138(Player &player);
void page_139(Player &player);
void page_140(Player &player);
void page_141(Player &player);
void page_142(Player &player);
void page_143(Player &player);
void page_144(Player &player);
void page_145(Player &player);
void page_146(Player &player);
void page_147(Player &player);
void page_148(Player &player);
void page_149(Player &player);
void page_150(Player &player);
void page_151(Player &player);
void page_152(Player &player);
void page_153(Player &player);
void page_154(Player &player);
void page_155(Player &player);
void page_156(Player &player);
void page_157(Player &player);
void page_158(Player &player);
void page_159(Player &player);
void page_160(Player &player);
void page_161(Player &player);
void page_162(Player &player);
void page_163(Player &player);
void page_164(Player &player);
void page_165(Player &player);
void page_166(Player &player);
void page_167(Player &player);
void page_168(Player &player);
void page_169(Player &player);
void page_170(Player &player);
void page_171(Player &player);
void page_172(Player &player);
void page_173(Player &player);
void page_174(Player &player);
void page_175(Player &player);
void page_176(Player &player);
void page_177(Player &player);
void page_178(Player &player);
void page_179(Player &player);
void page_180(Player &player);
void page_181(Player &player);
void page_182(Player &player);
void page_183(Player &player);
void page_184(Player &player);
void page_185(Player &player);
void page_186(Player &player);
void page_187(Player &player);
void page_188(Player &player);
void page_189(Player &player);
void page_190(Player &player);
void page_191(Player &player);
void page_192(Player &player);
void page_193(Player &player);
void page_194(Player &player);
void page_195(Player &player);
void page_196(Player &player);
void page_197(Player &player);
void page_198(Player &player);
void page_199(Player &player);
void page_200(Player &player);
void page_201(Player &player);
void page_202(Player &player);
void page_203(Player &player);
void page_204(Player &player);
void page_205(Player &player);
void page_206(Player &player);
void page_207(Player &player);
void page_208(Player &player);
void page_209(Player &player);
void page_210(Player &player);
void page_211(Player &player);
void page_212(Player &player);
void page_213(Player &player);
void page_214(Player &player);
void page_215(Player &player);
void page_216(Player &player);
void page_217(Player &player);
void page_218(Player &player);
void page_219(Player &player);
void page_220(Player &player);
void page_221(Player &player);
void page_222(Player &player);
void page_223(Player &player);
void page_224(Player &player);
void page_225(Player &player);
void page_226(Player &player);
void page_227(Player &player);
void page_228(Player &player);
void page_229(Player &player);
void page_230(Player &player);
void page_231(Player &player);
void page_232(Player &player);
void page_233(Player &player);
void page_234(Player &player);
void page_235(Player &player);
void page_236(Player &player);
void page_237(Player &player);
void page_238(Player &player);
void page_239(Player &player);
void page_240(Player &player);
void page_241(Player &player);
void page_242(Player &player);
void page_243(Player &player);
void page_244(Player &player);
void page_245(Player &player);
void page_246(Player &player);
void page_247(Player &player);
void page_248(Player &player);
void page_249(Player &player);
void page_250(Player &player);
void page_251(Player &player);
void page_252(Player &player);
void page_253(Player &player);
void page_254(Player &player);
void page_255(Player &player);
void page_256(Player &player);
void page_257(Player &player);
void page_258(Player &player);
void page_259(Player &player);
void page_260(Player &player);
void page_261(Player &player);
void page_262(Player &player);
void page_263(Player &player);
void page_264(Player &player);
void page_265(Player &player);
void page_266(Player &player);
void page_267(Player &player);
void page_268(Player &player);
void page_269(Player &player);
void page_270(Player &player);
void page_271(Player &player);
void page_272(Player &player);
void page_273(Player &player);
void page_274(Player &player);
void page_275(Player &player);
void page_276(Player &player);
void page_277(Player &player);
void page_278(Player &player);
void page_279(Player &player);
void page_280(Player &player);
void page_281(Player &player);
void page_282(Player &player);
void page_283(Player &player);
void page_284(Player &player);
void page_285(Player &player);
void page_286(Player &player);
void page_287(Player &player);
void page_288(Player &player);
void page_289(Player &player);
void page_290(Player &player);
void page_291(Player &player);
void page_292(Player &player);
void page_293(Player &player);
void page_294(Player &player);
void page_295(Player &player);
void page_296(Player &player);
void page_297(Player &player);
void page_298(Player &player);
void page_299(Player &player);
void page_300(Player &player);
void page_301(Player &player);
void page_302(Player &player);
void page_303(Player &player);
void page_304(Player &player);
void page_305(Player &player);
void page_306(Player &player);
void page_307(Player &player);
void page_308(Player &player);
void page_309(Player &player);
void page_310(Player &player);
void page_311(Player &player);
void page_312(Player &player);
void page_313(Player &player);
void page_314(Player &player);
void page_315(Player &player);
void page_316(Player &player);
void page_317(Player &player);
void page_318(Player &player);
void page_319(Player &player);
void page_320(Player &player);
void page_321(Player &player);
void page_322(Player &player);
void page_323(Player &player);
void page_324(Player &player);
void page_325(Player &player);
void page_326(Player &player);
void page_327(Player &player);
void page_328(Player &player);
void page_329(Player &player);
void page_330(Player &player);
void page_331(Player &player);
void page_332(Player &player);
void page_333(Player &player);
void page_334(Player &player);
void page_335(Player &player);
void page_336(Player &player);
void page_337(Player &player);
void page_338(Player &player);
void page_339(Player &player);
void page_340(Player &player);
void page_341(Player &player);
void page_342(Player &player);
void page_343(Player &player);
void page_344(Player &player);
void page_345(Player &player);
void page_346(Player &player);
void page_347(Player &player);
void page_348(Player &player);
void page_349(Player &player);
void page_350(Player &player);
void page_351(Player &player);
void page_352(Player &player);
void page_353(Player &player);
void page_354(Player &player);
void page_355(Player &player);
void page_356(Player &player);
void page_357(Player &player);
void page_358(Player &player);
void page_359(Player &player);
void page_360(Player &player);
void page_361(Player &player);
void page_362(Player &player);
void page_363(Player &player);
void page_364(Player &player);
void page_365(Player &player);
void page_366(Player &player);
void page_367(Player &player);
void page_368(Player &player);
void page_369(Player &player);
void page_370(Player &player);
void page_371(Player &player);
void page_372(Player &player);
void page_373(Player &player);
void page_374(Player &player);
void page_375(Player &player);
void page_376(Player &player);
void page_377(Player &player);
void page_378(Player &player);
void page_379(Player &player);
void page_380(Player &player);
void page_381(Player &player);
void page_382(Player &player);
void page_383(Player &player);
void page_384(Player &player);
void page_385(Player &player);
void page_386(Player &player);
void page_387(Player &player);
void page_388(Player &player, bool werewolf_wound);
void page_389(Player &player);
void page_390(Player &player);
void page_391(Player &player);
void page_392(Player &player);
void page_393(Player &player);
void page_394(Player &player);
void page_395(Player &player);
void page_396(Player &player);
void page_397(Player &player);
void page_398(Player &player);
void page_399(Player &player);
void page_400(Player &player);

// int choice() {
//   int choice;
//   std::cout << "\n\nWhat will you choose? ";
//
//   while (true) {
//     std::cin >> choice;
//     // std::string temp;
//     // std::getline(std::cin, temp);
//     // choice = std::strtol(temp);
//     if (!std::cin) {
//       std::cout << "\n\nInvalid Choice. Enter again ";
//       std::cin.clear();
//       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//       continue;
//     } else
//       break;
//   }
//
//   return choice;
// }
void next() {
  std::cout << "\n\nPress any key to Continue...\n";
  std::cin.get();
}
int choice() {
  int n;
  std::string temp;
  std::cout << "Enter: ";
  while (true) {
    std::getline(std::cin, temp);
    try {
      n = std::stoi(temp);
      break;
    } catch (...) {
      std::cout << "Enter again: ";
    }
  }

  return n;
}

bool battle(Player &player, Enemy &enemy, int turnsToEscape) {
  // Returns true if the enemy was defeated
  // returns false if escaped
  // if turns to escape is -1. do not allow escape
  // if turns to escape is 0 then escape immediately available
  // if turns to escape is >1 it takes that many to escape before given the
  // option

  // The squence of combat is:
  // 1. Roll both dice once for the creature. Add its SKILL score. This total is
  // the creatures  Attack Strength.
  // 2. Roll both dice once for yourself. Add the  number rolled to your current
  // SKILL score. This total is your  Attack Strength.
  // 3. If your Attack Strength is higher than that of  the creature, you have
  // wounded it. Proceed to step 4. If the  creature's Attack Strength total are
  // the same, you have avoided each  other's blows - start the next Attack
  // Round from step 1  above. 4.You have wounded the creature, so subtract 2
  // points from  its STAMINA score. You may use your LUCK here to  do
  // additional  damage! (Button option when available)
  // 5. The creature has wounded  you, so subtract 2 points from your own
  // STAMINA score. Again you may  use LUCK at this stage.
  // 6. Make the appropriate adjustments to  either the creature's or your own
  // STAMINA scores (and your LUCK  score if you used LUCK).
  // 7. Begin the next Attack Round by  returning to your current SKILL score
  // and repeating steps 1-6. This  sequence continues until the STAMINA score
  // of either you or the  creature you are fighting has been reduced to zero
  // (death).;
  int pick = 0; // Declare pick outside the loop to persist between iterations
  bool battling = true;
  int turns = 0;
  while (battling) {

    // If its been 3 turns allow them to escape if the option is given, pass in
    // the amounnt of time needed before escape. add counter after each step.

    if (player.currStamina <= 0) {
      std::cout
          << "\n\nYou have perished in combat and your adventure ends here.";
      battling = false;
      exit(0);
      break;
    } else if (enemy.stamina <= 0) {
      std::cout << "\n\n" << enemy.name << " has been defeated!\n\n\n";
      battling = false;
      break;
    }
    int enemySkill = (rand() % 6 + 1) + (rand() % 6 + 1);
    int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
    int enemyAttackScore = enemySkill + enemy.skill;
    int playerAttackScore = player.currSkill + playerRoll + player.diceDebuff;
    std::cout << "***Battle Phase***";
    std::cout << "\n\nEnemies Skill: " << enemySkill;
    std::cout << "\nEnemies Attack Score: " << enemyAttackScore;
    std::cout << "\nRolling for Yourself: " << playerRoll;
    std::cout << "\nPlayer Attack Score: " << playerAttackScore;
    std::cout << "\n\nPlayer Stamina: " << player.currStamina;
    std::cout << "\n\nEnemy Stamina: " << enemy.stamina;

    if (playerAttackScore > enemyAttackScore) {
      std::cout << "\n\n You have wounded the " << enemy.name
                << " for 2 STAMINA.\n";

      std::cout
          << "\n\nWould you like to test your LUCK to do additional damage "
             "to the "
          << enemy.name
          << "?\n1. Roll for additional Damage\n2. Continue Battle\n";
      if (turns >= turnsToEscape && turnsToEscape != -1) {

        std::cout << "3. Escape!\n";
      }
      do {
        pick = choice();
        if (pick == 3 && turns >= turnsToEscape && turnsToEscape != -1) {
          std::cout
              << "\n\nWould you like to test your LUCK to do evade "
                 "escape damage?\n1. Roll for change to evade\n2. Escape\n";
          do {
            pick = choice();
            switch (pick) {
            case 1:
              playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
              if (playerRoll <= player.currLuck) {
                // LUCKY
                std::cout
                    << "\n\nYou successfully evaded 1 damage! And escaped!\n";
                player.removeLuck(1);
                return false;

                break;
              } else {
                // UNLUCKY

                std::cout
                    << "\n\nYou Escaped! But took 3 Damage while escaping!\n";
                enemy.stamina -= 1;
                player.removeLuck(1);
                player.removeStamina(3);

                return false;
                break;
              }
            case 2:
              std::cout << "\n\nYou escaped with 2 Damage sustained\n";
              player.removeStamina(2);
              return false;
              break; // Exit the loop and function after making a choice
            default:
              std::cout << "\nInvalid choice. Please try again.\n";
              break;
            }

          } while (pick != 1 && pick != 2);
        }

        switch (pick) {
        case 1:
          playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
          if (playerRoll <= player.currLuck) {
            // LUCKY
            std::cout << "\n\nYou successfully did 2 additional damage!";
            enemy.stamina -= 4;
            player.removeLuck(1);
            break;
          } else {
            // UNLUCKY

            std::cout << "\n\nYou failed your LUCK roll and grazed the "
                      << enemy.name << " for 1 STAMINA\n";
            enemy.stamina -= 1;
            player.removeLuck(1);
            break;
          }
        case 2:
          std::cout << "\n\nContinuing the Battle!\n";
          enemy.stamina -= 2;
          break; // Exit the loop and function after making a choice
        default:
          std::cout << "\nInvalid choice. Please try again.\n";
          break;
        }
        turns++;
      } while (pick != 1 && pick != 2);
      turns++;
    } else if (enemyAttackScore > playerAttackScore) {
      std::cout << "\n\nThe " << enemy.name
                << " has wounded you for 2 STAMINA points.";

      std::cout << "\n\nWould you like to test your LUCK to do attempt to "
                   "evade damage?\n"

                << "\n1. Roll to Attempt Evade\n2. Continue Battle\n";
      if (turns >= turnsToEscape && turnsToEscape != -1) {

        std::cout << "3. Escape!\n";
      }
      do {
        pick = choice();
        if (pick == 3 && turns >= turnsToEscape && turnsToEscape != -1) {
          std::cout
              << "\n\nWould you like to test your LUCK to do evade "
                 "escape damage?\n1. Roll for change to evade\n2. Escape\n";
          do {
            pick = choice();
            switch (pick) {
            case 1:
              playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
              if (playerRoll <= player.currLuck) {
                // LUCKY
                std::cout
                    << "\n\nYou successfully evaded 1 damage! And escaped!\n";
                player.removeLuck(1);
                return false;

                break;
              } else {
                // UNLUCKY

                std::cout
                    << "\n\nYou Escaped! But took 3 Damage while escaping!\n";
                enemy.stamina -= 1;
                player.removeLuck(1);
                player.removeStamina(3);

                return false;
                break;
              }
            case 2:
              std::cout << "\n\nYou escaped with 2 Damage sustained\n";
              player.removeStamina(2);

              return false;

              break; // Exit the loop and function after making a choice
            default:
              std::cout << "\nInvalid choice. Please try again.\n";
              break;
            }

          } while (pick != 1 && pick != 2);
        }
        switch (pick) {
        case 1:
          playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
          if (playerRoll <= player.currLuck) {
            // LUCKY
            std::cout << "\n\nYou successfully dodged the attack and only took "
                         "1 Damage\n";
            player.removeStamina(1);
            player.removeLuck(1);
            break;
          } else {
            // UNLUCKY
            std::cout
                << "\n\nYou failed to dodge the attack, and took 3 damage!\n";
            player.removeStamina(3);
            player.removeLuck(1);
            break;
          }
        case 2:
          std::cout << "\n\nContinuing the Battle!\n";
          player.removeStamina(2);
          break; // Exit the loop and function after making a choice
                 //
                 //
        default:
          std::cout << "\nInvalid choice. Please try again.\n";
          break;
        }

      } while (pick != 1 && pick != 2);

      turns++;
    } else {
      std::cout << "\n\nBoth you and the " << enemy.name
                << " failed to hit eachother.\n";
      turns++;
    }
  }
  return true;
}

void viewInventory(Player &player) {
  std::cout << "\n***** INVENTORY *****";
  std::cout << "\n--SKILL--\n";
  std::cout << "\nInitial Skill=" << player.initSkill;
  std::cout << "\nCurrent Skill=" << player.currSkill;
  std::cout << "\n\n--STAMINA--\n";
  std::cout << "\nInitial Stamina=" << player.initStamina;
  std::cout << "\nCurrent Stamina=" << player.currStamina;
  std::cout << "\n\n--LUCK--\n";
  std::cout << "\nInitial Luck=" << player.initLuck;
  std::cout << "\nCurrent Luck=" << player.currLuck;
  std::cout << "\n\n***GOLD***\n" << player.gold;
  // TODO Add jewel Handling
  // std::cout << "\n\nJEWELS: " << player.jewels;
  // TODO Add Handling for multiple potions. USE ITEM STRUCT OR MAKE SIMILAR
  // POTION STRUCT
  std::cout << "\n\n***POTIONS***\n";
  for (int i = 0; i < player.potions.size(); i++) {
    std::cout << player.potions[i].getName() << std::endl;
  }
  std::cout << "\n\n***PROVISIONS REMAINING***\n" << player.provisions;

  std::cout << "\n\n***EQUIPMENT***" << std::endl;
  for (int i = 0; i < player.equipment.size(); i++) {
    std::cout << player.equipment[i].getName() << std::endl;
  }
  // for (const auto &item : player.inventory) {
  //   std::cout
  //       << item
  //       << std::endl; // Assuming player.inventory is a list of
  //       strings/items
  // }
  std::cout << "\nPress Enter to return to the previous menu...\n";
  // std::cin.ignore();
  //
  std::cin.get(); // Wait for the user to press enter
}

void intro(Player &player) {

  std::cout << "Welcome to the Forest of Doom!\nBased on Ian Liviningstone's "
               "Book: The Forest Of Doom.\n";

  std::cout
      << "\n\n---PREFACE---\nOnly the foolhardy or the very brave would "
         "willingly risk a journey into Darkwood Forest, where strange, "
         "twisting paths wind their way into the eeire depths. Who knows "
         "what "
         "monstrous creatures lurk in the threatening shadows, or what "
         "deadly "
         "adventures await the unwary traveller? Do YOU dare to enter?\n\nIn "
         "a "
         "desperate race against time, deep within Darkwood, your quest is "
         "to "
         "find the missing pieces of the legendary Hammer of Stonebridge, "
         "which was fashioned by Dwarfs to protect peaceful Stonebrdige "
         "against its ancient doom.\n\nTwo dice, a pencil and an eraser are "
         "all you need to embark on this thrilling adventure of sword and "
         "sorcery, complete with its elaborate combat system and a score "
         "sheet "
         "to record your gains and losses.\n\nMany dangers be ahead and your "
         "success is by no means certain. Powerful adversaries are ranged "
         "against you and often your only chice is to kill or be killed!";

  std::cout
      << "\n\n---HOW TO PLAY---\nBefore embarking on your adventure, you "
         "must first determine your own strengths and weaknesses. You have "
         "in "
         "your possession a sword "
         "and a backpack containing provisions (food and drink) for the "
         "trip. "
         "You have been preparing for your quest by training yourself in "
         "swordplay and exercising vigorously to build up your "
         "stamina.\n\nTo "
         "see how effective your preparations have been, you must use the "
         "dice "
         "to determine your initial SKILL and STAMINA scores. \n\nThere will "
         "be an option to review your STATS on every menu.";

  std::cout << "\n\n---Skill, Stamina and Luck---\nWe will now determine "
               "your SKILLS. Skills are decided with dice rolling, we will "
               "take care of that for you.\n\n";
  std::cout
      << "\nSKILL score reflects your swordsmanship and general fighting "
         "expertis; higher is better!\n\nSTAMINA score reflects your general "
         "constitution, your will to survive, your determiniation and "
         "overall "
         "fitness; higher score will longer your survival.\n\nLUCK score "
         "indicates how naturally luck you are as a person!\n\n";

  std::cout << "\n********************************";
  std::cout << "\nRolling for initial SKILL: " << player.initSkill;
  std::cout << "\nRolling for initial STAMINA: " << player.initStamina;
  std::cout << "\nRolling for initial LUCK: " << player.initLuck;
  std::cout << "\n********************************";
  next();

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
         "Attack Strength.\n3. If your Attack Strength is higher than that "
         "of "
         "the creature, you have wounded it. Proceed to step 4. If the "
         "creature's Attack Strength total are the same, you have avoided "
         "each "
         "other's blows - start the next Attack Round from step 1 "
         "above.\n4.You have wounded the creature, so subtract 2 points from "
         "its STAMINA score. You may use your LUCK here to  do additional "
         "damage! (Button option when available)\n5. The creature has "
         "wounded "
         "you, so subtract 2 points from your own STAMINA score. Again you "
         "may "
         "use LUCK at this stage.\n6. Make the appropriate adjustments to "
         "either the creature's or your own STAMINA scores (and your LUCK "
         "score if you used LUCK).\n7. Begin the next Attack Round by "
         "returning to your current SKILL score and repeating steps 1-6. "
         "This "
         "sequence continues until the STAMINA score of either you or the "
         "creature you are fighting has been reduced to zero (death).";

  next();
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
         "battles or when you come across situations in which you could "
         "either "
         "be lucky or unlucky (details of these are given on the pages "
         "themselves), you may call on your luck to make the outcome more "
         "favourable. But beware! Using luck is a risky business and if you "
         "are unlucky, the results could be disastrous.\n\nThe procedure for "
         "using your luck is as follows: roll two dice. If the number rolled "
         "is equal to or less than your current LUCK score, you have been "
         "lucky and the result will go in your favour. If th enumber rolled "
         "is "
         "higher than your current LOCK score, you have been unlucky and you "
         "will be penalized.\n\nRoll <= Your LUCK Score(LUCKY)\nRoll > Your "
         "LUCK Score(UNLUCKY)\nThis procedure is known as Testing your Luck. "
         "Each time ou Test your Luck, you must subtract one point from your "
         "current LUCK score. This you will soon realize that the more you "
         "rely on your luck, the more risky this will become.";
  std::cout
      << "\n\n---USING LUCK IN BATTLES---\nOn certain pages of the book you "
         "will be told to Test your Luck and will be told the consequences "
         "of "
         "your being lucky or unlucky. However, in battles, you always have "
         "the option of using your luck either to inflict a more serious "
         "wound "
         "on a creature you have just wounded, or to minimize the effects of "
         "a "
         "wound the creature has just inflicted on you.\nIf you have just "
         "wounded the creature, you may Test your Luck as described above. "
         "If "
         "you are lucky, you have inflicted a severe wound and may subtract "
         "an "
         "extra 2 points from the creature's STAMINA score. However, if you "
         "are unlucky, the wound was a mere graze and you must restore 1 "
         "point "
         "to the creature's STAMINA (i.e. instead of scoring the normal 2 "
         "points of damage, you have now scored only 1).\n If the creature "
         "has "
         "just wounded you, you may Test your Luck to try to minimize the "
         "wound. If you are lucky, you have managed to avoid the full damage "
         "of the blow. Restore 1 point to STAMINA (i.e. instead of doing 2 "
         "points of damage it has done only 1). If you are unlucky, you have "
         "taken a more serious blow. Subtract 1 extra STAMINA "
         "point.\nRemember "
         "that you must subtract 1 point from your onw LUCK score each time "
         "you Test your Luck.";
  next();
  std::cout
      << "\n\n---RESTORING SKILL, STAMINA, AND LUCK---\n\n-SKILL-\nYour "
         "SKILL "
         "score will not change much during ou adventure. Occasionally, a "
         "page "
         "may give instructions to increase or decrease your SKILL score. A "
         "Magic Weapon may increase your SKILL, but remember that only one "
         "weapon can be used at a time! You cannot claim 2 SKILL bonuses for "
         "carrying two Magic Swords. Your SKILL score can never exceed its "
         "Initial value unless specifically instructed. Drinking the Potion "
         "of "
         "Skill will restore your SKILL to its Inital level at "
         "anytime.\n\n-STAMINA AND PROVISIONS-\nYour STAMINA score will "
         "change "
         "a "
         "lot during your adventure as you fight monsters and undertake "
         "arduous tasks. As you near your goal. your STAMINA level maybe "
         "dangerously low and battles maybe particularly risky, so be "
         "careful!\nYour backpack contains enough provisions for ten meals. "
         "You may rest and eat at any time except when engaged in a Battle. "
         "Eating a meal restores 4 STAMINA points. When you eat a meal, add "
         "4 "
         "points to your STAMINA score and deduct 1 point from your "
         "Provisions. A separate Provisions Remaining box is provided on the "
         "Adventure Sheet for recording details of Provisions. Remember that "
         "you have a long way to go, so use your Provisions "
         "wisely!\nRemember "
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
  next();
  std::cout
      << "\n\n---EQUIPMENT AND POTIONS---\nYou will start your "
         "adventure with a bare minimum of equipment, but you may find "
         "or buy other items during your travels, You are armed with a "
         "sword and are dressed in leather armour. You have a backpack "
         "to hold your Provisions and any treasures you may come across.\nIn "
         "addition, you may take one bottle of a magical potion which will "
         "aid "
         "you on your quest. You may choose to take only one bottle of any "
         "of "
         "the "
         "following:\n*******************************************************"
         "**"
         "***********************\n\t1. A Potion "
         "of Skill - restores "
         "SKILL points.\n\t2. A Potion "
         "of Strength - restores STAMINA points\n\t3. A Potion of Fortune - "
         "restores LUCK points and adds 1 to Initial "
         "LUCK\n*************************************************************"
         "**"
         "*****************\n";
  int starterPotion = 0;
  do {
    std::cout << "\nPress 1, 2, or 3 to Choose starter Potion...\n";
    starterPotion = choice();
    // std::cin >> starterPotion;
    // if (!std::cin) {
    //   std::cin.clear();
    //   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //   fflush(stdin);
    //   // std::cin.get();
    // }
    switch (starterPotion) {
    case 1:
      std::cout << "\nPotion of SKILL added to inventory.\n";
      player.potions.push_back({"Potion of SKILL", 5});
      break;
    case 2:
      std::cout << "\nPotion of STAMINA added to inventory.\n";
      player.potions.push_back({"Potion of STAMINA", 5});
      break;
    case 3:
      std::cout << "\nPotion of LUCK added to inventory.\n";
      player.potions.push_back({"Potion of LUCK", 5});
      break;
    default:
      std::cout << "Invalid Input. Please press keys 1, 2, or 3 for a starter "
                   "potion.";
    }
  } while ((starterPotion != 1) && (starterPotion != 2) &&
           (starterPotion != 3));

  next();
  std::cout << "\nThese potions may be taken at any time during your adventure "
               "(except when engaged in Battle). Taking a measure of potion "
               "will restore SKILL, STAMINA or LUCK scores to their Intial "
               "level (and the Poption of Fortune will add 1 point to your "
               "Initial LUCK score before LUCK is restored).\nEach bottle of "
               "potion contains enough for one measure, i.e. the "
               "characterisistc may be restored once during an adventure.";
  std::cout << "\n\n---HINTS ON PLAY---\nThere is one true way through "
               "Darkwood Forest and it will take you several attempts to find "
               "it. Make notes and draw a map as you explore - this map will "
               "be invaluable in future adventures and enable you to progress "
               "rapidly through to unexplored sections.\nNot all areas contain "
               "treasure; many merely contain traps and creatures which you "
               "will no doubt fall foul of. There are many 'wild goose chase' "
               "passages and while you may indeed progress through to you "
               "rultimate desination, it is by no means certain that you will "
               "find what you are searching for.\nThe one true way involves a "
               "minimum of risk and any player, no matter how weak on initial "
               "dice rolls, should be able to get through fairly easily.\nMay "
               "the luck of the gods go with you on the adventure ahead!";
  next();
}

void background() {
  std::cout
      << "\n\n\n---BACKGROUND---\nYou are an adventurer, a sword for hire, "
         "and "
         "have been roaming the northern borderlands of your kingdom. Having "
         "always spurned the dullness of village life, you now wander the "
         "lands in search of wealth and danger. Despite the long walks and "
         "rough outdoor life you are content with your unknown destiny. The "
         "world holds no fears for you as you are a skillful warrior, well "
         "practiced in the art of slaying evil men and beasts, with your "
         "trusty sword. Not once during the last ten days since entering the "
         "northern borderlands have you set eyes upon another person. This "
         "does not worry you at all, as you are happy with your own company "
         "and enjoy the slow, sunny days hunting, eating and sleeping\n\nIt "
         "is "
         "evening, and having feasted on a dinner of rabbit, spit-roasted on "
         "an open fire, you settle down to sleep beneath your sheepskin "
         "blanket. There's a full moon, and the light sparkles on the blade o"
         "f your broadsword skewered into the ground by your side. You gaze "
         "at "
         "it, wondering when you will next have to wipe the blood of some "
         "vile "
         "creature from its sharp edge. These are strange lands, inhabited "
         "by "
         "weird and loathsome beasts - goblins, trolls and even "
         "dragons.\n\nAs "
         "the flame of your camp fire gently dies, you begin to drift "
         "asleep, "
         "and images of screaming, green-faced trolls flicker through your "
         "mind. Suddenly, in the bushes to your left, you hear the load "
         "crack "
         "of a twig breaking under a clumsy foot, You leap up and grab your "
         "sword from the ground. You stand motionless but alert, ready to "
         "pounce on your unseen adversary. Then you hear a groan, followed "
         "by "
         "the dull thud of a body falling to the ground. Is it a trap? "
         "Slowly "
         "you walk over to the bush where the noise is coming from and "
         "carefully pull back the branches. You look down to see a little "
         "old "
         "man with a great bushy beard, his face contorted with pain. You "
         "crouch down to remove the iron helmet covering his balding head "
         "and "
         "notice two crossbow bolts protruding from the stomach of his "
         "plump, "
         "chainmail-clad torso. Picking him up, you carry him over to the "
         "fire "
         "and stir the dying embers into life. After covering him with the "
         "sheepskin blanket, you manage to get the old man to drink a little "
         "water. He coughs and moans. He sits up rigid, eyes staring fixedly "
         "ahead, and starts to shout.\n\n\"I'll get them! I'll get them! "
         "Don't "
         "you fear, Gillibran, Bigleg is coming to bring you the hammer. Oh "
         "yes, indeed I am. Oh Yes...\"\n\nThe dwarf, whose name you presume "
         "to be Bigleg, is obviously delirious from the poison-tipped bolts "
         "lodged in his stomach. You watch as he slumps down again to the "
         "ground, then whispers his name in his ear. His eyes stare "
         "unblinkingly at you, as he against starts to shout.\"Ambush! Look "
         "out! Ambush! Aagh! The hammer! Take the hammer to Gillibran! Save "
         "the dwarves!\"His eyes half close and the pain seems to ease a "
         "little, and as the delirium subsides, he speaks to you again in a "
         "low whisper.\n\n\"Help us, friend... take the hammer to "
         "Gillibran... "
         "opnly the hammer will unite our people against the trolls... We "
         "were "
         "on our way to Darkwood in search of the hammer... ambushed by the "
         "little people... others killed... the map in my pouch will take "
         "you "
         "to the home of Yaztromo, the master mage of these parts... he has  "
         "great magics for sale to protect you against the creatures of "
         "Darkwood... take my gold... I beg you to find the hammer and take "
         "it "
         "to Gillibran, my Lord of Stonebridge... you will be well "
         "rewarded...\"\n\nBigleg opens his mouth to start another sentence, "
         "but nothing comes out except his last dying breath. You sit down "
         "and "
         "ponder Bigleg's words. Who is Gillibran? Who is Yaztromo? What is "
         "all the fuss about the dwarfish hammer? You reach over to th "
         "estill "
         "ody of Bigleg and remove the pocuh from teh leather belt around "
         "his "
         "waist. Inside you find 30 Gold Pieces and a map.";
  std::cout << "\n\n*****\n30 Gold "
               "Pieces "
               "and Yaztromo's Map Added to your Inventory\n*****\n\n";
  next();
  std::cout
      << "Jingling the "
         "coins in "
         "your hand you think of the possible reward which may await you "
         "just "
         "for returning a hammer to a village of dwarfs. You decide to try "
         "to "
         "find the hammer in Darkwood Forest it's been a few weeks since "
         "your "
         "last good battle, and, what is more, you are liekly to be well "
         "paid "
         "for this one.\n\nWith your mind made up, you settle down to sleep, "
         "having taken back the sheepskin blanket  from poor Bigleg. In the "
         "morning you bury the old dwarf and gather up your possessions. You "
         "examine the map, look up to the sun, and find your bearings. "
         "Whistling merrily, you head off south at a good pace, eager to "
         "meet "
         "the man Yaztromo and see what he has to offer.";
  next();
}

void page_1(Player &player) {
  int pick = 0;
  do {
    std::cout
        << "\n\nYour walk to Yaztromo's takes a little over half a day, and "
           "you "
           "arrive at his stone tower home dirty and hungry. As the tower is "
           "set "
           "back on the edges of Darkwood some fifty metrcs away from the path "
           "you have been following, it is difficult to find. Finally you walk "
           "up to the huge oak door, somewhat relieved to find that it does "
           "exist and that Bigleg had not been speaking wildly in his "
           "delirium. "
           "A large brass bell and gong hang from the stone archway. As you "
           "ring "
           "the bell, a shiver runs clown your spine and you realize that the "
           "loud 'bong' invades a deep silence, which you had not noticed "
           "before. There are no sounds of birds or animals to be heard. You "
           "wait anxiously at the door and hear slow footsteps descending "
           "stairs "
           "from the tower above. A small wooden slot in the door slides open, "
           "and two eyes appear and examine you.\n\"Well, who are you?\" "
           "demands "
           "a grumpy voice through the hole.\n\nYou answer that you are an "
           "adventurer in search of the master mage Yaztromo, intending to "
           "purchase nagical items ftom him to combat the creatures of "
           "Darkwood "
           "Forest. \n\n\"Oh! Well in that case, if you are interested in "
           "buying "
           "some of my merchandise, you had better come up. I am Yaztromo.\"";
    std::cout << "\n\nWill you:\n\n1. Follow him up the stairs?\n2. Draw your "
                 "sword and attack him?\n";
    int pick = choice();
    switch (pick) {
    case 1:
      page_261(player);
      // page_7(player);
      // page_177(player);
      break;
    case 2:
      page_54(player);
      break;
    }
  } while (pick != 1 && pick != 2);
}

void page_2(Player &player) {
  std::cout << "\n\nYour adventure ends here as your tasty fresh flesh is "
               "about to become a savoury feast for the victorious Ghoul.";
}
void page_3(Player &player) {
  std::cout << "\n\nYou follow five more arrows to the trunk of an old dead "
               "tree still rooted in the ground. You see that the trunk is "
               "hollow and that the hole continues through the trunk into the "
               "ground to make a tunnel. It is dark down the hole and you "
               "cannot see how far it is to the bottom.";

  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Ring of Light") {
      std::cout << "\n1. Use Ring of Light?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nRing of Light consumed.";
        page_322(player);
        break;
      case 2:
        page_120(player);
        break;
      }

    } else {
      std::cout << "\n\nYou do not Possess a Ring of Light and must return to "
                   "the path.";
      next();
      break;
    }
  }
}
void page_4(Player &player) {
  std::cout << "\n\nLose 4 STAMINA points.\n";
  player.removeStamina(4);
  if (player.currStamina <= 0) {
    std::cout
        << "\n\nYou have died from blood loss, and your adventure ends here.";
  } else {
    int pick = 0; // Declare pick outside the loop to persist between iterations
    do {
      std::cout
          << "\n\nYou manage to pull the arrow from your shoulder although "
             "the pain is agonizing.\n1. If you still wish to enter the "
             "cave.\n2. If you wish you crawl back to the junction.\n";
      pick = choice();
      switch (pick) {
      case 1:
        page_49(player);
        return; // Exit the loop and function after making a choice
      case 2:
        page_93(player);
        return; // Exit the loop and function after making a choice
      case 3:
        viewInventory(player);
        break; // Go back to the loop to allow for another choice
      default:
        std::cout << "\nInvalid choice. Please try again.\n";
        break;
      }
    } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
  }
}
void page_5(Player &player) {

  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nSitting in the ornate throne you feel strangely "
                 "uncomfortable. The two Clone Warriors grovel on the floor in "
                 "front of you in complete subservience. Do they expect you to "
                 "become their new master?\n1. If you wish the crown on your "
                 "head.\n2. If you wish to leave the alcove and climb up the "
                 "rest of the steps to the roof of the cavern.\n";
    pick = choice();
    switch (pick) {
    case 1:
      page_333(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_249(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_6(Player &player) {
  std::cout
      << "\n\nAs you walk past the Goblin he growls unlike anything you have "
         "ever heard before, a growl that you would not expect a Goblin to "
         "make. Felling a little nervous you head quickly north.\n";
  next();
  page_148(player);
}
void page_7(Player &player) {
  std::cout
      << "\n\nYou draw your sword and prepare to meet the yellow- and "
         "black-striped attackers. They are KILLER BEES and will attack in "
         "separate droves, each drove counting as a single creature.\n";

  std::cout << "\n\nFirst KILLER BEE --- 7 SKILL --- 3 STAMINA\n";
  Enemy bee1("KILLER BEE", 7, 3);
  battle(player, bee1, -1);
  std::cout << "\n\nSecond KILLER BEE --- 8 SKILL --- 4 STAMINA\n";
  Enemy bee2("KILLER BEE", 8, 4);
  battle(player, bee2, -1);
  std::cout << "\n\nThird KILLER BEE --- 7 SKILL --- 4 STAMINA\n";
  Enemy bee3("KILLER BEE", 7, 4);
  battle(player, bee3, -1);
  next();
  page_23(player);
}
void page_8(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nWalking along the path, you hear footsteps and arguing voices "
           "ahead of you.\n1. If you wish to meet the owners voices.\n2. If "
           "you "
           "would rather hide in the bushes and let them walk by.\n3. View "
           "Inventory\n";
    pick = choice();
    switch (pick) {
    case 1:
      page_317(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_392(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_9(Player &player) {
  std::cout << "\n\nYou unlock the door and step back, drawing your sword in "
               "case the Golbin tries to attack you. He picks up a wooden "
               "stool and, waving it in the air, kicks the door open and "
               "charges at you screaming.\nYou must fight\n";
  std::cout << "\n\nGOBLIN --- 5 SKILL --- 4 STAMINA\n";
  Enemy goblin("GOBLIN", 5, 4);
  battle(player, goblin, -1);
  next();
  page_176(player);
}
void page_10(Player &player) {
  std::cout << "\n\nYou pick up a good-sized rock off the floor and take aim. "
               "You throw the rock with all your might at the Ogre but are "
               "dismayed to see it fly past his head and crash against the far "
               "wall of the cave. You curse, but decide nevertheless to rush "
               "into the cave to attack the Ogre.\n";
  next();
  page_290(player);
}
void page_11(Player &player) {

  std::cout << "\n\nYou start to lose your balance as the illusion distorts "
               "your mind. You close your eyes and hold your head in your "
               "hands but it makes no difference. You reel around the room and "
               "then fall to the floor unconscious.\n";
  next();
  page_353(player);
}
// Gnome gives back sword
void page_12(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYou tell the Gnome that perhaps you had been a little "
                 "hasty in drawing your sword, but you had to be prepared for "
                 "anything within the evil boundary of Darkwood Forest. He "
                 "replies that that is no excuse for drawing your weapon on a "
                 "defenceless old mane and, if you want your sword back, it "
                 "will cost you 10 Gold Pieces or two items of treasure from "
                 "your backpack.\n1. To hand over the 10 Gold\n2. Give 2 "
                 "pieces of Treasure\n\nCurrent Gold: "
              << player.gold << "\n";
    pick = choice();
    switch (pick) {
    case 1:
      if (player.gold >= 10) {

        std::cout << "\n\nYou pay him 10 Gold and to your relief, your beloved "
                     "sword is returned.\n";
        player.gold -= 10;
        // goto GnomeConvo;
      } else {
        std::cout << "\n\nYou do not have enough Gold to give the Gnome, and "
                     "must give him 2 items from your backpack.\n";
        goto GnomeTreasure;
      }
      break; // Exit the loop and function after making a choice
    case 2: {
    GnomeTreasure:
      if (player.equipment.size() > 0) {
        for (int j = 0; j < 2; j++) {

          for (int i = 0; i < player.equipment.size(); i++) {
            std::cout << i + 1 << ". " << player.equipment[i].getName() << "\n";
          }
          pick = choice();
          for (int i = 0; i <= player.equipment.size(); i++) {
            if (pick == i) {
              std::cout
                  << player.equipment[i - 1].getName()
                  << " removed from your Inventory and given to the Gnome.\n";
              player.equipment.erase(player.equipment.begin() + i - 1);
            }
          }
        }
      } else if (player.gold > 10) {
        std::cout << "\n\nYou don't have enough Treasure pay the Gnome. Pay "
                     "with Gold instead or your adventure will end.\n";
      } else {
        std::cout << "\n\nYour adventure ends here. The Gnome has stolen your "
                     "sword, and ran away.";
      }
      break; // Exit the loop and function after making a choice
    }
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
  pick = 0;
  do {
    // GnomeConvo:
    std::cout << "\n\n1. If you wish to continue the conversation with him\n2. "
                 "If you have had enough of the Gnome and would rather head "
                 "west along the path.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_271(player);
      return;
    case 2:
      page_67(player);
      return;
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }

  } while (pick != 1 && pick != 2);
}
void page_13(Player &player) {
  std::cout
      << "\n\nThe vibrations feel like shock waves which seem to hammer your "
         "body. Your legs feel like lead and you are unable to move them. "
         "Suddenly the hut collapses and crashes to the ground. The sky "
         "darkens and a wind starts to howl all about you. The wind blows "
         "harder and becomes as strong as gale, its force knocking you to the "
         "ground. You cling to the porch and shielf your face from the dirt "
         "and debris thrown up by the gale. Above the deafening noise of the "
         "wind you hear laughter followed by a deep voice rejoicing, \"I'm "
         "free! I'm free!\" You have released an EARTH ELEMENTAL on to the "
         "world.\n\nLose 3 LUCK points.\n\nGradually the howling wind dies "
         "down "
         "and the skies brighten. You pick yourself up from out of the rubble "
         "and walk slowly back to the path to head north again.\n";
  player.removeLuck(3);
  next();
  page_149(player);
}
void page_14(Player &player) {
  std::cout
      << "\n\nThe pit is circular with smooth sides and you are too weak from "
         "your fall to climb out. You call for help, but nobody comes to your "
         "aid. You sit down and ponder your fate. After about an hour you hear "
         "a noise overhead. You look up to see the bearded face of a stocky "
         "man wearing a fur hat. He looks annoyed. He is a fur trapper and you "
         "have ruined his trap. He shouts down to you that if you expect him "
         "to throw a rope down to rescue you, it is going to cost you 3 Gold "
         "Pieces. Failing that, he will take any magical item you care to give "
         "him from your backpack. After you agree to pay off the angry fur "
         "trapper he throws down a rope to you and you climb out of the pit. "
         "You hand over the feee, crossing it off your Equipment List, and "
         "glare at the unfriendly fur trapper before setting off north again "
         "down the gorge.\n";
  player.removeGold(3);
}
void page_15(Player &player) {
  std::cout
      << "\n\nThe slope is steep and you slip on the slime, tumbing head "
         "over heels down the hole to the bottom, into a large earthen "
         "cavern. You jump to your feet and are large earthen cavern. You "
         "jump to your feet and are alarmed to see the shiny tip of a poison "
         "barb on the tail end of a huge STING WORM coming straight at you. "
         "The String Worm is about five metres long and has huge yellow "
         "segments, but all you care about is protecting yourself from the "
         "barb. There is no time to scramble out of the hole - you must draw "
         "your sword and fight.\n";

  std::cout << "\n\nSTING WORM --- SKILL 8 --- STAMINA 7\n";
  Enemy stingworm("STING WORM", 8, 7);
  battle(player, stingworm, -1);
  page_217(player);
  return;
}
void page_16(Player &player) {
  std::cout
      << "\n\nYou shout at the three humanoids who are tending a patch of "
         "red-topped fungi. Again they ignore you, continuing with thier work. "
         "You take hold of a fungus top, breaking a piece off, and start to "
         "eat. It tastes good but a terrible pain grips your tomach. The "
         "fungus is poisonous. Do you have a Potion of Anti-Poison?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Potion of Anti-Poison") {
      std::cout << "\n1. Potion of Anti-Poison?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nPotion of Anti-Poison Consumed.";
        page_211(player);
        break;
      case 2:
        page_345(player);
        break;
      }
    }
  }
}
void page_17(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nA ladder runs down the inside of the well to the water "
           "below. However, there appears to be a tunnel just above the "
           "surface of the water, running north. It is circular and has "
           "a diameter of one metre. You may:\n\n1. Toss a Gold Piece into "
           "the well to make a wish.\n2. Descend the ladder to look down "
           "the tunnel.\n3. Return to the path to head west.\n";
    pick = choice();
    switch (pick) {
    case 1:
      if (player.gold >= 1) {

        page_89(player);
      } else {
        do {
          std::cout
              << "\n\nYou do not have enough Gold to throw into the wishing "
                 "well.\n1. Descend the ladder to look down "
                 "the tunnel.\n2. Return to the path to head west.\n";
          pick = choice();
          switch (pick) {
          case 1:
            page_256(player);
            break;
          case 2:
            page_238(player);
          }
        } while (pick != 1 && pick != 2);
      }
      return;
    case 2:
      page_256(player);
      return;
    case 3:
      page_238(player);
      return;

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 &&
           pick != 3); // Loop until player picks WEST or EAST
}
void page_18(Player &player) {
  std::cout << "\n\nYour plan works and the fever dies down. Mercifully the "
               "hair on the back of your hands disappears and you slump back "
               "to sleep again, exhausted. In the morning you collect your "
               "belongings and head north along the path into the hills.\n";
  next();
  page_198(player);
}
void page_19(Player &player) {
  std::cout
      << "\n\nAlthough weak from the fever, you manage to sit up. You take "
         "hold of your sword and, gritting your teeth, cut yourself where "
         "the "
         "Werewolf bit you. Blood runs quickly from the wound, and, "
         "hopefully, "
         "the disease with it.\n\nLose 1 STAMINA point due to blood loss\n";

  if (player.currStamina > 2) {

    player.removeStamina(1);

    next();
    page_18(player);
  } else {
    std::cout
        << "\n\nYou have died from blood loss. Your adventure ends here.\n";
    exit(0);
  }
}
void page_20(Player &player) {
  std::cout << "\n\nWalking east you come across a branch in the path heading "
               "south. You decide to ignore it and continue east.\n";
  next();
  page_277(player);
}
void page_21(Player &player) {
  std::cout
      << "\n\nThe pain increases and you quickly reach into your backpack to "
         "pull out the small bottle labelled Potion of Anti-Poison. You gulp "
         "down its contents. Your body relaxes and the effects of the poison "
         "wear away. You ponder what else might be in store for you in this "
         "forest and turn north up the path.\n";
  next();
  page_226(player);
}
void page_22(Player &player) {
  std::cout
      << "\n\nThe gass is toxic and your eyes start to water. You cough and "
         "hold your breath, running round the cave trying to escape from the "
         "gas cloud which envelops your face. Your lungs feel as though they "
         "are bursting and you are forced to inhale. Reduce your SKILL by 2 "
         "and your STAMINA by the amount of one die roll.\n";
  player.removeSkill(2);
  int playerRoll = (rand() % 6 + 1);
  std::cout << "\n\nRolled " << playerRoll << ". And taken " << playerRoll
            << " damage.";
  player.removeStamina(playerRoll);
  std::cout
      << "\n\nIf  you are still alive, you are relieved to see the gas cloud "
         "fade away. You put the silver box in your backpack and leave the "
         "cave immediately to continue your quest northwards.\n";
  next();
  page_358(player);
}
void page_23(Player &player) {
  std::cout
      << "\n\nYou wipe the sweat  from your forehead and wonder what else "
         "these evil lands have in store for you. You sit down and rest for "
         "a "
         "while. Later you set off towards the sound of the flowing water.\n";
  next();
  page_339(player);
}
void page_24(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe muscles in your neck start to stiffen and you feel the "
           "effects of poison from the darts running through your body. You "
           "reach quickly into your backpack and pull out the small bottle "
           "labelled Potion of Anit-Poison and gulp down its contents. Your "
           "body relaxes and the effects of the poison wear awy. On seeing "
           "this, the Pygmies turn and run off into the grasses.\n1. Draw "
           "your "
           "sword and run into the grass after the Pygmies.\n2. Continue "
           "north "
           "along the path.\n";
    pick = choice();
    switch (pick) {
    case 1:
      page_377(player);
      return;
    case 2:
      page_92(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_25(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nEventually the path levels out and you find yourself on a "
           "valley floor. The path continues north but also a new path leads "
           "off to the west.\n1. To continue north\n2. To go west.\n";
    pick = choice();
    switch (pick) {
    case 1:
      page_369(player);
      return;
    case 2:
      page_56(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_26(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou decide to start your search at the wooden shelves. All "
           "the "
           "books are written in a language unfamiliar to you and contain "
           "strange diagrams. The charts and scrolls are also unintelligible "
           "to you. You open cupboards and drawers but all you find are more "
           "books, leather-bound and dusty. You are about to give up "
           "searching "
           "the room when you notice one more book on the floor, acting as a "
           "support for a broke table leg. Will you:\n1. Pickup the "
           "book?\n2. "
           "Give up your search and return to the path to head north.\n";
    pick = choice();
    switch (pick) {
    case 1:
      page_91(player);
      return;
    case 2:
      page_220(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_27(Player &player) {
  std::cout << "\n\nWiping the thick green sap-blood from your sword you set "
               "off north again. You are relieved to see that the trees are at "
               "last beginning to thin out and appear less threatening.\n";
  next();
  page_329(player);
}
void page_28(Player &player) {
  std::cout << "\n\nDo you possess an Armband of Strength?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Armband of Strength") {
      std::cout << "\n1. Armband of Strength?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nArmband of Strength Consumed.";
        page_52(player);
        break;
      case 2:
        page_266(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Armband of Strength\n";
  next();
  page_266(player);
}
void page_29(Player &player) {
  std::cout
      << "\n\nIn a small clearing amidst the trees you see two small "
         "creatures "
         "with wary skin, dressed in leather armour. They appear to be "
         "arguing over who should be in charge of the rabbit which is being "
         "spit-roasted over an open fire. On seeing you, they cease their "
         "argument and draw their short swords. You are going to have to "
         "fight "
         "the ORCS advancing towards you.\n";

  std::cout << "\n\nFirst ORC --- SKILL 5 --- STAMINA 5\n";
  std::cout << "\n\nSecond ORC --- SKILL 5 --- STAMINA 6\n";
  Enemy orc1("First ORC", 5, 5);
  Enemy orc2("Second ORC", 5, 6);
  bool result = battle(player, orc1, 1);
  if (result) {
    battle(player, orc2, 1);
    page_383(player);
  } else {
    page_254(player);
  }
  return;
}
void page_30(Player &player) {
  std::cout
      << "\n\nLose 2 STAMINA points for the deep cut on your forehead.\n\n";

  if (player.currStamina > 3) {

    player.removeStamina(2);

    next();
    page_225(player);
  } else {
    std::cout
        << "\n\nYou have died from blood loss. Your adventure ends here.\n";
    exit(0);
  }
}
void page_31(Player &player) {
  std::cout << "\n\nYou crawl out of the tunnel and step on to the ladder on "
               "the wall of the well. You climb out of the well and return to "
               "the path.\n";
  next();
  page_362(player);
}
void page_32(Player &player) {

  std::cout << "\n\nYou reach into your backpack and hand over 10 Gold Pieces "
               "and two objects to Arragon. Arragon then commands you to leave "
               "and you run out of the cottage back to the junction in the "
               "path.\n\nLose 1 LUCK point and head north along the path.\n";
  player.removeGold(10);
  player.removeLuck(1);
  next();
  page_150(player);
}
void page_33(Player &player) {
  std::cout
      << "\n\nThe friar shakes his head, saying. \"There doesn't seem to be "
         "any charity in the world anymore.\" With a shrug of the "
         "shoulders he sets off south again. You watch him disappear "
         "before continuing your journey north.\n";
  next();
  page_390(player);
}
void page_34(Player &player) {
  int pick = 0;
  do {
    std::cout
        << "As you rub the lantern, green smoke slowly starts to rise from "
           "the "
           "wick and teake shape. It froms the outline of a fat old man with "
           "a "
           "bald head sitting on a cushion. His mouth opens slowly and in a "
           "deep "
           "voice he says, \"Well,what do you want?\" You tell him of your "
           "quest "
           "but he tells you he is unable to offer you material gain or "
           "wealth. "
           "He can only offer you personal well-being. You may restore your "
           "SKILL, STAMINA or LUCK score to its Initial level\n";
    std::cout << "\n\n1. Current SKILL " << player.currSkill
              << " restored to ----------> " << player.initSkill << std::endl;
    std::cout << "\n\n2. Current STAMINA " << player.currStamina
              << " restored to ----------> " << player.initStamina << std::endl;
    std::cout << "\n\n3. Current LUCK " << player.currLuck
              << " restored to ----------> " << player.initLuck << std::endl;
    switch (pick) {
    case 1:
      player.currSkill = player.initSkill;
      std::cout << "\n\nSkill Restored to: " << player.currSkill;
      return; // Exit the loop and function after making a choice
    case 2:
      player.currStamina = player.initStamina;
      std::cout << "\n\nStamina Restored to: " << player.currStamina;
      return; // Exit the loop and function after making a choice
    case 3:
      player.currLuck = player.initLuck;
      std::cout << "\n\nLuck Restored to: " << player.currLuck;
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
  next();
  page_187(player);
}
void page_35(Player &player) {
  std::cout << "\n\nLose 4 STAMINA points for the injury caused by the "
               "terrible burn.\n";
  if (player.currStamina > 4) {

    player.removeStamina(4);

    page_132(player);
  } else {
    std::cout << "\n\nYour adventure ends here. You have perished.\n";
    exit(0);
  }
}
void page_36(Player &player) {

  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThinking about the robed stranger you feel a little "
           "uncomfortable. There was something about his manner that you did "
           "not "
           "trust. You stop and take a look in your backpack and are annoyed "
           "to "
           "find something is missing. The man was a thief! Deduct either "
           "all "
           "your remaining Gold Pieces or two of the magic items you may "
           "have "
           "purchased from Yaztromo from your Inventory.\n1. Subtract your "
           "remaining Gold\n2. Loose 2 items from your Inventory Randomly.\n";

    pick = choice();
    std::cout
        << "\n\nYou are in two minds whether or not to run after the thief "
           "but you sense that he will not be twhere he said he was going. "
           "You curse and start off north again.\n";
    int pick1 = rand() % player.equipment.size();
    int pick2 = rand() % player.equipment.size();
    if (pick1 == pick2)
      pick2 = rand() % player.equipment.size();

    switch (pick) {
    case 1:
      std::cout << player.gold << "\n\nGold removed.";
      player.gold = 0;
      return; // Exit the loop and function after making a choice
    case 2:
      // std::cout << pick << " ---- " << i;
      std::cout << "" << player.equipment[pick1].getName() << " Removed.";
      std::cout << "" << player.equipment[pick2].getName() << " Removed.";
      player.equipment.erase(player.equipment.begin() + pick1 - 1);
      player.equipment.erase(player.equipment.begin() + pick2 - 1);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
  next();
  page_187(player);
}
void page_37(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou reach into the tree and pluck a pear-shaped fruit which "
           "is "
           "purple in color. You take a small bute and it tastes very "
           "bitter.\n1. If you wish to spit it out and continue north up the "
           "path.\n2. If you would rather swallow the fruit.\n";
    pick = choice();
    switch (pick) {
    case 1:
      page_226(player);
      return;
    case 2:
      page_336(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_38(Player &player) {

  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou peer through the small dirty window of the hut to see "
           "and old woman in grubby clothes with a wrinkled face and warty "
           "nose reading one of several books by the fireside on the far "
           "wall of the hut. A hunchbacked servant is carrying more books "
           "to her from shelves crammed with old books, charts and "
           "scrolls.\n1. If you w ant to enter the hut.\n2. If you would "
           "rather return to the path and head north again.\n";
    pick = choice();
    switch (pick) {
    case 1:
      page_315(player);
      return;
    case 2:
      page_220(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
  next();
  page_287(player);
}
void page_39(Player &player) {
  std::cout << "\n\nYou spread the net out and then whirl it around your head. "
               "You release it in the direction of the Cabe Troll and watch as "
               "it flies silently through the air to land on its staionary "
               "target. It wraps itself around the Cabe Troll, who wakes "
               "quickly from his sleep, grow is loudly and tries to struggle "
               "from the net. You rush to the stone chair and take the leather "
               "bag from the enraged Cave Troll. You run out of the cave "
               "leaving th Cave Troll to fight his way out of the net.\n";
  next();
  page_287(player);
}
void page_40(Player &player) {
  std::cout
      << "\n\nYou get to your feet and curse, brushing the dirt from your "
         "clothes with your hands. You are tempted to wait around to "
         "discover "
         "who set the trap, but decide against it. You continue "
         "northwards.\n";
  next();
  page_274(player);
}
void page_41(Player &player) {
  std::cout
      << "\n\nYou run back down the path to the junction where the crow is "
         "still sitting on the signpost. You turn left, and run eastwards, "
         "shouting, \"Good afternoon!\" to the crow as you pass him.\n";
  next();
  page_239(player);
}
void page_42(Player &player) {
  std::cout << "\n\nThe old woman throws back her head and roars with laughter "
               "as you start to make conversation. She is an evil woman. Draw "
               "your sword.\n\nLose 1 LUCK point\n";

  player.removeLuck(1);

  next();
  page_342(player);
}
void page_43(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou draw your sword and charge the Wild Hill Men, who stop "
           "their "
           "argument and turn towards you, screaming and wielding axes.\n";
    std::cout << "\n\n1. Fight them one at a time.\n2. You may Escape by "
                 "running north "
                 "along the path.\n";

    pick = choice();
    switch (pick) {
    case 1: {
      std::cout << "\n\nFirst WILD HILL MAN --- SKILL 7 --- STAMINA 5\n";
      Enemy WildHillMan1("First WILD HILL MAN", 7, 5);
      bool result = battle(player, WildHillMan1, 1);
      if (result) {
        std::cout << "\n\nSecond WILD HILL MAN --- SKILL 6 --- STAMINA 4\n";
        Enemy WildHillMan2("Second WILD HILL MAN", 6, 4);
        battle(player, WildHillMan2, 1);
        page_50(player);
      } else {
        page_188(player);
      }
      return;
    }
    case 2:
      page_188(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_44(Player &player) {
  std::cout << "\n\nLose 2 STAMINA points.\n\n";
  if (player.currStamina > 2) {

    player.removeStamina(2);
    std::cout
        << "\n\nYou find your Nose Filters in a side pocket of your backpack "
           "and hastily slip them inside your nostrils. You slowly inhale "
           "the "
           "poisonous air around you, but all is well and you are able to "
           "breathe freely. After a while the gas cloud fades away. However, "
           "there does not seem to be much point in staying here any longer "
           "and you walk over to the steps on the far wall.\n";
  } else {
    std::cout << "\n\nYour adventure ends here. You have perished.\n";
    exit(0);
  }
  next();
  page_293(player);
}
void page_45(Player &player) {
  std::cout << "\n\nLose 2 STAMINA points.\n";
  if (player.currStamina > 2) {

    player.removeStamina(2);
  } else {
    std::cout << "\n\nYour adventure ends here. You have perished.\n";
    exit(0);
  }
  next();
  page_165(player);
}
void page_46(Player &player) {
  std::cout << "\n\nThe carrot flies through the air but before it reaches the "
               "Gnome it changes into a butterfly and flutters away on the "
               "breeze. The Gnome starts to whittle a piece of wood with a "
               "small knife and has a bored expression on his face.\n\n Lose 2 "
               "LUCK points.\n\nYou decide that you ought to treat him with a "
               "little more respect and apologize to the Gnome.\n";
  player.removeLuck(2);
  next();
  page_12(player);
}
void page_47(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nWhile you are distracted by the servent the Witch shouts "
           "some "
           "strange words into the air. Suddenly she vanishes in a bright "
           "flash and reappears as a small bat which flies out of the open "
           "door. On seeing this, the hunchback slumps to the floor and "
           "starts "
           "to cry.\nYou may:\n\n1. Search the hut for something useful.\n2. "
           "Leave the hut and return to the path to head north.\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_26(player);
      return;
    case 2:
      page_220(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_48(Player &player) {
  std::cout << "\n\nYou lift the chest above your head and send it crashing to "
               "the floor. It bursts open and amidst the splintered wood lies "
               "a large, light blue egg nearly a metre round. You tap it with "
               "your finger. It is cold and hard, and feels like marble. "
               "Suddenly a crack appears and before you can move the egg "
               "explodes, sending fragments of razor-sharp shell flying "
               "through the air. Roll one die to determine how many splinters "
               "of shill stick in you, and lose 1 STAMINA point for each.\n";
  int playerRoll = (rand() % 6 + 1);
  std::cout << "\n\nYou took " << playerRoll
            << " damage from the shell splinters.\n";
  player.removeStamina(playerRoll);
  if (player.currStamina <= 0) {
    std::cout << "\n\nYou have died to the egg splinters. Your adventure ends "
                 "here.\n";
    exit(0);
  } else {
    std::cout << "\n\nYou stagger out of the room and continue north along the "
                 "path.\n";
    next();
    page_288(player);
  }
}
void page_49(Player &player) {
  std::cout
      << "\n\nYou press on down the tunnel into the cave entrance. The roof "
         "of "
         "the cave is no higher than the tunnel and you are unable to stand "
         "up. The cave is very small and filled with tiny bits of furniture "
         "and all manner of objects and curios. Standing in the middle of "
         "the "
         "cave are two green-skinned creatures with small bodies and large "
         "heads; they have pointed ears and long noses and their clothes are "
         "made from sacks. They appear very alarmed and charge at you with "
         "their daggers. You must fight the GREMLINS as you are unable to "
         "turn "
         "round and escape.\n";
  std::cout << "\n\nYou fight the Gremlins one at a time but must reduce your "
               "Attack Strength by 3 for each round of combat because you are "
               "fighting on your hands and knees.\n";
  player.removeSkill(3);
  std::cout << "\n\nFirst GREMLIN --- SKILL 4 --- STAMINA 3\n";
  Enemy Gremlin1("First GREMLIN", 4, 3);
  battle(player, Gremlin1, -1);
  std::cout << "\n\nSecond GREMLIN --- SKILL 3 --- STAMINA 2\n";
  Enemy Gremlin2("Second GREMLIN", 3, 2);
  battle(player, Gremlin2, -1);
  player.addSkill(3);
  next();
  page_371(player);
}
void page_50(Player &player) {
  std::cout
      << "\n\nAround the neck of one of the Wild Hill Men you find a small "
         "silver key hanging on a small leather cord. You untie the leather "
         "cord and put the key in your backpack. You set off north again.\n";
  player.equipment.push_back({"Wild Hill Men Key", 3});
  next();
  page_188(player);
}
void page_51(Player &player) {

  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYour walk along the green valley floor brings you to a "
                 "junction in the path.\n1.If you want to head north\n2. If "
                 "you wish to continue east\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_199(player);
      return;
    case 2:
      page_397(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST

  next();
  page_188(player);
}
void page_52(Player &player) {
  std::cout
      << "\n\nQuin explains that he will wager some Dust of Levitation "
         "against "
         "and item or coins to the value of 10 Gold Pieces. As you sit down "
         "at "
         "the table opposite him, you deftly slip the Armband of Strength on "
         "to your arm. You put your elbow on the table and lock hands with "
         "him. His grip is like an iron jaw and his dark slanted eyes look "
         "confident. His bucepts bulge and he gives the signal for the "
         "contest "
         "to begin. You start to push his arm down and are amazed at your "
         "own "
         "strength. Sweat breaks out on his forehead and you can see the "
         "disbelief and pain on his face. You push harder and force his arm "
         "on "
         "to the table in defeat.\n";
  next();
  page_78(player);
}
void page_53(Player &player) {
  std::cout
      << "\n\nThe mucles in your neck start to stiffen and you feel the "
         "effects of the poison from the dart running through your body. You "
         "pluck the darts from your neck, but it's too late. You sink to "
         "your "
         "knees and then roll over unconscious. When you wake up, you find "
         "that you still have your sword and possessions, but all your gold "
         "is "
         "gone. The Pygmines have stolen it all. You shake your fist at the "
         "unseen thieves and start to walk north again along the path.\n";
  next();
  page_92(player);
}
void page_54(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nAs you draw your sword, Yaztromo turns round and casually "
           "advises you not to be foolish as his magic is great.\n\nDo you "
           "still wish to attack him?";
    std::cout << "\n1. Attack Yaztromo\n2. Continue following him.\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_399(player);
      return;
    case 2:
      page_261(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_55(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou reach into your backpack and pull out the purple silk "
           "glove. If fits snugly on your hand. Then you bend down and pick "
           "up "
           "a good-sized rock and take aim. You throw the rocks with all "
           "your "
           "might at the Ogre and it flies like an arrow to hit him on the "
           "side of the head, knocking him unconscious. The creature in the "
           "cage jumps around even more frantically than before. Do you:\n1. "
           "Take a closer look at the creature in the cage?\n2. Search "
           "through "
           "the contents\n3. Leave the cave immediately and continue "
           "northwards.\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_168(player);
      return;
    case 2:
      page_313(player);
      return;
    case 3:
      page_358(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_56(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nWalking along the tranquil valley floor, you arrive at a "
                 "junction in the path. You see that the way south leads back "
                 "to the hills so decide to dismiss that optino.\n1. If you "
                 "wish to continue west.\n2. If you wish to head north.\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_233(player);
      return;
    case 2:
      page_163(player);
      return;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_57(Player &player) {
  std::cout
      << "\n\nYou walk over to investigate the lair but are suddenly aware "
         "of "
         "a dark shadow being cast all about you. You hear a loud roar above "
         "you and look up to see a dragon-like creature with two legs and "
         "green scaly skin flying down to its lair. A bolt of fire shoots "
         "from "
         "its mouth towards you. Test your Luck.\n";
  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nThe fire bolt misses you and explodes by your feet.\n";
    player.removeLuck(1);

    next();
    page_132(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nThe fire bolt slams into your back, knocking you to the "
                 "ground.\n";
  }
  player.removeLuck(1);
  next();
  page_35(player);
}
// Location of the BRONZE HAMMER WITH THE G ON IT!
void page_58(Player &player) {
  std::cout
      << "\n\nYou reach into your backpack and pull out the small bottle of "
         "Holy Water. Quickly removing the cork you throw the water at the "
         "advancing GHOUL. Thick smoke rises into the air from the burning "
         "marks made by the Holy Water on the putrid flesh of the Ghoul. The "
         "Ghoul appears to be in great pain but through its wide-open mouth "
         "no "
         "sound is heard. It crawls into a corner of the room, desperate to "
         "escape your godly weapon. You walk over to the coffin and look "
         "inside.  You are overjoyed to see, as well as 25 Gold Pieces, an "
         "object that the Ghoul was using as a head rest - a bronze hammer "
         "head with the letter G inscrubed in it. You happily put your "
         "findings into your backpack and walk back up the stairs to leave "
         "the "
         "crypt and return to the path to head north.\n\nBRONZE HAMMER HEAD "
         "with letter G inscribed added to your Inventory!\n25 Gold added to "
         "your Inventory\n";
  player.gold += 25;
  player.equipment.push_back(
      {"BRONZE HAMMER HEAD with letter G inscribed", 200});
  next();
  page_112(player);
}
void page_59(Player &player) {
  std::cout << "\n\nYou arrive at another junction in the path. Ignoring the "
               "way south, you continue east.\n";
  next();
  page_171(player);
}
void page_60(Player &player) {
  std::cout
      << "\n\nYou hold your breath and reach into your backpack, frantically "
         "searching for your Nose Filters. Test your Luck. If you are Lucky, "
         "you find them straight away and slip them inside your nostrils. If "
         "you are Unluck, you are unable to find them quickly enough and are "
         "forced to inhale the poisonous gas.\n";

  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nYou were able to plug your nostrils just in time to "
                 "avoid the posionous gas!\n";
    player.removeLuck(1);
    next();
    page_183(player);
  } else {
    std::cout << "\n\nYou failed to find the Nose Filters quick enough and "
                 "inhaled the posionous gas.";
  }
  player.removeLuck(1);
  next();
  page_44(player);
}
void page_61(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nSoon you are back at the first junction.\n1. If you wish to "
           "crawl south back to the well.\n2. If you wish to continue "
           "east.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_398(player);
      return;
    case 2:
      page_151(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_62(Player &player) {
  std::cout << "\n\nAs you draw your sword from your last opponent the white "
               "stallion gallops off east along the path out of sight. You "
               "turn and set off west again.\n";
  next();
  page_208(player);
}
void page_63(Player &player) {
  std::cout << "\n\nOn seeing the arrow fly past you the Centaur rears up on "
               "his hind legs and then charges into a gallop straight at you. "
               "You have to jump back ot avoid being run down. He gallops past "
               "you in a cloud of dust and stops some ten metres away down the "
               "path you have just come along. Maybe fighting the noble "
               "Centaur is not such a good idea after all. You sheathe your "
               "sword and decide to wade across the river.\n";
  next();
  page_178(player);
}
void page_64(Player &player) {
  std::cout
      << "\n\nBefore the Tangleweed can drag you to the ground you manage to "
         "grab the bottle containing the Potion of Plant Control from your "
         "backpack and gulp down its contents. As if touched by flame the "
         "Tangleweed releases your limbs and retreats from teh path. You "
         "decide to run quickly along the path while the effects of the "
         "potions still last.\n\nPotion of Plant Control removed.\n";
  next();
  page_142(player);
}
void page_65(Player &player) {
  std::cout
      << "\n\nThe bridge is in a terrible state of repair, but you manage to "
         "cross it safely. You are at the foot of some hills and it is "
         "getting "
         "darker as night closes in. You pitch behind some rocks to the left "
         "of the path and settle down to sleep with your sword by your "
         "side.\n";
  next();
  page_330(player);
}
void page_66(Player &player) {
  std::cout
      << "\n\nYou step carefully along the slippery stones to the other side "
         "of the river. You see that the path continues north into the hills "
         "but as it is getting dark you decide to make camp for the night "
         "under a large solitary tree to the right of the path. You build a "
         "large fire and settle down to sleep with your sword by your "
         "side.\n";
  next();
  page_325(player);
}
void page_67(Player &player) {
  std::cout << "\n\nYou arrive at another junction in the path. The way south "
               "leads back into the hills so ignore it and continue west.\n";
  next();
  page_113(player);
}
void page_68(Player &player) {
  std::cout << "\n\nYou drink the clear liquid slowly from the bottle. It "
               "tastes very bitter and you are apprehensive about what you "
               "have done. But then a glow radiates through your body and you "
               "feel invigorated. You have drunk a health potion.\n\n3 STAMINA "
               "points added!\n\nYou set off east along the path.\n";
  next();
  page_59(player);
}
void page_69(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe tunnel goes deeper underground, heading west some sixty "
           "metres before opening out into a vast cavern with green slimy "
           "walls. A shaft of day light sines down from the roof of the "
           "cavern "
           "illuminating the floor. Small, pale skinned humanoids are "
           "scattered about and they appear to be tending crops of "
           "different-colored fungi. A stream trickles through the cavern. "
           "Stone steps rise past alcoves on the far wall to ahole in the "
           "roof "
           "trhough wich the daylight streams. You draw your sword and "
           "approach one of the small humanoids. As you get nearer you see "
           "that they are hairless and their eyes are blank. They seem "
           "totally "
           "uninterested in your presence, walking slowly between their rows "
           "of fungi and bending down occasionally to remove unwelcome "
           "insects "
           "and weeds from the crops. You may:\n1. Attack one of the small "
           "humanoids.\n2 Chop down one of the fungi.\n3. Demand to eat a "
           "green-topped fungus.\n4. Demand to eat a red-topped fungus.\n5. "
           "View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_264(player);
      return;
    case 2:
      page_143(player);
      return;
    case 3:
      page_269(player);
      return;
    case 4:
      page_16(player);
      return;
    case 5:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 && pick != 3 &&
           pick != 4); // Loop until player picks WEST or EAST
}
void page_70(Player &player) {
  std::cout
      << "\n\nThe sword is magnificent and was obviously made by a master "
         "craftsman. It feels powerful in your hand.\n\nAdd 2 points to "
         "your "
         "current SKILL score for your enchanted sword.\nCutting your new "
         "weapon through the air you set off north down the gorge.\n";
  player.addSkill(2);
  next();
  page_334(player);
}
void page_71(Player &player) {
  std::cout
      << "\n\nOn pulling back the curtain you see a tiny green skinned "
         "creature with a large head. He has a long nose and pointed ears "
         "and "
         "wears brown canvas clothing. A large medaliion hangs from his neck "
         "on a silver chain. The creature is sitting at a table examing a "
         "red "
         "clay figure of a human hand. On seeing you enter the cave he takes "
         "a "
         "stone hammer and smashes the clay hand. He is a GREMLIN chief and "
         "jumps to his feet to face you with his hammer. You must fight "
         "him.\n";
  player.removeSkill(3);
  std::cout << "\n\nGREMLIN CHIEF --- SKILL 5 --- STAMINA 5\n";
  Enemy GremlinChief("GREMLIN CHIEF", 4, 3);
  battle(player, GremlinChief, -1);
  player.addSkill(3);
  next();
  page_273(player);
}
void page_72(Player &player) {
  std::cout << "\n\nThe path ends at a junction. The way sound leads back to "
               "the forest so you decide to head north.\n";
  next();
  page_138(player);
}
void page_73(Player &player) {
  std::cout << "\n\nYou step back and then charge at the door.\n";
  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nThe door flies open!\n";
    player.removeLuck(1);
    next();
    page_327(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nYou bounce off the door and rub your bruised shoulder. "
                 "You decide against risking any further injury to yourself "
                 "and return to the path to head north.\n";
  }
  player.removeLuck(1);
  next();
  page_112(player);
}
void page_74(Player &player) {
  std::cout << "\n\nYou lift the leather bag off the back of the stone chair "
               "and tiptoe out of the cave. Outside you stop to examine the "
               "contents of the bag. Inside you find 5 Gold Pieces and a small "
               "brass bell. You put these in your backpack and walk back to "
               "the junction in the path to head north.\n";
  player.gold += 5;
  next();
  page_25(player);
}
void page_75(Player &player) {
  std::cout
      << "\n\nYour legs feel very vulnerable and you half expect them to be "
         "bitten any moment by some unseen river creature. However, nothing "
         "happens and you manage to cross safely. You are now at the foot of "
         "some hills and it is getting darker as night closes in. You decide "
         "to camp behind some rocks to the left of the path and settle down "
         "to "
         "sleep with your sword by your side.\n";
  next();
  page_330(player);
}
void page_76(Player &player) {
  std::cout
      << "\n\nThe path turns suddenly to the right and proceeds northwards "
         "into the dense undergrowth.\n";
  next();
  page_206(player);
}
void page_77(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe Pygmies quickly turn and run off into the grasses. Will "
           "you:\n1. Draw your sword and run into the grass after them?\n2. "
           "Continue north along the path.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_377(player);
      return;
    case 2:
      page_92(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_78(Player &player) {
  std::cout
      << "\n\nQuin stands up and walks silently to a wooden chest at the "
         "back "
         "of the hut. He lifts the lid and pulls out a small glass phial. He "
         "hands it to you and walks back to the table, where he slumps in "
         "his "
         "chair looking throughly dejected. the dust in the phial sparkes in "
         "the light and you put it into your backpack and leave the hut. "
         "Outside you walk back to the junction in the path.\n";
  next();
  page_349(player);
}
void page_79(Player &player) {
  std::cout << "\n\nYou stand with your back to the tree and prepare to fight "
               "the Vampire Bats. You fight them one at a time as they swoop "
               "down on you.\n";

  std::cout << "\n\nFirst VAMPIRE BAT --- 5 SKILL --- 5 STAMINA\n";
  Enemy vampirebat1("First VAMPIRE BAT", 5, 5);
  battle(player, vampirebat1, -1);
  std::cout << "\n\nSecond VAMPIRE BAT --- 6 SKILL --- 5 STAMINA\n";
  Enemy vampirebat2("Second VAMPIRE BAT", 6, 5);
  battle(player, vampirebat2, -1);
  std::cout << "\n\nThird VAMPIRE BAT --- 5 SKILL --- 7 STAMINA\n";
  Enemy vampirebat3("Third VAMPIRE BAT", 5, 7);
  battle(player, vampirebat3, -1);
  next();
  page_23(player);
}
void page_80(Player &player) {
  std::cout << "\n\nThere does not seme to be much point in staying here any "
               "longer and you walk over to the steps in the far wall.\n";
  next();
  page_293(player);
}
void page_81(Player &player) {
  std::cout
      << "\n\nAhead you hear high-pitched voices frantically calling to each "
         "other. The tunnel ends at a small cave entrance. Suddenly an arrow "
         "flies out of the cave towards you.\n\nTest your Luck!\n";

  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nThe arrow whistles past your head!\n";
    player.removeLuck(1);
    next();
    page_49(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nThe arrow lodged into your shoulder!\n";
  }
  player.removeLuck(1);
  next();
  page_4(player);
}
void page_82(Player &player) {
  std::cout << "\n\nDo you possess an Potion of Stillness?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Potion of Stillness") {
      std::cout << "\n1. Potion of Stillness?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nPotion of Stillness Consumed.";
        page_235(player);
        break;
      case 2:

        page_13(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Potion of Stillness\n";
  next();
  page_13(player);
}
void page_83(Player &player) {
  std::cout
      << "\n\nYou reach for you backpack and take out the belladonna. It is "
         "poisonous but its effect will stop you from turning into a "
         "Werewolf "
         "yourself.\n\nLose 2 STAMINA points for the effects of the "
         "poision.\n";

  if (player.currStamina > 3) {
    player.removeStamina(3);
    next();
    page_139(player);
  } else {
    std::cout << "\n\nYou have died from poison. Your adventure ends here.\n";
    exit(0);
  }
}
void page_84(Player &player) {
  std::cout
      << "\n\nAs you approach the boulder you are even more suprised to see "
         "it "
         "suddenly rise up on what appears to be two stumpy stone legs. Then "
         "two stone arms with huge club shaped first spring out of its "
         "sides. "
         "You stare in disbelief as the oulder lumbers toward you and raises "
         "one of its great stone fist. You snap out of your bewilderment and "
         "draw your sword to fight the BOULDER BEAST.\n";

  std::cout << "\n\nBOULDER BEAST --- 8 SKILL --- 11 STAMINA\n";
  Enemy boulderBeast("BOULDER BEAST", 8, 11);
  bool result = battle(player, boulderBeast, 3);
  if (result) {
    next();
    page_146(player);
  } else {
    next();
    page_245(player);
  }
}
void page_85(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nInside the cage a small, sinewy creature with brown, "
                 "scaly skin is jumping up and down. He is a GOBLIN, and he "
                 "has a black shiny rod hanging on a leather cord round his "
                 "neck.\n1. If you want to unlock the cage door.\n2. If you "
                 "want to ignore the creature and leave the cave to continue "
                 "your journey northwards.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_9(player);
      return;
    case 2:
      page_358(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_86(Player &player) {
  std::cout << "\n\nAs you crouch down in the tall grass you hear the sound of "
               "galloping hooves amidst the barking. Then you see the legs of "
               "four hounds and one horse race past you in a cloud of dust. "
               "The sound of the hunt quickly fades into the distance and you "
               "step out on to the path again. Wondering about the poor old "
               "fox you set off west once more.\n";
  next();
  page_208(player);
}
void page_87(Player &player) {
  std::cout << "\n\nThe path leads along a ridge of the hill and comes to "
               "another junction. YOu see that the way south leads back to the "
               "river, so you decide to head north again.\n";
  next();
  page_90(player);
}
void page_88(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nClimbing the steps you soon reach the second alcove. You "
                 "see vauge shapes in the dark and hear the sound of shuffling "
                 "feet.\n1. If you wish to enter the alcove.\n2 If you wish to "
                 "continue climbing.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_212(player);
      return;
    case 2:
      page_107(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_89(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nThe coin lands in the water with a gentle plop (make the "
                 "deduction to your Equipment List.) You wish for more Gold "
                 "Pieces but nothing happens - this is not a wishing well. You "
                 "may.\n1. Descend the ladder to look down the tunnel.\n2. "
                 "Return to the path head east.\n3. Return to the path to head "
                 "west.\n4. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_256(player);
      return;
    case 2:
      page_281(player);
      return;
    case 3:
      page_238(player);
      return;
    case 4:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 &&
           pick != 3); // Loop until player picks WEST or EAST
}
void page_90(Player &player) {

  std::cout << "\n\nThe path runs north down the hill between large boulders "
               "and rocks. You have an uneasy feeling that you are being "
               "watch. Then, from behind one of the large boulders to the left "
               "of the path, spring two sinewy men with long hair and beards. "
               "They are wearig animal furs and look menacing. One notches and "
               "arrow to his bow and lets it fly.\n\nTest your Luck.\n";
  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nThe arrow misses you and flies past your head!\n";
    player.removeLuck(1);
    next();
    page_210(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nThe arrow lodged into your shoulder and you suffer the "
                 "loss of 3 STAMINA points.\n";
    if (player.currStamina > 3) {
      player.removeStamina(3);
    } else {
      std::cout << "\n\nYou have died from shock of the arrow piercing you. "
                   "Your adventure ends here.\n";
      exit(0);
    }
  }
  player.removeLuck(1);
  next();
  page_348(player);
}
void page_91(Player &player) {
  std::cout
      << "\n\nYou open the book and are surpised to see that the pages are "
         "hollowed out in the middle. Lying in the cavity is a small jewl on "
         "a "
         "silver chain. Beside it is a parchment which reads:\n";
  std::cout << "\n\n******************************\n";
  std::cout << "EYE OF AMBER";
  std::cout << "\n------Instructions for use------";
  std::cout << "\nPlace the necklace around your neck\nand question those you "
               "fear;\nNo matter what they try to say,\n it's only truth "
               "you'll hear.\n";
  std::cout << "******************************\n";
  std::cout
      << "\n\nYou place the necklace around your neck and presume your find "
         "will come in useful in this evil forest!\n\n1 Luck Point "
         "added!\n\nLeaving the hut you return to the path and head north.\n";
  player.addLuck(1);
  next();
  page_220(player);
}
void page_92(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nAs the path proceeds northwards, the grass becomes shorter "
           "and "
           "the ground starts to rise gently. Ahead you can hear the sound "
           "of "
           "flowing water. However, much more ominous, you also hear another "
           "sound, above you in the sky - a loud buzzing noise. Suddenly a "
           "swarm of large bees, each bee some ten centimetres long, is "
           "hovering directly above you. You may:\1. Try to run to the water "
           "ahead and dive in.\n2. Stand and fight\n";
    for (int i = 0; i <= player.equipment.size(); i++) {
      if (player.equipment[i].getName() == "Potion of Insect Control") {
        std::cout << "3. Drink a Potion of Insect Control\n4. View Inventory\n";
        pick = choice();

        switch (pick) {
        case 1:
          page_229(player);
          return;
        case 2:
          page_7(player);
          return;
        case 3:
          page_100(player);
          return;
        case 4:
          viewInventory(player);
          break;
        default:
          std::cout << "\nInvalid choice. Please try again.\n";
          break;
        }
      } else {

        std::cout << "3. View Inventory\n";
        pick = choice();

        switch (pick) {
        case 1:
          page_299(player);
          return;
        case 2:
          page_7(player);
          return;
        case 3:
          viewInventory(player);
          break;
        default:
          std::cout << "\nInvalid choice. Please try again.\n";
          break;
        }
      }
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_93(Player &player) {

  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nBack at the junction you may either go\n1. East\n2. Keep "
                 "going south\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_61(player);
      return;
    case 2:
      page_270(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_94(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYou take the Rope of Climbing out of your backpack. As "
                 "if it knows what to do, it wraps itself round the top of the "
                 "tree trunk and descends the hole into the tunnel below, "
                 "inviting you to climb down.\1. If you wish to climb down the "
                 "rope\n2. If you wish to change your mind and return to the "
                 "path to head north again.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_136(player);
      return;
    case 2:
      page_144(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_95(Player &player) {
  std::cout << "\n\nYou try with all your might to move the stone slab, but it "
               "will not budge. Do you have any Dust of Levitation?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Dust of Levitation") {
      std::cout << "\n1. Use Dust of Levitation?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nDust of Levitation Consumed.";
        page_173(player);
        break;
      case 2:
        page_368(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Dust of Levitation\n";
  next();
  page_368(player);
}
void page_96(Player &player) {}

void page_97(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nThe path leads ever northwards but at last the trees are "
                 "beginning to thin out and appear less menacing as daylight "
                 "streams through between them. On the right-hand side of the "
                 "path you see an old oak chair covered with moss.\n1. If you "
                 "wish to sit in the chair to rest and eat\n2. If you would "
                 "rather press on northwards\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_328(player);
      return;
    case 2:
      page_118(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_98(Player &player) {
  std::cout << "\n\nOn your long walk around Darkwood Forest you are attacked "
               "by a large group who attacked Bigleg and his party two days "
               "earlier.\n\nTest your Luck.\n";
  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nYou manage to run away from them without being hit by "
                 "the rain of arrows which falls all about you.\n";
    player.removeLuck(1);
    next();
    page_1(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nYou slip and fall as you run, pierced by many "
                 "arrows.\n\nYour adventure ends here.\n";
    exit(0);
  }
}
void page_99(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nAhead you see that the path ends at the door of a large "
                 "hut made of dried mud. It has a domed roof and a single "
                 "window. You per through the window and see a large man with "
                 "dark skin sitting at a table in the middle of the hut. He is "
                 "bare-chested and is flexing his muscles of his arms.\n1. If "
                 "you wish to enter the hut\n2. If you would rather return to "
                 "the junction in the path.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_209(player);
      return;
    case 2:
      page_349(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_100(Player &player) {
  std::cout
      << "\n\nAs you reach into your backpack, you realize with horror that "
         "the large, buzzing insects above you are KILLER BEES. You grab the "
         "bottle marked Potion of Insect Control and gulp down its contents. "
         "The Killer Bees dive down to attack you, but are suddenly repelled "
         "as though they have hit an invisible scrren. They hover all around "
         "you buzzing loudly but do not sting you. With new heart you draw "
         "your sword and swing it through the air. You catch one of the "
         "Killer "
         "Bees and it falls to the ground. You step on it with your leather "
         "sandal. The others then fly off into the distance. You continue "
         "northwards towards the sound of flowing water.\n";
  next();
  page_339(player);
}
void page_101(Player &player) {
  std::cout << "\n\nYou lift the leather bag off the stone chair and walk "
               "outside. Examining the contents of the bag yo find:\n\n5 Gold "
               "Pieces\nA Small Brass Bell\n\nYou put these in your backpack "
               "and walk back to the junction in the path to head north.\n";
  next();
  page_25(player);
}
void page_102(Player &player) {
  std::cout << "\n\nWalking along the path you notice marks in the ground "
               "made by the hooves heading east. You soon arrive at another "
               "junction in the path. The hoof marks lead south, back to the "
               "forest. You decide to head north.\n";
  next();
  page_105(player);
}
void page_103(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nThe path opens out into a small clearing. To your right "
                 "you see a pile of branches, grass and pieces of rag, the "
                 "lair of some large creature. Amongst the debris and old "
                 "bones scattered about you catch sight of something "
                 "glittering.\n1. If you want to look more closely\n2. IF you "
                 "wish to hurry north along the path.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_57(player);
      return;
    case 2:
      page_360(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_104(Player &player) {}
void page_105(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nIn the distance to the right of the path you see large birds "
           "circling in the sky. As you get closer you recognize them as "
           "vultures.\n1. If you wish to step off the path to see what or whom "
           "the vultures are interested in.\n2. If you wish to ignore the "
           "vultures and continue walking north.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_384(player);
      return;
    case 2:
      page_394(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_106(Player &player) {
  std::cout << "\n\nThere is a fire-blackened copper kettle in the ashes of "
               "the fire which you pick up to inspect. You remove the lid and "
               "find a gold ring with a large emerald set in it. It has a "
               "value of 15 Gold Pieces. You are very fortunate and may add 2 "
               "LUCK points. Happy with your new treasure you decide to ignore "
               "the wooden chest and leave the room to continue northwards.\n";
  player.equipment.push_back({"Emerald Gold Ring", 15});
  std::cout << "\n\nEmerald Gold Ring added to your Inventory!\n";
  player.addLuck(2);
  next();
  page_288(player);
}
// TODO make the fire demon
void page_107(Player &player) {}
void page_108(Player &player) {
  std::cout
      << "\n\nThe pain increases and becomes almost unbearable. You grip your "
         "stomach with your arms and fall to your knees, foaming at the mouth. "
         "Eventually the pain subsides but you are very weak after your "
         "ordeal.\n\nLose 3 STAMINA points.\nYou ponder what else might be in "
         "store for you in this forest and decide to turn north up the path.\n";
  next();
  page_226(player);
}
void page_109(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {

    std::cout << "\n\nSoon the path leads out of the trees on to a large plain "
                 "with tall grasses. Beyond it you see rising ground and, "
                 "further off, some low hills. The path splits and goes in "
                 "three directions.\n1. If you want to go west.\n2. If you "
                 "want to go east.\n3. If you want to continue north.\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_124(player);
      return;
    case 2:
      page_72(player);
      return;
    case 3:
      page_309(player);
      return;
    case 4:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 &&
           pick != 3); // Loop until player picks WEST or EAST
}
void page_110(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\n1.If you wish to search through the Gremlin's leather "
                 "backpack.\n2. If you wish to leave the tunnel without any "
                 "further delay.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_257(player);
      return;
    case 2:
      page_31(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_111(Player &player) {
  std::cout << "\n\nThe expression on Arragon's face changes from confidence "
               "to fear. Perhaps he is not all that he makes himself out to "
               "be. Suddenly he apologizes for being so aggressive but "
               "explains that these lands are filled with bandits and "
               "murderers and he has to protect himself by pretending to be a "
               "wizard of supreme power. He begs forgiveness and offers you 5 "
               "Gold Pieces if you will leave him in peace and tell nobody of "
               "his disguise. You accept his offer and leave the cottage. You "
               "walk back to the junction in the path and head north.\n";
  next();
  page_150(player);
}
void page_112(Player &player) {
  std::cout << "\n\nThe path presses on through the dense trees. Then it makes "
               "a sudden turn to the right and heads east. The path is so "
               "overgrown in places that you have to use your sword to cut "
               "through it. Your walk east is long and tiring. At last you "
               "reach a junction in the path. Looking at Bigleg's map you "
               "decide to head north again in the direction of Stonebridge and "
               "ignore the narrow path continuing east.\n";
  next();
  page_103(player);
}
void page_113(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe path makes a sudden turn to the right and heads north "
           "across the valley floor. To the left of the path you see a large "
           "pond with a small wooden but with a thatched roof by its edge.\n1. "
           "If you want to investigate the hut.\n2. If you wish to ignore the "
           "hut and continue north along the path.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_324(player);
      return;
    case 2:
      page_149(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_114(Player &player) {
  std::cout << "\n\nThe Treeman lumbers slowly towards you on large, splayed "
               "roots. Do you possess an Fire Capsules?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Fire Capsules") {
      std::cout << "\n1. Fire Capsules?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nFire Capsules Consumed.";
        page_350(player);
        break;
      case 2:
        page_123(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Fire Capsules\n";
  next();
  page_123(player);
}
void page_115(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nThe path soon comes to a junction.\n1. If you wish to go "
                 "west.\n2. If you wish to go east.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_382(player);
      return;
    case 2:
      page_277(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_116(Player &player) {
  std::cout << "\n\nEventually you manage to get back to sleep but are awake "
               "early. In the morning light you notice a gold-studded leather "
               "collar round the neck of the largest Wolf. It must be worth 15 "
               "Gold Pieces. Putting the collar in your backpack you wonder "
               "who the Wolf's owner might be. You collect your belongings and "
               "head north along the path.\n";
  next();
  page_314(player);
}
void page_117(Player &player) {
  std::cout << "\n\nYou unlock the door and step back, drawing your sword in "
               "case the Goblin tries to attack you. He picks up a wooden "
               "stool and, waving it in the air, kicks the door open and "
               "charges at you screaming. You must fight.\n";
  std::cout << "\n\nGOBLIN --- 5 SKILL --- 4 STAMINA\n";
  Enemy goblin("GOBIN", 5, 4);
  battle(player, goblin, -1);
  next();
  page_232(player);
}
void page_118(Player &player) {
  std::cout
      << "\n\nThe path eventually emerges from the trees on to a vast plain. "
         "Beyond you see rising ground leading to low hills. The waist-high "
         "grasses on either side of the path sway gently in the warm breeze. "
         "All is peaceful and the dangers ahead seem unimportant. You are "
         "enjoying your walk when suddenly the silence is broken by the sound "
         "of squealing and grunting to the right of the path. You can see a "
         "path being made through the grass by an unseen beast moving quickly "
         "towards you. You draw your sword in readiness. A few yards ahead of "
         "you a large brown pig-like creature bursts out on to the path and "
         "halts there. It has two  long tusks protruding from a short stubby "
         "snout. Steam rises into the air from its sweating body. Its small "
         "eyes look at you before it puts its head down to charge at you. You "
         "must fight the WILD BOAR.\n";
  std::cout << "\n\nBOAR --- 6 SKILL --- 5 STAMINA\n";
  Enemy boar("BOAR", 6, 5);
  battle(player, boar, -1);
  next();
  page_174(player);
}
void page_119(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe ground is quite steep as the path wends its way into the "
           "hills. By the time you reach the top the sun is quite hot. All "
           "around in the distance you see the green circle of Darkwood "
           "Forest. Mist still hangs in the tall grass behind you, but ahead "
           "you see a valley floor bathed in sunlight. All is quiet. As you "
           "start down the far side of the hill you see a junction in the "
           "path.\n1. You may either continue north down the hill.\n2. Or head "
           "west along the new branch.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_90(player);
      return;
    case 2:
      page_216(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_120(Player &player) {
  std::cout << "\n\nYou drop a stone down the hollow tree trunk to the tunnel "
               "below. It must be some five metres to the bottom. Do you "
               "posses a Rope of Climbing?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Rope of Climbing") {
      std::cout << "\n1. Rope of Climbing?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nRope of Climbing Consumed.";
        page_94(player);
        break;
      case 2:
        page_380(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Rope of Climbing\n";
  next();
  page_380(player);
}
void page_121(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nBack at the junction\n1. You may either go east\n2. Or "
                 "keep going north.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_61(player);
      return;
    case 2:
      page_81(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_122(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nAt the bottom of the ladder you see that the tunnel runs quite "
           "a distance north. You are suprised to see that it is lit by "
           "torches at regular intervals along its length.\n1. If you wish to "
           "crawl along to tunnel.\n2. If you wish to climb back up the ladder "
           "and return to the path.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_135(player);
      return;
    case 2:
      page_362(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_123(Player &player) {
  std::cout
      << "\n\nThe Treeman lashes out at you with two of its main "
         "branches and you leap into the attack. You must defeat the Treeman "
         "twice, once for each main branch, before it will die.\n";
  std::cout << "\n\nTREEMAN --- 8 SKILL --- 8 STAMINA\n";
  Enemy treeman1("TREEMAN BRANCH 1", 8, 8);
  battle(player, treeman1, -1);
  Enemy treeman2("TREEMAN BRANCH 2", 8, 8);
  battle(player, treeman2, -1);
  next();
  page_174(player);
}
void page_124(Player &player) {
  std::cout << "\n\nThe path ends at another junction. The way south leads "
               "back to the forest so you decide to head north.\n";
  next();
  page_180(player);
}
void page_125(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nAs you descend into the hole, you notice large amounts "
                 "of slime secreted by some huge creature.\n1. If you wish to "
                 "climb back out of the hole and continue walking northwards "
                 "up the path\n2. If you wish to carry on down the hole.\n3. "
                 "View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_337(player);
      return;
    case 2:
      page_15(player);
      return;
    case 3:
      viewInventory(player);
      break;
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_126(Player &player) {
  std::cout
      << "\n\nYou gently prise the lid off the box, but as you do so, a yellow "
         "gas escapes and envelops your face. Do you possess Nose Filters?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Armband of Strength") {
      std::cout << "\n1. Nose Filters?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nNose Filters Consumed.";
        page_365(player);
        break;
      case 2:
        page_22(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Nose Filters\n";
  next();
  page_22(player);
}
void page_127(Player &player) {
  std::cout
      << "\n\nYou climb on to the Centaur's back and he turns and walks into "
         "the river. The water is a dark green color and you wonder what kind "
         "of creatures mught be lurking in its depths. Soon you reach the "
         "other side and you pay the Centaur his 3 Gold Pieces. He thanks you "
         "and waves goodbye, wishing you good luck. You are now at the foot of "
         "some hills and it is beginning to get dark. You see the path winding "
         "its way north up into the hills. You decide to camp under a great, "
         "old oak tree to the right of the path and settle down to sleep with "
         "you sword by your side.\n";
  player.removeGold(3);
  next();
  page_298(player);
}
void page_128(Player &player) {
  std::cout
      << "\n\nYou cut the thick ropes holding the Barbarian. He grunts, and "
         "sits up to rub his wrists and ankles. He looks at you and sneers. He "
         "is either delirious or ungrateful, for he pulls out one of the "
         "wooden stakes from the ground and turns to attack you!\n";
  std::cout << "\n\nTREEMAN --- 9 SKILL --- 7 STAMINA\n";
  Enemy barbarian("BARBARIAN", 9, 7);
  battle(player, barbarian, -1);
  next();
  page_272(player);
}
void page_129(Player &player) {
  std::cout
      << "\n\nYour arm is sore from the effort and loss of gold to Quin "
         "makes "
         "you dejected.\n\nLose 2 LUCK points. You leave the hut and the "
         "smiling Quin. Outside you walk back to the junction in the path.\n";
  next();
  page_349(player);
}
void page_130(Player &player) {
  std::cout
      << "\n\nThe path forces its way through the gnarled trees and thorny "
         "bushes. You hear growling above you and look up to see a creature "
         "which appears to be half-cat and half-girl lying on a branch over "
         "the path. It has short black shiny fur like a panther but there are "
         "paws at the end of its arm and legs with sharp claws. Its face has "
         "human features with slanted eyes and long teeth.\n1. It looks as if "
         "it is about to pounce. if you wish to draw your sword and fight the "
         "CATWOMAN.\n2. If you wish to run quickly ahead, LOSE 1 LUCK point.\n";
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe path forces its way through the gnarled trees and thorny "
           "bushes. You hear growling above you and look up to see a creature "
           "which appears to be half-cat and half-girl lying on a branch over "
           "the path. It has short black shiny fur like a panther but there "
           "are "
           "paws at the end of its arm and legs with sharp claws. Its face has "
           "human features with slanted eyes and long teeth.\n1. It looks as "
           "if "
           "it is about to pounce. if you wish to draw your sword and fight "
           "the "
           "CATWOMAN.\n2. If you wish to run quickly ahead, LOSE 1 LUCK "
           "point.\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_153(player);
      return; // Exit the loop and function after making a choice
    case 2:
      player.removeLuck(1);
      page_355(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_131(Player &player) {
  std::cout
      << "\n\nYou drag yourself out of the water on the far bank of the river. "
         "You see that the path continues north into the hills but as it is "
         "getting dark, you decide to make camp for the might under a large "
         "solitary tree to the right of the path. You build a large fire and "
         "settle down to sleep with your sword by your side.\n";
  next();
  page_325(player);
}
void page_132(Player &player) {
  std::cout << "\n\nThe creature landing in front of you is a WYVERN. It looks "
               "at you and opens its huge mouth to let out another burning "
               "roar. It is about ten metres long and its thick scale look "
               "hard to penetrate with you sword. Do you possess Flute?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Flute") {
      std::cout << "\n1. Use the Flute?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nFlute Consumed.";
        page_258(player);
        break;
      case 2:
        page_167(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Flute\n";
  next();
  page_167(player);
}
void page_133(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {

    std::cout
        << "\n\nSlipping the ring on to your middle finger you are suddenly "
           "gripped by an agonizing pain. Eventually the pain subside but you "
           "are unable to take off the ring. You are wearing a cursed Ring of "
           "Slowness which will force you to subtract 2 points from all future "
           "dice rolls when computing your own Attack Strength during "
           "combat.\n1. If you wish to try on the gauntlet\n2. If you wish to "
           "ignore the gauntlet (or have already tried it on) you must walk "
           "north again along the path.\n";
    player.equipment.push_back({"Ring of Slowness", 3});
    player.addDiceDebuff(2);
    pick = choice();

    switch (pick) {
    case 1:
      for (int i = 0; i <= player.equipment.size(); i++) {
        if (player.equipment[i].getName() == "Gauntlet of Weapon Skill") {
          page_360(player);
        }
      }
      page_374(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_360(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_134(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYou make a wish but nothing happens.\n\nLose 1 LUCK "
                 "point.\n1. "
                 "If you wish to rub some hot mud on your wounds.\n2. If you "
                 "wish to "
                 "set off north along the path.\n3. "
                 "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_283(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_303(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_135(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nThe tunnel continues north until at last you arrive at a "
                 "junction.\n1. "
                 "If you wish to crawl west.\n2. If you wish to crawl est.\n3. "
                 "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_284(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_151(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_136(Player &player) {
  std::cout << "\n\nYou climb down the rope to the tunnel below.  Soon your "
               "eyes become accustomed to the dark and you see that the tunnel "
               "is only one metre high. You must crawl along on your hands and "
               "knees to explore it.\n";
  next();
  page_69(player);
}
void page_137(Player &player) {
  std::cout << "\n\nDo you possess a Glove of Missile Dexterity?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Flute") {
      std::cout << "\n1. Use the Glove of Missile Dexterity?\n2. Return to the "
                   "Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nGlove of Missile Dexterity Consumed.";
        page_258(player);
        break;
      case 2:
        page_167(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Glove of Missile Dexterity\n";
  next();
  page_167(player);
}
void page_138(Player &player) {
  std::cout << "\n\nAs you walk along the path through the waist-high grasses "
               "you watch the grass rippling in the wind. Soon you get the "
               "uncomfortable feeling that the grass has a will of its own and "
               "is moving indepently of the wind. Suddenly a clump of grass "
               "stretches out across the path and wraps itself around your "
               "ankle. Other clums of grass try to grab our arms and legs. You "
               "realize that you are surrounded by TANGLEWEED.\n";
  std::cout << "\n\nDo you possess a Potion of Plant Control?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Flute") {
      std::cout
          << "\n1. Use the Potion of Plant Control?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nPotion of Plant Control Consumed.";
        page_64(player);
        break;
      case 2:
        page_159(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Potion of Plant Control\n";
  next();
  page_159(player);
}
void page_139(Player &player) {
  std::cout << "\n\nThe effects of the belladonne and the bite of the Werewolf "
               "wear off and you finally manage to get back to sleep. In the "
               "morning you collect your belongings and head north along the "
               "path into the hills\n";
  next();
  page_198(player);
}
void page_140(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou step around the bulbous mass of the Giant Spider and "
           "settle down again to a nervous sleep. You awake early in the "
           "morning and set off north along the path. The ground is quite "
           "steep now as the path wends its way up into the hills. By the "
           "time "
           "you reach the top the sunis quite hot. All around in the "
           "distance "
           "you see the tight green circle of Darkwood Forest. Mist still "
           "hangs in the tall grasses behind you but ahead you see a valley "
           "floor bathed in sunlight. All is quiet. As you start down the "
           "far "
           "side of the hill, you see a junction in the path. You may:\n1. "
           "Continue north down the hill.\n2. Go east along the new "
           "path.\n3. "
           "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_25(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_267(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_141(Player &player) {}
void page_142(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nAs the path proceeds northwards, the grass becomes shorter "
           "and "
           "the ground starts to rise gently. Ahead you can hear the sound "
           "of "
           "flowing water. You soon reach the bank of a gently flowing "
           "river. "
           "There is no bridge but you see that the path continues north on "
           "the other side of the river. Standing proudly in front of you is "
           "a "
           "magnificent white beast, half-man, half-horse. A bow and quiver "
           "of "
           "arrors are slung behind his back. he is a CENTAUR. Will you:\n1. "
           "Try to start a conversation with him?\n2. Walk around him and "
           "wade "
           "into the river?\n3. Draw your sword and attack him?\n3. View "
           "INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_366(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_178(player);
      return; // Exit the loop and function after making a choice
    case 3:
      page_251(player);
      return; // Exit the loop and function after making a choice
    case 4:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 &&
           pick != 3); // Loop until player picks WEST or EAST
}
void page_143(Player &player) {
  std::cout << "\n\nYou sword cuts through the metre-high fungus as easily as "
               "if it were butter. A great cloud of spores is released from "
               "the stem making it difficult to breathe. You start to cough "
               "and sputter.\n\nLose 2 STAMINA points.\n";
  player.removeStamina(2);
  next();
  page_80(player);
}
void page_144(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nContinuing your walk along the valley floor you see  the ark "
           "wall of Darkwood Forest looming up before you once again. The "
           "path "
           "leads directly into the thick undergrowth and soon you are "
           "walking "
           "between tall trees and crowded thron bushes. It is dark and "
           "quiet. "
           "Before long. the path comes to a junction.\n1. If you want to "
           "head "
           "west.\n2. If you wish to "
           "head east.\n3. View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_213(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_387(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_145(Player &player) {
  std::cout
      << "\n\nYou untie the boat and start to row across the river to the "
         "far "
         "bank. You are aobut half-way when you notice that the bottom of "
         "the "
         "boat is beginning to fill with water. Leaks appear everywhere. The "
         "boat is rotten and starts to sink. You grab your possessions and "
         "swim across the river and are dismayed to see that all the "
         "remaining "
         "Provisions in your backpack (if  you have any) have dissolved in "
         "the "
         "water. It is getting dark as night closes in and you decide to "
         "camp "
         "behind some rocks to the right of the path. You build a large fire "
         "and settle down to tsleep with your sword by your side.";
  next();
  page_285(player);
}
void page_146(Player &player) {
  int pick = 0;
  do {
    std::cout
        << "\n\nYou look at the broken rockpile around your feet and wonder "
           "how "
           "such "
           "a beast ever came into being - perhaps from the misused power of "
           "an "
           "evil elementalist? You will never know. If you wish to take a "
           "piece "
           "of stone that was part of the Boulder Beast for later "
           "examination, "
           "note it on your Equipment List.\n1. Take a piece of Boulder "
           "Beast "
           "with you\n2. Leave the stone\n";
    int pick = choice();
    switch (pick) {
    case 1:
      std::cout << "\n\nStone of Boulder Beast added to Inventory!";
      player.equipment.push_back({"Stone of Boulder Beast", 10});
      break;
    case 2:
      std::cout << "\n\nYou took nothing. Maybe it is cursed.";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
  std::cout << "\n\nYou now return to the path and head "
               "north down into the valley.";
  next();
  page_245(player);
}
void page_147(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nThe path heads north into the thick forest. In one of "
                 "the few clearing betwen the trees you see smoke rising from "
                 "the chimney of a wooden hut to your right. \n1. If you wwant "
                 "to look through the window of the hut.\n2. If you wish to "
                 "keep walking north.\n3. View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_38(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_220(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_148(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nThe path continues north and you soon reach another "
                 "junction. \n1. If you wish to continue north.\n2. "
                 "If you wish to go east.\n3. View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_97(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_20(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_149(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nAs ou walk across the valley you see the dark green wall "
                 "of Darkwod Forest looming up before you. The path leads "
                 "directly into thick undergrowth and soon you are walking "
                 "betwene tall dark trees and thorny bushes. It is dark and "
                 "quiet. The path forks. \n1. If you wish to walk east.\n2. "
                 "If you would rather continue north.\n3. View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_130(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_306(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_150(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nWalking north across the green valley you see the dark green "
           "wall of Darkwood Forest looming up before you. The path leads "
           "straight into the thick undergrowth and soon you are walking "
           "betwene tall dark trees and thorny bushes. It is dark and quiet "
           "and the path abruptly ends at a junction.\n1. If you wish to "
           "walk "
           "west.\n2. If you wish to head east.\n3. View INVENTORY\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_357(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_171(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_151(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nThe tunnels ends at a cave entrance. A curtain hangs "
                 "over the entrance and you are unable to see inside.\n1. If "
                 "you wish to throw back the curtain and enter the cave.\n2. "
                 "If you wish to turn round and return to the junction in the "
                 "tunnel. \n3. View INVENTORY\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_71(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_296(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_152(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nIn its dying throes the black Fire Demon is engulfed by its "
           "own fire. You step forward and grab its crown as it slumps to "
           "the "
           "ground in a smouldering heap. Its alcove lair is cold and dank. "
           "Inside there is a magnificent throne in front of which cower two "
           "Clone Warriors on their hands and knees, bowing to you in "
           "worship. You have defeated their master. You may:\n1. Place the "
           "crown on your head.\n2. Sit on the throne.\n3. Step over the "
           "Fire "
           "Demon and climb up tothe roof.\n4. View INVENTORY\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_333(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_5(player);
      return; // Exit the loop and function after making a choice
    case 3:
      page_249(player);
      return; // Exit the loop and function after making a choice
    case 4:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 &&
           pick != 3); // Loop until player picks WEST or EAST
}
void page_153(Player &player) {
  std::cout << "\n\nThe Catwoman growls and snarls before leaping down from "
               "the tree to attack you. You step back and prepare to fight.\n";
  std::cout << "\n\n CATWOMAN --- SKILL 8 --- STAMINA 5\n";
  Enemy catwoman("CATWOMAN", 8, 5);
  bool result = battle(player, catwoman, 1);
  if (result) {
    next();
    page_202(player);
  } else {
    next();
    page_110(player);
  }
}
void page_154(Player &player) {
  std::cout << "\n\nYou get to your feet and see that the Lantern has turned a "
               "dull black color. You decide to have no more to do with it and "
               "set off north along the path.";
  next();
  page_231(player);
}
void page_155(Player &player) {
  std::cout << "\n\nYou settle down to sleep again but start to shake and "
               "tremble. Sweat pours from your body althought you feel very "
               "cold. \n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Belladonna") {
      std::cout << "\n1. Use Belladonna\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nBelladonna consumed.";
        page_83(player);
        break;
      case 2:
        page_259(player);
        break;
      }
    }
  }
}
void page_156(Player &player) {
  std::cout << "\n\nFalling to the ground is becoming a bit of a bad habit! It "
               "is also beginning to hurt.\n\nLose 3 STAMINA points\n";
  player.removeStamina(3);
  std::cout << "\n\nIf you are still alive, you get up and continue northwards "
               "along the path.\n";
  next();
  page_109(player);
}
void page_157(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nTo the left of the path you notice a large hole in the "
           "ground "
           "with a diameter of some three metres. Walking over  to the edge "
           "of "
           "the hole you see it sloping off into the depths of the "
           "earth.\n1. "
           "If you wish to walk down into the hole\n2. If you prefer to "
           "continue walking northwards up the path.\n3. "
           "View INVENTORY\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_125(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_337(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_158(Player &player) {
  std::cout << "\n\nYou start ot lose your balance as the illusion distorts "
               "your  mind. You close your eyes and reach into your backpack, "
               "pulling out the Headband of Concentration, which you quickly "
               "place on your head. The spinning sensation in your head "
               "sibsides and you open your eyes again to see the old woman who "
               "you now realise is a WITCH. To stop you reaching her, the "
               "servant throws a wooden chair at you.\n\nTest your luck.\n\n";
  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nYou are lucky! The chair misses you.\n";
    player.removeLuck(1);
    next();
    page_47(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nYou are unlucky. The chair hits you on the side of the "
                 "head, knocking you unconscious.\n";
  }
  player.removeLuck(1);
  next();
  page_353(player);
}
void page_159(Player &player) {
  std::cout << "\n\nDespite your struggles the Tangleweed manages to grab your "
               "limbs and drag you to the ground. You see the grass begin to "
               "curl itself round your neck and tighten its grip. You choke "
               "and try to cough. But then you realize that the Tangleweed is "
               "not trying to strangle you - it is just trying to make as much "
               "contact as it can with your exposed flesh so that it can suck "
               "your blood! With horro, you see hundreds of tiny blood-ringed "
               "punctures on your arms and legs. Finally the weed, having "
               "drunk enough, releases its grip.\n\nLose 3 STAMINA points.\n";
  next();
  player.removeStamina(3);
  std::cout << "\n\nYou rise to your feet and stand shakily rubbing your "
               "wounds. Relieved to be alive, you start walking north again.\n";
  page_142(player);
}
void page_160(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe narrow path continues to cut its way through the tangled "
           "forest. Strange animal cries and noises echo through the trees. "
           "At "
           "last the path widens to approximately a metre across. Soon you "
           "arrive at a moss-covered wooden signpost, on top of which sits a "
           "large crow. The arms of the signpost read \"North\" and "
           "\"East\". "
           "Just as you are deciding which way to continue, you hear the "
           "words "
           "\"Good afternoon.\" You look up in the direction of the voice "
           "and "
           "see the crow looking down at you inquisitively. \"Good "
           "afternoon...,\" you reply slowly, feeling a little foolish. The "
           "crow speaks again, asking which way you are headed. You reply "
           "that "
           "you are looking for two goblins, small, sinewy creatures with "
           "brown, scaly skin. \"1 Gold Piece will buy my advice,\" states "
           "the "
           "crow confidently. Will you: \n";

    std::cout << "\n\n1. Pay the crow for its advice? \n2. Ignore the crow and "
                 "turn north? \n3. Ignore the crow and carry on eastwards.\n4. "
                 "View INVENTORY\n";
    pick = choice();

    switch (pick) {
    case 1:
      std::cout << "\n\n1 Gold removed.\n";
      if (player.gold >= 1) {
        player.gold -= 1;
        page_343(player);
      } else {
        std::cout
            << "\n\nYou don't have enough Gold to pay the Crow.\n1. Ignore "
               "the "
               "crow and "
               "turn north? \n. Ignore the crow and carry on eastwards.\n3. "
               "View INVENTORY\n";
        do {
          pick = choice();

          switch (pick) {
          case 2:
            page_8(player);
            return; // Exit the loop and function after making a choice
          case 3:
            page_239(player);
            return; // Exit the loop and function after making a choice

          case 4:
            viewInventory(player);
            break; // Go back to the loop to allow for another choice
          default:
            std::cout << "\nInvalid choice. Please try again.\n";
            break;
          }
        } while (pick != 1 && pick != 2 && pick != 3);
      }

      break;
    case 2:
      page_8(player);
      return; // Exit the loop and function after making a choice
    case 3:
      page_239(player);
      return; // Exit the loop and function after making a choice

    case 4:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 &&
           pick != 3); // Loop until player picks WEST or EAST
}
void page_161(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nAs your hand descends into the inky blackness of the "
                 "vase it is gripped by an intense pain. First it feels as if "
                 "it is being crushed and then it feels as if it is on fire.\n";

    std::cout
        << "\n\n1. Do you wish to pull your hand out of the vase? \n2. Do "
           "you "
           "want to feel around to find out what is inside the vase? \n3. "
           "View INVENTORY\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_343(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_8(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_162(Player &player) {
  std::cout
      << "\n\nThere is nothing of use or value in the Fish Man's cave, so "
         "you "
         "walk round to the north side wall. Steps lead back through the "
         "waterfall and up the north wall of the gorge to the top. You are "
         "at "
         "the foot of some hills and can see the path climbing up into their "
         "midst in the north. It is getting dark and night is closing in, so "
         "you decide to camp behind some rocks of the path. You build a "
         "large "
         "fire and settle down to sleep with your sword by your side.\n";
  next();
  page_285(player);
}
void page_163(Player &player) {}
void page_164(Player &player) {
  std::cout << "\n\nYou climb the last few steps and then you are out of the "
               "cavern standing on the rich green grass of the valley floor. "
               "To the east you see the hollow tree trunk down which you "
               "descended some time before. You pass it and return to the "
               "path, where you head north again.\n";
  next();
  page_144(player);
}
void page_165(Player &player) {
  std::cout << "\n\nThe small Gremlin is agile, being able to run around you "
               "while you have difficulty in moving about on your hands and "
               "knees.You back up against a wall and draw your sword.\n";
  std::cout << "\n\nDuring each Attack Round you must reduce your Attack "
               "Strength by 3 for each round of combat because of your cramped "
               "fighting position.\n";
  player.removeSkill(3);
  std::cout << "\n\n GREMLIN --- SKILL 5 --- STAMINA 3\n";
  Enemy Gremlin3("First GREMLIN", 4, 3);
  battle(player, Gremlin3, -1);
  player.addSkill(3);
  next();
  page_242(player);
}
void page_166(Player &player) {
  std::cout << "The friar smiles and says \"Bless you.\" He bows and sets off "
               "south along the path, whistling as he goes.\n\nAdd 2 LUCK "
               "points\n\nHeading north.";
  player.addLuck(2);
  next();
  page_390(player);
}
void page_167(Player &player) {
  std::cout << "\n\nThe Wyvern's long tail swishes from side to side ad smoke "
               "curls up from its nostrils. You draw your sword and prepare to "
               "fight this fearsome monster.\n";
  std::cout << "\n\nWYVERN --- SKILL 10 --- STAMINA 11\n";
  Enemy wyvern("WYVERN", 10, 11);
  battle(player, wyvern, -1);
  next();
  page_305(player);
}
void page_168(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {

    std::cout
        << "Inside the cage a small, sinewy creature with brown, scaly skin is "
           "jumping up and down - he is a GOBLIN. Round his neck hangs a black "
           "shiny rod on a leather cord.\n1. If you want to unlock the cage "
           "door\n2. If you want to leave the cave and continue northwards.";
    pick = choice();

    switch (pick) {
    case 1:
      page_117(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_358(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_169(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {

    std::cout
        << "The gas is toxic and your eyes start to water. You cough and hold "
           "your breath while running round the cave trying to escape from the "
           "gas cloud which evelops you. Your lungs feel as though they are "
           "bursting and you are forced to inhale. Reduce your SKILL by 2 and "
           "your STAMINA by the amount of one die roll.";
    player.removeSkill(2);
    int playerRoll = (rand() % 6 + 1);
    std::cout << "\n\nTaken " << playerRoll << " Damage.\n";
    player.removeStamina(playerRoll);
    std::cout << "You see the gas cloud fade away. You put the silver box in "
                 "your backpack.\n1. If you want to walk over to the creature "
                 "in the cage.\n2. If you would rather leave the cave to "
                 "continnue your journey northwards.";

    pick = choice();

    switch (pick) {
    case 1:
      page_85(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_358(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_170(Player &player) {
  std::cout
      << "You walk into a well-furnished room adorned with fine objects and "
         "wollen rugs. Sitting at a desk by the far wall of the room is an old "
         "man wearing purple robes and conical hat. He rises from his chair "
         "and says. \"I am Arragon and you are an insignificant mortal. You "
         "have the nerve to walk into my household uninvited, no doubt to rob "
         "me of my wealth and treasure. You are wrong, stranger, for I will "
         "relieve you of your wealth. Unless you give me 10 Gold Pieces and "
         "two objects from your backpack to add to my exquisite collection, I "
         "will turn you to stone.\"Are you wearing an Eye of Amber?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Eye of Amber") {
      std::cout << "\n1. Use Eye of Amber?\n2. Don't use the Eye of Amber.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nEye of Amber Consumed.";
        page_223(player);
        break;
      case 2:
        page_346(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Eye of Amber\n";
  next();
  page_346(player);
}
void page_171(Player &player) {
  std::cout << "The path comes to another junction. The way south leads back "
               "to the "
               "valley so you decide to stay in the forest and head north.";
  next();
  page_190(player);
}
void page_172(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {

    std::cout << "A ladder runs down the inside of the well to the water "
                 "below. However, there appears to be a tunnel just above the "
                 "surface of the water, running north. It is circular and has "
                 "a diameter of one metre. You may:\n1. Toss a Gold Piece into "
                 "the well to make a wish\n2. Descend the ladder to look down "
                 "the tunnel\n3. Return to the path to head east.\n4. View "
                 "Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_89(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_256(player);
      return; // Exit the loop and function after making a choice
    case 3:
      page_281(player);
      return; // Exit the loop and function after making a choice

    case 4:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 &&
           pick != 3); // Loop until player picks WEST or EAST
}
void page_173(Player &player) {
  std::cout
      << "\n\nYou take from your backpack the glass phial containing the "
         "sparkling dust and sprinkle it on the stone slab. Slowly the stone "
         "slab starts to rise into teh air. You peer into the box and are "
         "horrified to see a rotting corpse lying there. Ragged clothes "
         "cover "
         "a skeletal body with loose flesh hanging form it. You have lifted "
         "the lid off a coffin containing some cursed undead creature and "
         "jump "
         "back in horror as you see its eyes flick open. You are in a crypt "
         "made foul by some unknown follower of darkenss. SLowly the "
         "creature "
         "rises out of its coffin and moves towards you with outstretch "
         "arms.\n\n"
         "Do you possess any Holy Water?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Holy Water") {
      std::cout << "\n1. Use Holy Water?\n2. Don't use the Holy Water.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nHoly Water Consumed.";
        page_58(player);
        break;
      case 2:
        page_227(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Holy Water\n";
  next();
  page_227(player);
}
void page_174(Player &player) {
  std::cout
      << "\n\nAs you draw your sword from teh carcass of the Wild Boar you "
         "wonder what made it attack you. In the distance you hear the sound "
         "of barking dogs. Perhaps it was being hunted and, being trapped, "
         "made its last stand against you. Through the nose of the Boar you "
         "see a large gold ring which you cut lose and place in your "
         "backpack. "
         "It's worth 10 Gold Pieces.\n\n 1 Luck point added.\n";
  player.equipment.push_back({"Gold Ring", 10});
  player.removeLuck(1);
  next();
  page_323(player);
}
void page_175(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nThe iron lock on the chest is old and rusted and will "
                 "not open.\n1. If you wish to try to lift the chest and smash "
                 "it on the floor.\n2. If you would rather leave it and "
                 "rummage through the fireplace instead.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_372(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_106(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_176(Player &player) {
  std::cout
      << "\n\nYou bend down over the lifeless body of the mad Goblin and "
         "examine the rod around its neck. The rod is made of ebony and there "
         "is a screw thread at one end. You are excited to see the letter G "
         "neatly inscribed at the other end of what must be the handle of the "
         "dwarfish war-hammer. You put your find in your backpack and leave "
         "the cave to continue your quest northwards.\n";
  next();
  page_358(player);
}
void page_177(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nOutside in the bright light you notice the dead quietness "
           "again. "
           "A narrow path leads northwards from the tall grass surrounding "
           "Yaztromo's tower into the dense undergrowth of Darkwood Forest. "
           "In "
           "a "
           "few strides you are surrounded by the dark and tangled forest; "
           "stones and knotted roots seem to hide in the shadows and you can "
           "almost believe that they are trying to trip you up. The light "
           "fades "
           "quickly and the air becomes moist and unpleasant. Deeper and "
           "deeper "
           "you go, into the gloom. Eventually the path forks on either side "
           "of "
           "a huge old tree.\n";

    std::cout << "\n\nWhat will you do: \n1. To Go WEST\n2. To Go EAST\n3. "
                 "View INVENTORY\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_289(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_160(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_178(Player &player) {
  std::cout
      << "\n\nAs you wade into the river the Centaur gallops off down the "
         "path. The water is dark green in color and  you wonder if any "
         "creatures lurk in its depths. Although the water only rises to "
         "your "
         "waist it is very cold and your legs feel numb. You think something "
         "is touching your legs, maybe weeds, but it is difficult to tell. "
         "Eventually you reach the far bank and haul yourself out of the "
         "river. You look down at your legs and are horrified to see a "
         "bloated "
         "black Leech, some six inches long, clinging to your thigh. You "
         "reach "
         "into your backpack and take salt from your Provision to rub on to "
         "the hideous Leech. It curls up and falls off your leg. Lose one "
         "portion of your Provisions. You kick the shrivelled Leech back "
         "into "
         "the river and look around you. You are now at the foot of some "
         "hills "
         "and it is beginnig to get dark. You see that the path winds its "
         "way "
         "north up into the hills and you decide to camp under a huge, old "
         "oak "
         "tree to the right of the path. Later you settle down to sleep with "
         "your sword by your side.\n";
  next();
  page_298(player);
}
void page_179(Player &player) {
  // TODO Add 1 point to all future dice rolls
  std::cout << "\n\nYou place the helmet on your head. A surge of power start "
               "to run through your body, making you feel strong and unafraid. "
               "The helmet has magical properties and will allow you to add 1 "
               "point to all future dice rolls when computing your own Attack "
               "Strength during comabt as long as you wear it.\n\nBronze "
               "Helmet added to your Inventory\n\nYou start walking north "
               "again, pleased with your new armor.";
  player.equipment.push_back({"Bronze Helmet", 4});
  next();
  page_115(player);
}
void page_180(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nWalking quickly along the path through waist-high grass, "
                 "you arrive at another junction in the path.\n1. If you want "
                 "to continue walking north.\n2. If you wish to go west.\n3. "
                 "View INVENTORY";

    pick = choice();

    switch (pick) {
    case 1:
      page_105(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_361(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_181(Player &player) {
  std::cout
      << "\n\nYou walk along the steps through the waterfall into a large "
         "cavern where there is a pool of water. The steps run round the side "
         "of the pool and there is a stone table and chair on teh far side. "
         "You go to the table and see fish scraps lying on it. Suddenly you "
         "hear a noise of splashing behind you. A strange creature climbs out "
         "of the pool and advances towards you armed with a trident. His legs "
         "are like a man's, but his face and torso resemble a large green fish "
         "with bulbous eyes. His arms are like yours but are covered with "
         "large scales. He is a FISH MAN and you must fight him.\n";
  std::cout << "\n\nFISH MAN --- SKILL 7 --- STAMINA 6\n";
  Enemy fish("FISH MAN", 7, 6);
  battle(player, fish, -1);
  next();
  page_162(player);
}
void page_182(Player &player) {
  std::cout << "You take hold of the sword and place your foot against the "
               "rock. Roll two dice.\n\n";
  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nThe sword slowly slides out of the rock!\n";
    player.removeLuck(1);

    next();
    page_70(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nYou tire and are forced to give up and continue north "
                 "down the gorge.\n";
  }
  player.removeLuck(1);
  next();
  page_334(player);
}
void page_183(Player &player) {
  std::cout
      << "\n\nYou slowly inhale the poisonous air around you, but all is "
         "well "
         "and you can breathe freely. After a while the gas cloud fades "
         "away. "
         "However, there does not seem to be much sense in staying here any "
         "longer and you walk over to the steps on the far wall.\n";
  next();
  page_293(player);
}
void page_184(Player &player) {
  std::cout
      << "\n\nYou explain to the friar that you took a brass bell from a Cabe "
         "Troll in the hills. You show it to him and he jumps for joy, "
         "shouting, \"Oh mercy, what fortune, what fortune.\" He reaches into "
         "a leather pouch on the string belt around his waist and pulls out a "
         "small glass phial. You give  him the brass bell and take the glass "
         "phial. You uncork the phial and drink its contents.\n\nAdd 4 points "
         "to your STAMINA score.\n\nThe frair shakes your hand, thanking you "
         "over and over again. At last you part company, with you continuing "
         "north and the friar walking south.\n";
  player.addStamina(4);
  next();
  page_390(player);
}
void page_185(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou are surpised to see no mark so sign of injury on your "
           "hand. You try to put your hand back into the vase but an invisible "
           "barrier across the opening stops you from doing so. You may "
           "either:\n1. Drop the vase to the ground to smash it.\n2. Put it "
           "down on the porch and return to the path to head north again.\n3. "
           "View INVENTORY";

    pick = choice();

    switch (pick) {
    case 1:
      page_250(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_149(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_186(Player &player) {
  std::cout
      << "\n\nYou step into the water and star tto waade across the river. The "
         "water is quite murky and although the level only rises to your waist "
         "you feel somewhat vulnerable to creature that may live in the river. "
         "Suddenly your fears are realized - you feel sharp teeth sinking into "
         "your thigh. You reach down into the water and feel the long thin "
         "body a BLOOD EEL extending from your leg. You draw your sword and "
         "start to stab at the water.\n";
  std::cout << "\n\nBLOOD EEL --- SKILL 7 --- STAMINA 6\n";
  Enemy blood_eel("BLOOD EEL", 7, 6);
  battle(player, blood_eel, -1);
  next();
  page_131(player);
}
void page_187(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nWalking along the twisting path you see a small, sinewy "
           "creature with brown, scaly skin sitting on a log on the right of "
           "the path. He has a sullen expression on his face as he slowly "
           "tosses a black shiny rod on a leather cord back and forth "
           "between "
           "his hands. He might be one of the Goblins you are looking for. "
           "Will you:\n1. Draw your sword and attack the the Goblin?\n2. Try "
           "to start a cnoversation with the Goblin?\n3. Ignore him and "
           "continue walking north?\n4. View INVENTORY";

    pick = choice();

    switch (pick) {
    case 1:
      page_286(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_203(player);
      break; // Exit the loop and function after making a choice
    case 3:
      page_6(player);
      break; // Go back to the loop to allow for another choice
    case 4:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 &&
           pick != 3); // Loop until player picks WEST or EAST
}
void page_188(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nWalking down the hill you see the valley floor "
                 "stretching out ahead and, beyond, a sinister wall of trees - "
                 "Darkwood! On the other side of the tree lies Stonebridge, "
                 "your journey's end. Arriving on the valley floor you see "
                 "that the path comes to a juction.\n1. If you want to head "
                 "west\n2. If you want to head east\n3. "
                 "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_221(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_359(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_189(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe green-topped fungi are being water by two of the "
           "humanoids.\n1. If you want to eat some of the fungus.\n2. If you "
           "wish to leave the cavern by the steps on the far wall.\n3. "
           "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_269(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_293(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_190(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nAhead you hear the thumping of heavy footsteps and the "
                 "noise of branches breaking. It sounds as though some huge "
                 "creature is coming down the path towards you!\n1. If you "
                 "wish to face the oncoming beast.\n2. If you would rather "
                 "hide in the bushes off the path.\n3. "
                 "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_265(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_318(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_191(Player &player) {

  std::cout
      << "\n\nThe friar is very nervous and jittery and shuffles from side to "
         "side as you start to speak. You ask him why he is so distraught and "
         "he tells you that his sacred brass bell has been stolen. As payment "
         "for its return he is willing to offer a magic healing potion.";

  std::cout << "\n\nDo you possess a Brass Bell?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Brass Bell") {
      std::cout << "\n1. Brass Bell?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nBrass Bell Consumed.";
        page_184(player);
        break;
      case 2:
        page_243(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Brass Bell\n";
  next();
  page_243(player);
}
void page_192(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou draw your sword but the Gnome sits with his legs crossed "
           "and smiles. You look down at your hand and see that you are not "
           "holding your sword any longer - it has turned into a carrot!\n1. "
           "If you wish to apologize to the Gnome for being so rash.\n2. If "
           "you would rather throw your carrot at him.\n3. "
           "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_12(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_46(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_193(Player &player) {
  std::cout << "\n\nA small green-skinned GREMLIN steps of fthe ladder to "
               "enter the tunnel. He stands no more than a metre high and is "
               "suprised to see you crouched in the tunnel. He draws a dagger "
               "from a pocket in his jerkin. You must fight him.\n";
  std::cout << "\n\nDuring each Attack Round you must reduce your Attack "
               "Strength by 3 for each round of combat because you are "
               "fighting on your hands and knees.\n";
  player.removeSkill(3);
  std::cout << "\n\n GREMLIN --- SKILL 4 --- STAMINA 4\n";
  Enemy Gremlin1("First GREMLIN", 4, 4);
  battle(player, Gremlin1, -1);
  player.addSkill(3);
  next();
  page_110(player);
}
void page_194(Player &player) {
  std::cout
      << "\n\nThe man smiles and takes off his mask, explaining that he wore "
         "it to protect him against the dust and not to hide the face of a "
         "robber. You sheathe your sword and relax a little. The man tells "
         "you "
         "that he is a hunter and that the best game in all the northern "
         "borderlands can be found on this grassy plain with in Darkwood "
         "Forest. He says that his hounds were chasing a Wild Boar when they "
         "lost its scent and picked up that of the fox mistakenly. He warns "
         "you of some of the dangerous beasts that lurk in these parts and "
         "finally says, \"And if you are going to spend the night in "
         "Darkwood, "
         "you might need some of this.\" He drops some belladonna into your "
         "hand and jumps back on his stallion. Then with a sudden blow of "
         "his "
         "horn, the dogs run off east. He turns and waves to you before "
         "galloping off in pursuit of his dogs. You put the belladonna into "
         "your backpack and set off west again.\n";
  player.equipment.push_back({"Belladonna", 2});
  next();
  page_208(player);
}
void page_195(Player &player) {}
void page_196(Player &player) {}
void page_197(Player &player) {}
void page_198(Player &player) {}
void page_199(Player &player) {}
void page_200(Player &player) {}
void page_201(Player &player) {}
void page_202(Player &player) {}
void page_203(Player &player) {}
void page_204(Player &player) {}
void page_205(Player &player) {
  std::cout << "\n\nEach Pygmy has a small, leather pouch hung around his "
               "neck. You find 3 Gold Piece in each. You take the gold and "
               "return to the path to continue your northwards journey.\n";
  // TODO Figure out how many Pygmy there are
  player.gold += 3;
  next();
  page_92(player);
}
void page_206(Player &player) {

  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nSuddenly off the path to your left you hear cries for "
                 "help.\n1. If you wish to go to the aid of the person in "
                 "trouble.\n2. If you would rather ignore the cries and "
                 "continue your journey north.\n3. "
                 "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_253(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_187(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_207(Player &player) {

  std::cout
      << "\n\nYou step over the body of the Ape Man and enter his living "
         "area. "
         "Animal bones and rotting fruit litter the floor. The Ape Man's bed "
         "is made of moss and lichen and seems to be crawling with bugs. You "
         "shudder and step back out on to the platform. You then notice a "
         "copper braclet aroud the Ape Man's wrist.\n1. If you want to put "
         "it "
         "on your own wrist.\n2. If you would rather climb down the vine to "
         "the path, and carry on walking northwards.\n";
  next();
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou step over the body of the Ape Man and enter his living "
           "area. Animal bones and rotting fruit litter the floor. The Ape "
           "Man's bed is made of moss and lichen and seems to be crawling "
           "with "
           "bugs. You shudder and step back out on to the platform. You then "
           "notice a copper braclet aroud the Ape Man's wrist.\n1. If you "
           "want "
           "to put it on your own wrist.\n2. If you would rather climb down "
           "the vine to the path, and carry on walking northwards.\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_302(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_109(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_208(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYou soon arrive at a crossroads. The way south leads "
                 "back to the forest so you decide to ignore it.\n1. You may "
                 "either keep going west.\n2. Head north\n3. "
                 "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_99(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_291(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_209(Player &player) {}
void page_210(Player &player) {}
void page_211(Player &player) {}
void page_212(Player &player) {}
void page_213(Player &player) {}
void page_214(Player &player) {}
void page_215(Player &player) {}
void page_216(Player &player) {}
void page_217(Player &player) {}
void page_218(Player &player) {}
void page_219(Player &player) {}
void page_220(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nWalking along the narrow path you notice a big old tree "
                 "to your left with a large hole in its trunk just above head "
                 "height.\n1. If you wish to reach up to put your hand into "
                 "the hole.\n2. If you would rather ocntinue walking "
                 "north.\n3. View INVENTORY";

    pick = choice();

    switch (pick) {
    case 1:
      page_275(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_115(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_221(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe valley floor is covered with lush green grass and is "
           "very "
           "flat. You sson arrive at another junction in the path.\n1. You "
           "may "
           "either continue west\n2. Or head north again.\n3. View INVENTORY";

    pick = choice();

    switch (pick) {
    case 1:
      page_378(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_199(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_222(Player &player) {
  std::cout << "\n\nThere is no escaping the poisonous gas cloud which has "
               "enveloped you. Your lungs feel as if they are bursting and you "
               "are forced to inhale. Reduce your STAMINA score by the amount "
               "of one die roll. If you are still alive you see th ecloud "
               "drift away at last and you are able to breathe freely again. "
               "There does not seem to be much point in staying here any "
               "longer and you walk over to the steps on the far wall.\n";
  int playerRoll = (rand() % 6 + 1);
  std::cout << "\n\nRolled a " << playerRoll << std::endl;
  player.removeStamina(playerRoll);
  next();
  page_293(player);
}
void page_223(Player &player) {
  std::cout
      << "\n\nThe jewel hanging round  your neck starts to glow. Perhaps "
         "Arragon is not all that he says he is. You draw your sword and "
         "challenge him. The expression on Arragon's face changes from "
         "confidence to fear. He then apologizes for being so aggressive but "
         "explains that these lands are filled with bandits and murderers and "
         "he has to protect himself by pretending to be a wizard of supreme "
         "power. He begs forgiveness and fofers you 5 Gold Pieces if you will "
         "leave him in peace and tell nobody of his disguise. You accept his "
         "offer and leave his cottage. You walk back to the junction in the "
         "passage and head north.\n";
  next();
  page_150(player);
}
void page_224(Player &player) {}
void page_225(Player &player) {}
void page_226(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nTo the right of the path you hear voices arguing in a "
                 "strange "
                 "language coming through the trees.\n1. If you wish to step "
                 "off the "
                 "path to investigate.\n2. If you would rather ignore the "
                 "voices and "
                 "press on north along the path.\n3. View INVENTORY";

    pick = choice();

    switch (pick) {
    case 1:
      page_29(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_254(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_227(Player &player) {}
void page_228(Player &player) {}
void page_229(Player &player) {}
void page_230(Player &player) {}
void page_231(Player &player) {}
void page_232(Player &player) {}
void page_233(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nTo the right of the path you see a stone well with a "
                 "bucket and turning handle.\n1. If you wish to take a closer "
                 "look at the well.\n2. If you would rather continue your walk "
                 "west.\n3. View INVENTORY";

    pick = choice();

    switch (pick) {
    case 1:
      page_17(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_238(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_234(Player &player) {
  std::cout << "\n\nYou arrive back at the junction in the path. Ignoring the "
               "way south you head west.\n";
  next();
  page_382(player);
}
void page_235(Player &player) {}
void page_236(Player &player) {}
void page_237(Player &player) {}
void page_238(Player &player) {
  std::cout << "\n\nWalking west along the valley floor, you pass a junction "
               "in the path, which leads south and back into the hills. You "
               "decide to keep walking west.\n";
  next();
  page_221(player);
}
void page_239(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe path continues to cut its way through the dense "
           "undergrowth and you feel a little claustrophobic with the trees "
           "overhanging you on either side. After a while the path turns "
           "sharply to the lest at a tree bearing strange fruit.\n1. If you "
           "wish to stop to eat some of the fruit.\n2. If you wish to "
           "proceed "
           "north without stopping to eat.\n3. View INVENTORY";

    pick = choice();

    switch (pick) {
    case 1:
      page_37(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_226(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_240(Player &player) {}
void page_241(Player &player) {}
void page_242(Player &player) {}
void page_243(Player &player) {}
void page_244(Player &player) {}
void page_245(Player &player) {}
void page_246(Player &player) {}
void page_247(Player &player) {}
void page_248(Player &player) {}
void page_249(Player &player) {}
void page_250(Player &player) {}
void page_251(Player &player) {}
void page_252(Player &player) {}
void page_253(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nClambering over the gnarled roots of the old trees you "
                 "head in the directino of the cris. After a few minutes you "
                 "see a man dressed in long dark robes with his foot caught in "
                 "a rusted rabbit snare. His face is masked by the robes and "
                 "only his dark brown eyes are visible.\n1.If you want to help "
                 "the man free his foot from the snare.\n2. If you decide "
                 "against helping him, return to teh path and head north.\n3. "
                 "View INVENTORY\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_344(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_187(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_254(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nFurther along the narrow path you hear a deep to your "
                 "left in the trees. \n1. If you want to see what creature is "
                 "growling.\n2. If you prefer to ignore the creature and "
                 "continue north along the path.\n3. View INVENTORY";

    pick = choice();

    switch (pick) {
    case 1:
      page_241(player);
      break; // Exit the loop and function after making a choice
    case 2:
      page_300(player);
      break; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice

    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_255(Player &player) {}
void page_256(Player &player) {}
void page_257(Player &player) {}
void page_258(Player &player) {}
void page_259(Player &player) {}
void page_260(Player &player) {
  std::cout
      << "\n\nOn seeing that the arrow has not killed you the Centaur rears "
         "up "
         "on his hind legs and then charges you at a gallop. You have to "
         "jump "
         "back to avoid being run down. He thunders past you in a cloud of "
         "dust and stops some ten metres away down that path you have just "
         "come along. Maybe fighting the noble Centaur is not such a good "
         "idea "
         "after. You sheathe your sword and decide to wade across the "
         "river\n";
  next();
  page_178(player);
}
// Yaztromo's Tower
void page_261(Player &player) {

  int pick = -1;

  std::vector<Item> items = {{"Potion of Healing", 3},
                             {"Potion of Plant Control", 2},
                             {"Potion of Stillness", 3},
                             {"Potion of Insect Control", 2},
                             {"Potion of Anti-Poison", 2},
                             {"Holy Water", 3},
                             {"Ring of Light", 3},
                             {"Boots of Leaping", 2},
                             {"Rope of Climbing", 3},
                             {"Net of Entanglement", 3},
                             {"Armband of Strength", 3},
                             {"Glove of Missile Dexterity", 2},
                             {"Rod of Water-finding", 2},
                             {"Garlic Buds", 2},
                             {"Headband of Concentration", 3},
                             {"Fire Capsules", 3},
                             {"Nose Filter", 3}};

  std::cout << "\n\nYou follow the huffing and puffing old man in his tattered "
               "robes up the spiral staircase to a large room at the top of "
               "the tower. Shelves, cupboards and cabinets line the walls, all "
               "filled with bottles, jars, weapons, armour and all manner of "
               "strange artifacts. Yaztromo shuffles past the general clutter "
               "and slumps down in and old oak chair. He reaches into his top "
               "pocket and pulls out a fragile pair of gold-rimmed spectacles. "
               "Placing these on his nose, he picks up a piece of slate and "
               "chalk from a table next to his chair and begins to write "
               "frantically. He then hands you the slate.\n\n";

  do {
    bool canAffordItem = false;

    for (int i = 0; i < items.size(); i++) {
      if (player.gold >= items[i].getPrice()) {
        canAffordItem = true;
        break;
      }
    }

    if (!canAffordItem) {
      std::cout << "\n\nYou don't have enough gold for any more items!\n\n";
      break;
    }

    std::cout << "\t     ITEM\t\t\t\t\t     COST" << std::endl;
    for (int i = 0; i < items.size(); i++) {
      std::cout << i + 1 << ". " << items[i];
    }

    std::cout << "\n0. Exit" << std::endl;
    std::cout << "\nWhat items will you Purchase?" << std::endl;
    std::cout << "\nCurrent gold: " << player.gold << std::endl;
    pick = choice();

    if (pick == 0) {
      break;
    }
    for (int i = 0; i <= items.size(); i++) {
      if (pick == i) {
        // std::cout << pick << " ---- " << i;
        if (player.gold >= items[i].getPrice()) {
          std::cout << "\n*******\n"
                    << items[i - 1].getName() << " Added to your Inventory for "
                    << items[i - 1].getPrice() << " Gold.\n*******\n";
          player.gold -= items[i - 1].getPrice();
          player.equipment.push_back(items[i - 1]);
          items.erase(items.begin() + i - 1);
        } else {
          std::cout << "\n\nYou are out of Gold!\n\n";
          pick = 0;
          break;
        }
      }
    }
  } while (true);
  std::cout << "\n\nHe tells you that all the instructions for use are written "
               "clearly on the labels attached to the items, together with "
               "their suggested use. He sighs and tell you that unfortunately "
               "the magic in the items only works once, but they are the best "
               "you can buy for the money.";
  std::cout
      << "\n\nIf you decide to buy any of the items, pay for them by "
         "reducing "
         "the amount of Gold on your Inventory Sheet and add the items to "
         "the "
         "relevant sections on it. Yaztromo then asks you the reason for the "
         "purchase of the items, and you tell him your story and your "
         "decision "
         "to continue the quest of the luckless Bigleg. \"Ah yes\" Yaztromo "
         "say slowly, rubbing his chin, \"I heard that the good dwarfs of "
         "Stonebridge had lost their fabled war-hammer. Without it, their "
         "king "
         "is unable to arouse his people, despite the fact that the hill "
         "trolls threaten their village. Rumour has it that an envious king "
         "of "
         "another village of dwarfs sent and eagle to Stonebridge to steal "
         "the "
         "hammer, which it managed to do. But as it flew back over Darkwood, "
         "it was attacked by death hawks and the hammer dropped into the "
         "forest and was lost. Appearently, two forest goblins found the "
         "hammer but could not decide who was to keep it. They wrestled fo "
         "hours but gave up. Then they discovered that the handle unscrewed "
         "from the head, and the arguement was settled. One kept the head, "
         "the "
         "other kept the handle. Then they parted, each happy with his new "
         "treasure. Who knows if they still have them. So I'm afraid your "
         "problems are doubled. I can tell you that the head is made of "
         "bronze "
         "and the handle is made of polished ebony. Both head and handle "
         "have "
         "the letter G inscribed on them. Your task is not easy. Good "
         "luck.\"\n\nYou thank Yaztromo and leave the room by the spiral "
         "staircase.";

  // TODO change this to the real story. used fof testing
  //  page_177(player);
  // page_12(player);
  page_301(player);
}
void page_262(Player &player) {}
void page_263(Player &player) {}
void page_264(Player &player) {}
void page_265(Player &player) {}
void page_266(Player &player) {}
void page_267(Player &player) {}
void page_268(Player &player) {}
void page_269(Player &player) {}
void page_270(Player &player) {}
void page_271(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou approach the Gnome with your arm extended offering to "
           "shake his hand, and offer which he accepts with a doubtful look "
           "on "
           "his face. You then tell him of your quest, how you met poor "
           "Bigleg "
           "and why you decided to help the dwarfs of StoneBridge. You ask "
           "him "
           "if he has any information which might help you. He replies that "
           "he "
           "does not care much for dwarfs but he does have some information "
           "which might be of use to you.\n1. 5 Gold Pieces to hear the "
           "information \n2. 1 Piece of Treasure from your backpack to hear "
           "the information.\n3. Tell him what you think about him and "
           "continue west off the path.\n";
    pick = choice();
    switch (pick) {
    case 1:
      if (player.gold >= 5) {
      GnomeGold:
        std::cout << "\n\nYou pay him 5 Gold to hear the information that he "
                     "has to offer.\n";
        player.gold -= 5;
        page_297(player);
        // goto GnomeConvo;
      } else {
        std::cout << "\n\nYou do not have enough Gold to give the Gnome, and "
                     "must give him 1 items from your backpack.\n";
        next();
        goto GnomeTreasure2;
      }
      break; // Exit the loop and function after making a choice
    case 2: {
    GnomeTreasure2:
      if (player.equipment.size() > 0) {
        for (int i = 0; i < player.equipment.size(); i++) {
          std::cout << i + 1 << ". " << player.equipment[i].getName() << "\n";
        }
        std::cout << "0. Don't give the Gnome any money or items and continue "
                     "on the path to the west.\n";

        pick = choice();
        goto GnomeTelloff;
        for (int i = 0; i <= player.equipment.size(); i++) {
          if (pick == i) {
            std::cout << player.equipment[i - 1].getName()
                      << " removed from your Inventory and given to the Gnome "
                         "as payment.\n";
            player.equipment.erase(player.equipment.begin() + i - 1);
          }
        }
      } else if (player.gold >= 5) {
        std::cout << "\n\nYou do not have enough treasure to give to the "
                     "Gnome, would you give him 5 Gold instead?\n1. Give the "
                     "Gnome 5 Gold\n2. Leave the Gnome.\n3. View Inventory\n";
        pick = choice();
        switch (pick) {
        case 1:
          goto GnomeGold;
        }
      } else {
        std::cout << "\n\nYou do not have enough treasure or Gold to give to "
                     "the Gnome.\n";
        goto GnomeTelloff;
      }
      next();
      page_297(player);
      break; // Exit the loop and function after making a choice
    }
    case 3:
    GnomeTelloff:
      std::cout
          << "\n\nYou tell off the Gnome and continue west along the path.\n";
      next();
      page_67(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
  // TODO fix this garbage
  pick = 0;
  do {
    // GnomeConvo:
    std::cout << "\n\n1. If you wish to continue the conversation with him\n2. "
                 "If you have had enough of the Gnome and would rather head "
                 "west along the path.\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_271(player);
      return;
    case 2:
      page_67(player);
      return;
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }

  } while (pick != 1 && pick != 2);
}
void page_272(Player &player) {}
void page_273(Player &player) {}
void page_274(Player &player) {}
void page_275(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou put your hand slowly into the dark hole. It comes into "
           "contact with something cold and hard. It feels like a metal "
           "bowl. "
           "As you start to lift it out of the hole you wince with pain as "
           "the "
           "hsarp teeth of some small creature suddenly bite into your arm. "
           "You pull your arm out quickly, hanging on to your discovery. "
           "Blood "
           "drops to the ground from your wound.\n\nLose 1 STAMINA point. "
           "You "
           "see that you have not found a metal bowl after all. It is a "
           "bronze "
           "helmet and it looks about your size. Will you:\n1. "
           "Try on the helmet?\n2. Discard it and continue north.\n3. View "
           "Inventory\n";
    player.removeStamina(1);
    pick = choice();

    switch (pick) {
    case 1:
      page_179(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_115(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_276(Player &player) {}
void page_277(Player &player) {}
void page_278(Player &player) {}
void page_279(Player &player) {}
void page_280(Player &player) {}
void page_281(Player &player) {}
void page_282(Player &player) {}
void page_283(Player &player) {}
void page_284(Player &player) {}
void page_285(Player &player) {}
void page_286(Player &player) {}
void page_287(Player &player) {}
void page_288(Player &player) {}
void page_289(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe narrow, overgrown path continues to weave its way "
           "through "
           "the crowded forest. Strange animal cries echo through the trees. "
           "It's not long before you arrive at another junction in the "
           "path.\n1. "
           "If you wish to continue westwards\n2. If you wish to turn "
           "north.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_76(player);
      return; // Exit the loop and function after making a choice
    case 2:
      // TODO
      page_147(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_290(Player &player) {}
void page_291(Player &player) {}
void page_292(Player &player) {}
void page_293(Player &player) {}
void page_294(Player &player) {}
void page_295(Player &player) {}
void page_296(Player &player) {}
void page_297(Player &player) {
  std::cout << "\n\nAS he accepts his payment, the Gnome smiles and tells you "
               "that he saw the skeleton of a Goblin inside a stone crypt. "
               "Perhaps it was the skeleton of one of the two Goblins who you "
               "are looking for, perhaps not. He says that the crypt is "
               "somewhere north in the forest but exactly where, he's not "
               "sure. You are annoyed that the Gnome does not have any more "
               "information and set off west again at a fast pace.\n";
  next();
  page_67(player);
}
void page_298(Player &player) {}
void page_299(Player &player) {}
void page_300(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nDaylight appears through the trees in great white shafts "
                 "on either side of the path. The forest is thinning out. Soon "
                 "the path leads out of the trees on to a large plain with "
                 "tall grasses. Beyond, you see rising ground leading to low "
                 "hills. A new branch off the path leads west. Will you:\n1. "
                 "Continue north?\n2. Go west?\n3. View Inventory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_138(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_331(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_301(Player &player) {
  int pick = -1;
  std::cout << "\n\nYou search through the pockets of the Hobgoblins and find "
               "\n\n3 Gold Pieces\nA Tiny Brass Flute\nTwo maggot-riddent "
               "biscuits\nMouse Skull Necklace\n";
  player.addGold(3);
  player.equipment.push_back({"A Tiny Brass Flute", 2});
  player.equipment.push_back({"Maggot-Riddent Biscuit", 2});
  player.equipment.push_back({"Maggot-Riddent Biscuit", 2});
  player.equipment.push_back({"Mouse Skull Necklace", 2});
  next();
  page_157(player);
}
void page_302(Player &player) {
  // TODO add 1 point to all future dice rolls
  std::cout
      << "\n\nYou twist the braclet into place on your wrist. A powerful "
         "feeling surges through your arm and makes you jump. Your arm feels "
         "strong. You now possess a Braclet of Skill which will allow you to "
         "add 1 point to all future dice rolls when computing your own "
         "Attack "
         "Strength during combat as long as you wear it.\n\nBraclet of Skill "
         "added to your Inventory!\n\nYou now climb down the vine and "
         "continue "
         "northwards along the path.\n";
  player.equipment.push_back({"Braclet of Skill", 5});
  next();
  page_109(player);
}
void page_303(Player &player) {}
void page_304(Player &player) {}
void page_305(Player &player) {}
void page_306(Player &player) {}
void page_307(Player &player) {}
void page_308(Player &player) {}
void page_309(Player &player) {}
void page_310(Player &player) {}
void page_311(Player &player) {}
void page_312(Player &player) {}
void page_313(Player &player) {}
void page_314(Player &player) {}
void page_315(Player &player) {}
void page_316(Player &player) {
  std::cout << "\n\nEventually you manage to get back to sleep but have a "
               "restless night. In the morning you collect your belonging and "
               "head north along the path into the hills.\n";
  next();
  page_198(player);
}
void page_317(Player &player) {}
void page_318(Player &player) {}
void page_319(Player &player) {}
void page_320(Player &player) {}
void page_321(Player &player) {
  std::cout
      << "\n\nAs each Clone Warrior dies, it  dissolves into a pool of colored "
         "liquid on the rocky floor. Not wishing to stay in this dank and musy "
         "alcove any longer, you leave and club further up the steps.\n";
  next();
  page_107(player);
}
void page_322(Player &player) {}
void page_323(Player &player) {}
void page_324(Player &player) {}
void page_325(Player &player) {}
void page_326(Player &player) {
  std::cout
      << "\n\nYou soon arrive at another junction in the path. Looking at "
         "Bigleg's map you decide to head north again in the direction of "
         "Stonebridge, ignoring the narrow path which continues west.\n";
  next();
  page_145(player);
}
void page_327(Player &player) {}
void page_328(Player &player) {}
void page_329(Player &player) {}
void page_330(Player &player) {}
void page_331(Player &player) {}
void page_332(Player &player) {
  std::cout
      << "\n\nYou soon arrive at another junction in the path. Looking at "
         "Bigleg's map you decide to head north again in the direction of "
         "Stonebridge, ignoring the narrow path which continues west.\n";
  next();
  page_103(player);
}
void page_333(Player &player) {}
void page_334(Player &player) {}
void page_335(Player &player) {}
void page_336(Player &player) {}
void page_337(Player &player) {}
void page_338(Player &player) {}
void page_339(Player &player) {}
void page_340(Player &player) {}
void page_341(Player &player) {}
void page_342(Player &player) {}
void page_343(Player &player) {}
void page_344(Player &player) {
  std::cout
      << "\n\nYou wedge your sword between the jaws of the snare and pull on "
         "it like a lever. The robed strager adds his strength and finally "
         "the "
         "snare springs open. He thanks you over and over again and explains "
         "that he is in the forest looking for his long lost brother, who he "
         "thinks is living the life of a hermit somewhere in its depths. "
         "Together you scramble back over the roots of the trees to the "
         "path. "
         "You ask him to accompany you north but he politely declines saying "
         "that he belives his brother lives to the south. You shake hands "
         "and "
         "bid each other farewall.";
  next();
  page_36(player);
}
void page_345(Player &player) {}
void page_346(Player &player) {}
void page_347(Player &player) {}
void page_348(Player &player) {}
void page_349(Player &player) {}
void page_350(Player &player) {}
void page_351(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYou step carefully down the stone stairs, feeling your "
                 "way as you go. Slowly your eyes become accustomed to the "
                 "dark and you begin to make out shapes at the bottom of the "
                 "stairs. You are standing in a small, square room with a low "
                 "ceiling. The floor is thick with dust and there are cobwebs "
                 "everywhere. In the middle of the room there is what appears "
                 "to be a large stone box, measuring approximately two metres "
                 "by one metre.  The top of it is a great stone slab. Along "
                 "one of the rough stone walls you find a small alcove with a "
                 "candle in it.\n1. You may either light the candle. \n2. Walk "
                 "back  up the stairs, return to the path and head north.\n3. "
                 "View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_292(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_112(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_352(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {

    std::cout
        << "\n\nThe Ape Man is very agile around the tree, and you have "
           "difficultybrandishing your sword. You must deduct 2 from your "
           "Attack Strength during each round of combat.\n1. Fight the APE "
           "MAN. \n2. Escape by jumping off the platform to the ground five "
           "metres below.\n";

    pick = choice();

    switch (pick) {
    case 1: {
      player.removeSkill(2);
      std::cout << "\n\nAPE MAN --- SKILL 8 --- STAMINA 7\n";
      Enemy ape_man("APE MAN", 8, 7);
      battle(player, ape_man, -1);
      player.addSkill(2);
      next();
      page_207(player);
      return;
    } // Exit the loop and function after making a choice}

    case 2:
      page_156(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_353(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nWhen you awake you find that  you are lying on the "
                 "ground outside the wodden hut. You sit up and look inside "
                 "your backpack. All your provisions have been stolen! Luckily "
                 "nothing else is gone and you still have your sword. You "
                 "looko inside the hut but it is deserted. \n1. If you wish to "
                 "search the hut for something useful. \n2. If you would "
                 "rather leave the hut, return to the path and head north.\n3. "
                 "View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_26(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_220(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_354(Player &player) {
  // TODO check the references to this path and see if the player gets the
  // phials before on needs to get them here.
  std::cout << "\n\nQuin shakes his head in disbelief. He stands up and walkes "
               "silently to a wooden chest at the back of the hut. He lifts "
               "the lid and pulls out a small glass phial. He hands it to you "
               "and walks back to the table where be slumps in his chair "
               "looking thoroughly dejected. The dust in the phial sparkles in "
               "the light and you put it into your backpack and leave the hut. "
               "Outside you walk back to the junction in the path.\n";
  next();
  page_340(player);
}
void page_355(Player &player) {
  std::cout << "\n\nYou arrive at another junction in the path. Ignoring the "
               "way south, you continue east.\n";
  next();
  page_340(player);
}
void page_356(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nStuffed inside the Forest Giant;s clothing you find a "
                 "brass lantern with a green wick. There is no liquid inside "
                 "it to burn. Perhaps it is a magic latern. You may:\n\n1. Rub "
                 "the lantern and make a wish. \n2. Try to light the wick\n 3. "
                 "Throw the lamp away and head north. \n4. "
                 "View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_34(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_395(player);
      return; // Exit the loop and function after making a choice
    case 3:
      page_231(player);
      return; // Exit the loop and function after making a choice
    case 4:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_357(Player &player) {
  std::cout << "\n\nAs you walk west along the twisting path you pass another "
               "branch leading south to the valley. You ignore it and press on "
               "west. Eventually the path ends at a junction. Again, ingnoring "
               "the way south to the valley, you turn north.\n";
  next();
  page_306(player);
}
void page_358(Player &player) {

  std::cout
      << "\n\nWalking along the path, you do not notice a rope noose hidden "
         "beneath some fallen leaves ahead of you. Your foot catches in the "
         "noose and suddenly you are hauled inot the air by the rope which "
         "is tied to a sprung tree. In a second you are hanging upside down, "
         "suspended by your trapped foot. \n\nTest your Luck.\n\n \n3. "
         "View Inventory\n";

  std::cout << "\n\nTest your luck\n\n";
  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nLucky! Your sword remains in its scabbard, and you are "
                 "able to use it to cut yourself down from the man trap.\n";
    player.removeLuck(1);
    next();
    page_40(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nUnlucky. Your sword slips from its scabbard and drops to "
                 "the ground, leaving you dangling helplessly.\n";
  }
  player.removeLuck(1);
  next();
  page_218(player);
}
void page_359(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nTo the left of the path you see a stone well with a bucket "
           "and "
           "turning handle. \n1. If you wish to take a closer look at the "
           "well.\n2. If you would rather continue your walk east.\n3. "
           "View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_172(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_281(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_360(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nWalking along the narrow path you suddenly hear the sharp "
           "crack of a twig breaking and the whispering of low voices. You "
           "draw your sword and wait anxiously with your back to a large oak "
           "tree. Then from behind the trees opposite you step four men and "
           "a "
           "woman dressed in green tunics. Each looks menacing and they "
           "stand "
           "with swords and axes in their hands. The young woman steps "
           "forward "
           "and tells you that you are trespassing on their territory and "
           "you "
           "must pay a levy of five object from your backpack or face the "
           "consequences.\n1. If you wish to give them what they want.\n2. "
           "If "
           "you would rather spit on the ground in reply and fight them.\n3. "
           "View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_279(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_104(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_361(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nFrom not too far ahead comes the sharp noise of barking dogs "
           "drawing nearer. Suddenly a brown fox with eyes wide open in fear "
           "dashes past you running east. The frantic yelping of the dogs "
           "get "
           "louder.\n1. If you wish to face the oncoming pack of dogs\n2. If "
           "you would rather hide in the tall grasses off the path and let "
           "them run past in pursuit of the fox.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_396(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_86(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_362(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nWhich way are you heading?\n1. If you wish to continue "
                 "east.\n2. If you wish to continue west.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_281(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_238(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_363(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou rummage through the Dwarf's backpack and find a corked "
           "bottle containing a clear liquid.\n1. If you wish to drink the "
           "contents of the bottle.\n2. If you would rather leave the bottle "
           "and set off east again along the path.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_68(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_59(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_364(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou nod your head at the masked rider and bid him good-day. "
           "He "
           "nods back but says nothing. You tell him of your quest to help "
           "the "
           "dwarfs of Stonebridge; he then jumps down from his mount, throws "
           "back his cape and extends his right arm to shake your hand. You "
           "see that each of his fingers is adorned by a large gold ring. "
           "Will "
           "you:\n1. Attack him for his gold?\n2. Carry on the "
           "conversation?\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_276(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_194(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_365(Player &player) {
  std::cout << "\n\nThe gas is toxic and your eyes star to water. You hold "
               "your breath long enough to find the Nose Filters and slip them "
               "into place inside your nostrils. You inhale tentatively, but "
               "all is well. After a while, the gas cloud around your face "
               "fades away. You put the silver box into your backpack and "
               "leave the cave to continue your quest northwards.\n";
  player.equipment.push_back({"Silver Box", 10});
  next();
  page_358(player);
}
void page_366(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYou bid the Centaur good-day, to which he replies in a "
                 "similar manner. It is pleasing to meet somebody who is not "
                 "attacking you on sight! You ask the Centaur if he has any "
                 "information which might lead you to your goal but he does "
                 "not know anything. He says that he does not wander much "
                 "these days as he is getting old. He just wants to own a "
                 "little gold for his old age. He offers to carry you across "
                 "the river for 3 Gold Pieces\n1. Accept his offer?\n2. Refuse "
                 "politely and wade into the river?\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_127(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_178(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_367(Player &player) {
  std::cout
      << "\n\nThere is a soft popping sound as the head of the fungus splits "
         "open followed by the hiss of escaping gas. You become enveloped by "
         "a "
         "cloud of poisonous gas.\n1. Do you possess Nose Filters?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Nose Filters") {
      std::cout
          << "\n1. Use Nose Filters?\n2. Choose to not put the filters in.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nNose Filters Consumed.";
        page_60(player);
        break;
      case 2:
        page_222(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Nose Filters\n";
  next();
  page_222(player);
}
void page_368(Player &player) {
  std::cout
      << "\n\nThere is nothing more you can do in this room so you dicide to "
         "walk back up the stairs and return to the path to head north.\n";
  next();
  page_112(player);
}
void page_369(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nThe valley floor is green and pleasant and you wonder why "
           "such "
           "a tranquil place should be the home of so many loathsome "
           "creatures. Walking along the path, you see in the distance the "
           "portly shape of a balding man dressed in long brown robes "
           "heading "
           "in your direction. As he gets closer you see that he is a friar. "
           "Will you:\n1. Start a conversation with him?\n2. Walk past him "
           "with a nod of the head?\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_191(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_390(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_370(Player &player) {
  std::cout
      << "\n\nYou frantically grope about in total darkness. Slowly your "
         "vision returns and you stand up again. With your own sight fully "
         "restored you set off north again along the path. However, while "
         "you "
         "were on the ground an item fell out of your backpack.\n";
  int pick1 = rand() % player.equipment.size();

  std::cout << player.equipment[pick1].getName() << " Removed.";
  player.equipment.erase(player.equipment.begin() + pick1 - 1);
  next();
  page_231(player);
}
void page_371(Player &player) {
  std::cout << "\n\nThere are many hand-made clay figures of human hands in "
               "different positions covering every available surface area. "
               "They are  "
               "all painted with bright red glaze. In a copper vase you find "
               "3 Gold "
               "Pieces, which you put in your backpack. There is nothing "
               "else of use "
               "or value to you in the cave. You leave by crawling back the "
               "way you "
               "came to the junction, taking a clay hand with you if you "
               "wish.\n\nClay Hand added to your inventory!\n";
  player.addGold(3);
  player.equipment.push_back({"Clay Hand", 1});
  next();
  page_93(player);
}
void page_372(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYou bend down and try to lift the chest but it is very "
                 "heavy. "
                 "Roll two dice.\n";
    next();
    int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
    std::cout << "\n\nYou rolled a: " << playerRoll;
    if (playerRoll <= player.currSkill) {
      // You Succeeded
      std::cout << "\n\nYou succeed!\n";
      next();
      page_48(player);
    } else {
      // You Failed
      std::cout << "\n\nYou injure your back - Lose 1 STAMINA point.\n";
      player.removeStamina(1);
    }
    std::cout << "\n\nYou may try to lift the chest as many times as you wish "
                 "by rolling again.\n1. Roll again to lift the chest.\n2. "
                 "Leave the room.\n3. View Intentory\n";
    pick = choice();

    switch (pick) {
    case 1:
      page_372(player);
      return; // Exit the loop and function after making a choice
    case 2:
      std::cout << "\n\nYou leave the room exasperated. Continue north.\n";
      page_288(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_373(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou slump on to the log exhausted after your long battle. "
           "Sadly, the black rod was just part of the Shape Changer's "
           "illusion "
           "and it exists no more. However, you notice some violet mushrooms "
           "growing behind the log. They are unfamiliar to you but look "
           "tasty.\n1. If you wish to eat some of the musthrooms.\n2. If you "
           "would rather continue north.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_308(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_148(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_374(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou slip the gauntlet on to your hand and take hold of your "
           "sword. Slicing the air with it you feel more than usually "
           "skilled "
           "with your weapon. You now possess a Gauntlet of Weapon Skill "
           "which "
           "will allow you to add 1 point to all future dice rolls when "
           "comuting your own Attack Strength during combat so long as you "
           "wear it.\n\nGauntlet of Weapon Skill added to your "
           "inventory!\n\n1. If you wish to try on the gold ring.\n2. If you "
           "would rather ignore the gold ring (or already have tried it on) "
           "you must head north again along the path.\n3. View Inventory\n";
    player.removeDiceDebuff(1);
    player.equipment.push_back({"Gauntlet of Weapon Skill", 10});
    pick = choice();

    switch (pick) {
    case 1:
      for (int i = 0; i <= player.equipment.size(); i++) {
        if (player.equipment[i].getName() == "Ring of Slowness") {
          page_360(player);
        }
      }

      page_133(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_360(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_375(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nA junction appears in the path.\n1. If you wish to continue "
           "north.\n2. If you wish to head west.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_150(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_236(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_376(Player &player) {
  std::cout << "\n\nTest your luck\n\n";
  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nLucky! The Cave Troll does not wake up.\n";
    player.removeLuck(1);
    next();
    page_74(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nUnlucky. You kick a small stone which rattles across the "
                 "cave floor and awakens the Cave Troll.\n";
  }
  player.removeLuck(1);
  next();
  page_310(player);
}
void page_377(Player &player) {
  std::cout
      << "\n\nYou quickly catch up with the two brown-skinned Pygmies. They "
         "are "
         "wearing grass skirts and as they stop and turn to face you, you "
         "notice that each has a small bone through his nose. They draw "
         "their "
         "daggers and both attack you.\n";
  std::cout << "\n\nPYGMY A --- SKILL 5 --- STAMINA 5\n";
  Enemy pygmyA("PYGMY A", 5, 5);
  bool result = battle(player, pygmyA, 1);
  if (result) {
    std::cout << "\n\nPYGMY B --- SKILL 5 --- STAMINA 6\n";
    Enemy pygmyB("PYGMY B", 5, 6);
    bool result1 = battle(player, pygmyB, 1);
    if (result) {
      next();
      page_205(player);
    } else {
      next();
      page_92(player);
    }
  } else {
    next();
    page_92(player);
  }
  return;
}
void page_378(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nTo the left of the path you see a small man with a long grey "
           "beard sitting cross-legged on top of a huge mushroom. He is "
           "wearing a bright red jacket and cap, and his trousers are black "
           "and end at his knees. He is asleep and is snoring loudly.\n1. "
           "You "
           "may either give him a gentle push to wake him up.\n2. Or walk "
           "quietly past him to continue your journey.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_307(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_67(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_379(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\n1. You may either try to charge the door down.\n2. Or "
                 "return to the path and head north.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_72(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_112(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_380(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\n1. If you wish to risk jumping down the hollow tree "
                 "trunk to the bottom of the tunnel below.\n2. If you wish to "
                 "return to the path to head north again.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_237(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_144(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_381(Player &player) {
  std::cout
      << "\n\nYou have failed in your quest to help the dwarfs. Being unable "
         "to face Gillibran, their king, you decide to head east and find a "
         "place to rest after your perilous adventure. Perhaps you may try "
         "again? If you do, you must walk around Darkwood Forest back to "
         "Yaztromo's tower to purchase more of his magical items.\n";
  next();
  page_98(player);
}
void page_382(Player &player) {
  std::cout << "\n\nGoing west, the path soon brings you to another junction. "
               "You decide to ignore the way south and head north.\n";
  next();
  page_97(player);
}
void page_383(Player &player) {
  std::cout << "\n\nYou search through the bags and clothes of the Orcs and "
               "find\n\n2 Gold Pieces\na Small Wooden Whistle.\n\nYou may also "
               "eat the spit-roast rabbit and add 2 points to your STAMINA. "
               "Suitably refreshed you return to the path and head north.\n";
  player.addGold(2);
  player.equipment.push_back({"Small Wooden Whistle", 2});
  next();
  page_254(player);
}
void page_384(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nAhead in the grasses you hear a low moan. You look up to see "
           "the vultures patiently waiting overhead. A few steps further and "
           "you s ee the ugly sight of a huge man with muscles like knotted "
           "iron staked out to the ground. His arms and legs are tied to "
           "four "
           "large wooden pegs driven deep into the ground. The man is naked "
           "except for a small loin cloth and his skin is badly blistered "
           "from "
           "the sun. His face and chest show the bloodied signs of cruel "
           "torture. His captors will not have gained the information they  "
           "sought from him because he is a BARBARIAN!\n1. If you wish to "
           "cut "
           "him free.\n2. If you want to leave him in his agony, and treutnr "
           "to the path to head north.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_128(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_394(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_385(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nAs the Ogre slumps to the ground, the creature in the "
                 "cage jumps around evem more frantically than before. Do "
                 "you:\n1. Take a closer look at the creature in the cage?\n2. "
                 "Search through the contents of the cave?\n3. Leave the cave "
                 "immediately and continue northwards?\n4. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_168(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_313(player);
      return; // Exit the loop and function after making a choice
    case 3:
      page_358(player);
      return; // Exit the loop and function after making a choice
    case 4:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2 &&
           pick != 3); // Loop until player picks WEST or EAST
}
void page_386(Player &player) {
  std::cout << "\n\nYou settle down to sleep again but have a restless night. "
               "In the morning you wake early. You collect your belongings and "
               "set off north long the path.\n";
  next();
  page_119(player);
}
void page_387(Player &player) {
  std::cout << "\n\nOn the ground in front of you lies a single Gold Piece. "
               "You pick it up and toss it in the air with a flick of your "
               "thumb. Then you put it in your pocket.\n\nAdded 1 LUCK point\n";
  next();
  page_340(player);
}
// TODO add werewolf_wound bool call where this function gets called
void page_388(Player &player, bool werewolf_wound) {
  if (werewolf_wound) {
    std::cout << "\n\nYou were wounded by the Werewolf!\n";
    page_155(player);
  } else {
    std::cout << "\n\nYou were not wounded by the Werewolf!\n\n Added 1 LUCK "
                 "point.\n";
    player.addLuck(1);
    page_316(player);
  }
}
void page_389(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou raise your sword above your head and smash it down on "
           "the "
           "wooden chest. It splinters into tiny pieces and amongst the "
           "broken "
           "bits of wood you find\n\n8 Gold Pieces.\n\nAdd 1 LUCK point.\n1. "
           "You may look into the barrel.\n2. You may leave the alcove to "
           "climb further up the steps.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_215(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_88(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_390(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nIn the distance you see the dark brown wall of trees molling "
           "up before you. The path leads directly into Darkwood Forest and "
           "soon starts to twist and turn betwen tangled roots and bushes. "
           "The "
           "path eventually splits.\n1. If you wish to continue north.\n2. "
           "If "
           "you wish to head west?\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_190(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_280(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_391(Player &player) {
  std::cout << "\n\nThe building measures only three metres by three metres "
               "and has no windows. The door is made of stone and looks very "
               "solid. There is no handle and there does not appear that there "
               "is another way to enter the building. Then you notice a tiny "
               "keyhole in the stone door. Do you possess a Silver Key?\n";
  for (int i = 0; i <= player.equipment.size(); i++) {
    if (player.equipment[i].getName() == "Silver Key") {
      std::cout << "\n1. Silver Key?\n2. Return to the Path.\n";
      int pick = choice();
      switch (pick) {
      case 1:
        player.equipment.erase(player.equipment.begin() + i - 1);
        std::cout << "\n\nSilver Key Consumed.";
        page_200(player);
        break;
      case 2:
        page_379(player);
        break;
      }
    }
  }
  std::cout << "\n\nYou do not possess the Silver Key\n";
  next();
  page_266(player);
}
void page_392(Player &player) {
  std::cout << "\n\nAs you crouch in the bushes off the path, the voices get "
               "louder. THen two pairs of spindly legs in tattered cloth "
               "shuffle past you quickly, kicking up dirt and dust. The voices "
               "soon fade away into the distance. You step out on to the path "
               "again and press on northwards.\n";
  next();
  page_157(player);
}
void page_393(Player &player) {
  std::cout << "\n\nLeading along the quiet valley floor, the path comes to an "
               "end at a junction. The way south leads back into the hills so "
               "you decide against it and head north.\n";
  next();
  page_369(player);
}
void page_394(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nGradually the grass around you becomes shorter as the ground "
           "gently starts to rise. Ahead you can hear the sound of flowing "
           "water. Soon you reach the bank of a slow-flowing river. The "
           "river "
           "is very shallow and stepping stone cross it to the far bank "
           "where "
           "the path continue north into the distance. Will you:\n1. Cross "
           "the "
           "river by the stepping stones?\n2. Wade through the shallow water "
           "across the river?\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_66(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_186(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_395(Player &player) {
  std::cout << "\n\nInstead of the wick igniting, a blinding flash comes from "
               "the lantern, so bright that you are unable to see. You stumble "
               "and fall to the ground.\n\nTest your luck\n\n";
  next();
  int playerRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
  std::cout << "\n\nYou rolled a: " << playerRoll;
  if (playerRoll <= player.currLuck) {
    // LUCKY
    std::cout << "\n\nLucky! You land without injury!\n";
    player.removeLuck(1);
    next();
    page_154(player);
  } else {
    // UNLUCKY
    std::cout << "\n\nUnlucky. Your head smashes on a log.\n\n Lose 3 STAMINA "
                 "points.\n";
    player.removeStamina(3);
  }
  player.removeLuck(1);
  next();
  page_370(player);
}
void page_396(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout
        << "\n\nYou draw your sword and stand to face the pack of dogs. They "
           "come into view in a cloud of dust; galloping behind them is a "
           "masked rider wearing a long flowing cloak and riding a white "
           "stallion. He blows a horn and the pack of dogs comes to a sudden "
           "halt in front of you. There ar efour of them and you see that "
           "they "
           "are hunting dogs. The stallion stand motionless behind them with "
           "steam blowing from its nostrils in two long jets. The masked man "
           "looks at you without speaking. Will you:\n1. Start a "
           "conversation "
           "with him?\n2. Attack the dog nearest to you?\n3. View "
           "Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_364(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_96(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_397(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYou continue your walk along the valley floor, passing a "
                 "junction in the path which leads south to the hills. You "
                 "soon arrive at another junction. Again one of the branches "
                 "leads south to the hills.\n1. If you wish to head north.\n2. "
                 "If you wish to carry on east.\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_163(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_393(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_398(Player &player) {
  int pick = 0; // Declare pick outside the loop to persist between iterations
  do {
    std::cout << "\n\nYou reach the end of the tunnel and are about to step "
                 "out on to the ladder on the wall of the well when you hear "
                 "footsteps above you. Sombody is coming down the ladder.\n1. "
                 "If you wish to reach out in an attempt to grab hold of the "
                 "first leg that comes into view\n2. If you would rather wait "
                 "for the visitor to enter the tunnel\n3. View Inventory\n";

    pick = choice();

    switch (pick) {
    case 1:
      page_320(player);
      return; // Exit the loop and function after making a choice
    case 2:
      page_193(player);
      return; // Exit the loop and function after making a choice
    case 3:
      viewInventory(player);
      break; // Go back to the loop to allow for another choice
    default:
      std::cout << "\nInvalid choice. Please try again.\n";
      break;
    }
  } while (pick != 1 && pick != 2); // Loop until player picks WEST or EAST
}
void page_399(Player &player) {
  std::cout
      << "\n\nYou charge at Yaztromo but only reach the first stair when he "
         "lifts his right arm and nonchalantly mumbles a few words. Time "
         "seems "
         "to stand still amid bright flashes, and your body feels like a "
         "bubbling liquid inside. When the turmoil subsides, you know "
         "something terrible happened. The stone stair feels cold on your "
         "body "
         "and you realize the problems of a life as a frog! Yaztromo bends "
         "down and picks you up, saying with a booming voice:\n\n\"Well, "
         "foolish warrior, enjoy your new life!\"With that, he lets out a "
         "deafening laugh and nearly drop you. Then she shuffles to the oak "
         "door and, opening it, throws you into the tall grasses "
         "outside.\n\nYour adventure ends here.\n";
}
void page_400(Player &player) {
  std::cout
      << "\n\nYou walk up to the old dwarfs and ask them to take you to "
         "Gillibran. They eye you suspiciously but agree to do so, "
         "commenting "
         "on your wounds and torn clothing. \"You got those in Darkwood "
         "Forest "
         "I presume,\" say one of the dwarfs, pointing at various gashes on "
         "your body with his long clay pipe. \"Some people never learn.  "
         "Adventurers are all the same. I can't see the sense in it "
         "myself\"\n\n"
         "You walk through the village behind the two dwarfs and are aware "
         "of "
         "many dwarfish folk watching you. They begin to follow you and a "
         "procession builds up behind. There are lots of mutterings and "
         "whispers amongst the crowd of dwarfs and expectant looks show on "
         "their faces. Soon you arrive at the foot of stone steps leading up "
         "to a stone building. Outside the building on an ornate wooden "
         "throne "
         "sits a small old man with a long beard. He is wearing a crown but "
         "looks miserable and holds his head in his hands. You run up the "
         "steps, taking the hammer head and handle from your backpack. At "
         "the "
         "sight of them the old dwarf's eyes light up and he jumps to his "
         "feet. Taking them eagerly from you he starts to shout \"My hammer! "
         "My hammer! We are saved. Now, my people, we are ready to fight the "
         "trolls.\"\n\n The whole crowd erupts into cheering, waving their "
         "axes and swords in the air. You tell Gillibran of Bigleg's "
         "misfortune and why you decided to continue his quest, and of all "
         "the "
         "monsters you have encountered on your way. Gillibran listens and "
         "frowns at the news of Bigleg his faithful servant. Then he opens a "
         "drawer in the base of the throne and reaches into it, pulling out "
         "a "
         "small silver box and a golden winged helmet, and hands them to "
         "you. "
         "The helmet is worth hundreds of GOld Pieces and you proudly place "
         "it "
         "on your head. A great roar of approval comes fromt he crowd. You  "
         "open the silver box and find dozens of jewels and gems. You put "
         "these in your backpack and wave to the happy dwarfs of "
         "Stonebridge. "
         "You quest is over and you are now wealthy beyond your wildest "
         "dreams.\n";
  exit(0);
}
int main() {

  Player player;

  intro(player);
  background();

  page_1(player);

  return 0;
}

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
};
void next();
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
void page_388(Player &player);
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
  //       << std::endl; // Assuming player.inventory is a list of strings/items
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
         "expertis; higher is better!\n\nSTAMINA score reflects your general "
         "constitution, your will to survive, your determiniation and overall "
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
  next();
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
  next();
  std::cout
      << "\n\n---EQUIPMENT AND POTIONS---\nYou will start your "
         "adventure with a bare minimum of equipment, but you may find "
         "or buy other items during your travels, You are armed with a "
         "sword and are dressed in leather armour. You have a backpack "
         "to hold your Provisions and any treasures you may come across.\nIn "
         "addition, you may take one bottle of a magical potion which will aid "
         "you on your quest. You may choose to take only one bottle of any of "
         "the "
         "following:\n*********************************************************"
         "***********************\n\t1. A Potion "
         "of Skill - restores "
         "SKILL points.\n\t2. A Potion "
         "of Strength - restores STAMINA points\n\t3. A Potion of Fortune - "
         "restores LUCK points and adds 1 to Initial "
         "LUCK\n***************************************************************"
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
    break;
  case 2:
    page_54(player);
    break;
  }
}

void page_2(Player &player) {}
void page_3(Player &player) {}
void page_4(Player &player) {}
void page_5(Player &player) {}
void page_6(Player &player) {}
void page_7(Player &player) {}
void page_8(Player &player) {}
void page_9(Player &player) {}
void page_10(Player &player) {}
void page_11(Player &player) {}
void page_12(Player &player) {}
void page_13(Player &player) {}
void page_14(Player &player) {}
void page_15(Player &player) {}
void page_16(Player &player) {}
void page_17(Player &player) {}
void page_18(Player &player) {}
void page_19(Player &player) {}
void page_20(Player &player) {}
void page_21(Player &player) {}
void page_22(Player &player) {}
void page_23(Player &player) {}
void page_24(Player &player) {}
void page_25(Player &player) {}
void page_26(Player &player) {}
void page_27(Player &player) {}
void page_28(Player &player) {}
void page_29(Player &player) {}
void page_30(Player &player) {}
void page_31(Player &player) {}
void page_32(Player &player) {}
void page_33(Player &player) {}
void page_34(Player &player) {}
void page_35(Player &player) {}
void page_36(Player &player) {}
void page_37(Player &player) {}
void page_38(Player &player) {}
void page_39(Player &player) {}
void page_40(Player &player) {}
void page_41(Player &player) {}
void page_42(Player &player) {}
void page_43(Player &player) {}
void page_44(Player &player) {}
void page_45(Player &player) {}
void page_46(Player &player) {}
void page_47(Player &player) {}
void page_48(Player &player) {}
void page_49(Player &player) {}
void page_50(Player &player) {}
void page_51(Player &player) {}
void page_52(Player &player) {}
void page_53(Player &player) {}
void page_54(Player &player) {
  std::cout << "\n\nAs you draw your sword, Yaztromo turns round and casually "
               "advises you not to be foolish as his magic is great.\n\nDo you "
               "still wish to attack him?";
  std::cout << "\n1. Attack Yaztromo\n2. Continue following him.\n";

  int pick = choice();
  switch (pick) {
  case 1:
    page_399(player);
    break;
  case 2:
    page_261(player);
    break;
  }
}
void page_55(Player &player) {}
void page_56(Player &player) {}
void page_57(Player &player) {}
void page_58(Player &player) {}
void page_59(Player &player) {}
void page_60(Player &player) {}
void page_61(Player &player) {}
void page_62(Player &player) {}
void page_63(Player &player) {}
void page_64(Player &player) {}
void page_65(Player &player) {}
void page_66(Player &player) {}
void page_67(Player &player) {}
void page_68(Player &player) {}
void page_69(Player &player) {}
void page_70(Player &player) {}
void page_71(Player &player) {}
void page_72(Player &player) {}
void page_73(Player &player) {}
void page_74(Player &player) {}
void page_75(Player &player) {}
void page_76(Player &player) {}
void page_77(Player &player) {}
void page_78(Player &player) {}
void page_79(Player &player) {}
void page_80(Player &player) {}
void page_81(Player &player) {}
void page_82(Player &player) {}
void page_83(Player &player) {}
void page_84(Player &player) {}
void page_85(Player &player) {}
void page_86(Player &player) {}
void page_87(Player &player) {}
void page_88(Player &player) {}
void page_89(Player &player) {}
void page_90(Player &player) {}
void page_91(Player &player) {}
void page_92(Player &player) {}
void page_93(Player &player) {}
void page_94(Player &player) {}
void page_95(Player &player) {}
void page_96(Player &player) {}
void page_97(Player &player) {}
void page_98(Player &player) {}
void page_99(Player &player) {}
void page_100(Player &player) {}
void page_101(Player &player) {}
void page_102(Player &player) {}
void page_103(Player &player) {}
void page_104(Player &player) {}
void page_105(Player &player) {}
void page_106(Player &player) {}
void page_107(Player &player) {}
void page_108(Player &player) {}
void page_109(Player &player) {}
void page_110(Player &player) {}
void page_111(Player &player) {}
void page_112(Player &player) {}
void page_113(Player &player) {}
void page_114(Player &player) {}
void page_115(Player &player) {}
void page_116(Player &player) {}
void page_117(Player &player) {}
void page_118(Player &player) {}
void page_119(Player &player) {}
void page_120(Player &player) {}
void page_121(Player &player) {}
void page_122(Player &player) {}
void page_123(Player &player) {}
void page_124(Player &player) {}
void page_125(Player &player) {}
void page_126(Player &player) {}
void page_127(Player &player) {}
void page_128(Player &player) {}
void page_129(Player &player) {}
void page_130(Player &player) {}
void page_131(Player &player) {}
void page_132(Player &player) {}
void page_133(Player &player) {}
void page_134(Player &player) {}
void page_135(Player &player) {}
void page_136(Player &player) {}
void page_137(Player &player) {}
void page_138(Player &player) {}
void page_139(Player &player) {}
void page_140(Player &player) {}
void page_141(Player &player) {}
void page_142(Player &player) {}
void page_143(Player &player) {}
void page_144(Player &player) {}
void page_145(Player &player) {}
void page_146(Player &player) {}
void page_147(Player &player) {}
void page_148(Player &player) {}
void page_149(Player &player) {}
void page_150(Player &player) {}
void page_151(Player &player) {}
void page_152(Player &player) {}
void page_153(Player &player) {}
void page_154(Player &player) {}
void page_155(Player &player) {}
void page_156(Player &player) {}
void page_157(Player &player) {}
void page_158(Player &player) {}
void page_159(Player &player) {}
void page_160(Player &player) {}
void page_161(Player &player) {}
void page_162(Player &player) {}
void page_163(Player &player) {}
void page_164(Player &player) {}
void page_165(Player &player) {}
void page_166(Player &player) {}
void page_167(Player &player) {}
void page_168(Player &player) {}
void page_169(Player &player) {}
void page_170(Player &player) {}
void page_171(Player &player) {}
void page_172(Player &player) {}
void page_173(Player &player) {}
void page_174(Player &player) {}
void page_175(Player &player) {}
void page_176(Player &player) {}
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
           "a huge old tree.";

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
void page_178(Player &player) {}
void page_179(Player &player) {}
void page_180(Player &player) {}
void page_181(Player &player) {}
void page_182(Player &player) {}
void page_183(Player &player) {}
void page_184(Player &player) {}
void page_185(Player &player) {}
void page_186(Player &player) {}
void page_187(Player &player) {}
void page_188(Player &player) {}
void page_189(Player &player) {}
void page_190(Player &player) {}
void page_191(Player &player) {}
void page_192(Player &player) {}
void page_193(Player &player) {}
void page_194(Player &player) {}
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
void page_205(Player &player) {}
void page_206(Player &player) {}
void page_207(Player &player) {}
void page_208(Player &player) {}
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
void page_220(Player &player) {}
void page_221(Player &player) {}
void page_222(Player &player) {}
void page_223(Player &player) {}
void page_224(Player &player) {}
void page_225(Player &player) {}
void page_226(Player &player) {}
void page_227(Player &player) {}
void page_228(Player &player) {}
void page_229(Player &player) {}
void page_230(Player &player) {}
void page_231(Player &player) {}
void page_232(Player &player) {}
void page_233(Player &player) {}
void page_234(Player &player) {}
void page_235(Player &player) {}
void page_236(Player &player) {}
void page_237(Player &player) {}
void page_238(Player &player) {}
void page_239(Player &player) {}
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
void page_253(Player &player) {}
void page_254(Player &player) {}
void page_255(Player &player) {}
void page_256(Player &player) {}
void page_257(Player &player) {}
void page_258(Player &player) {}
void page_259(Player &player) {}
void page_260(Player &player) {}
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
         "the letter G inscrubed on them. Your task is not easy. Good "
         "luck.\"\n\nYou thank Yaztromo and leave the room by the spiral "
         "staircase.";

  page_177(player);
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
void page_271(Player &player) {}
void page_272(Player &player) {}
void page_273(Player &player) {}
void page_274(Player &player) {}
void page_275(Player &player) {}
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
void page_289(Player &player) {}
void page_290(Player &player) {}
void page_291(Player &player) {}
void page_292(Player &player) {}
void page_293(Player &player) {}
void page_294(Player &player) {}
void page_295(Player &player) {}
void page_296(Player &player) {}
void page_297(Player &player) {}
void page_298(Player &player) {}
void page_299(Player &player) {}
void page_300(Player &player) {}
void page_301(Player &player) {}
void page_302(Player &player) {}
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
void page_316(Player &player) {}
void page_317(Player &player) {}
void page_318(Player &player) {}
void page_319(Player &player) {}
void page_320(Player &player) {}
void page_321(Player &player) {}
void page_322(Player &player) {}
void page_323(Player &player) {}
void page_324(Player &player) {}
void page_325(Player &player) {}
void page_326(Player &player) {}
void page_327(Player &player) {}
void page_328(Player &player) {}
void page_329(Player &player) {}
void page_330(Player &player) {}
void page_331(Player &player) {}
void page_332(Player &player) {}
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
void page_344(Player &player) {}
void page_345(Player &player) {}
void page_346(Player &player) {}
void page_347(Player &player) {}
void page_348(Player &player) {}
void page_349(Player &player) {}
void page_350(Player &player) {}
void page_351(Player &player) {}
void page_352(Player &player) {}
void page_353(Player &player) {}
void page_354(Player &player) {}
void page_355(Player &player) {}
void page_356(Player &player) {}
void page_357(Player &player) {}
void page_358(Player &player) {}
void page_359(Player &player) {}
void page_360(Player &player) {}
void page_361(Player &player) {}
void page_362(Player &player) {}
void page_363(Player &player) {}
void page_364(Player &player) {}
void page_365(Player &player) {}
void page_366(Player &player) {}
void page_367(Player &player) {}
void page_368(Player &player) {}
void page_369(Player &player) {}
void page_370(Player &player) {}
void page_371(Player &player) {}
void page_372(Player &player) {}
void page_373(Player &player) {}
void page_374(Player &player) {}
void page_375(Player &player) {}
void page_376(Player &player) {}
void page_377(Player &player) {}
void page_378(Player &player) {}
void page_379(Player &player) {}
void page_380(Player &player) {}
void page_381(Player &player) {}
void page_382(Player &player) {}
void page_383(Player &player) {}
void page_384(Player &player) {}
void page_385(Player &player) {}
void page_386(Player &player) {}
void page_387(Player &player) {}
void page_388(Player &player) {}
void page_389(Player &player) {}
void page_390(Player &player) {}
void page_391(Player &player) {}
void page_392(Player &player) {}
void page_393(Player &player) {}
void page_394(Player &player) {}
void page_395(Player &player) {}
void page_396(Player &player) {}
void page_397(Player &player) {}
void page_398(Player &player) {}
void page_399(Player &player) {
  std::cout
      << "\n\nYou charge at Yaztromo but only reach the first stair when he "
         "lifts his right arm and nonchalantly mumbles a few words. Time seems "
         "to stand still amid bright flashes, and your body feels like a "
         "bubbling liquid inside. When the turmoil subsides, you know "
         "something terrible happened. The stone stair feels cold on your body "
         "and you realize the problems of a life as a frog! Yaztromo bends "
         "down and picks you up, saying with a booming voice:\n\n\"Well, "
         "foolish warrior, enjoy your new life!\"With that, he lets out a "
         "deafening laugh and nearly drop you. Then she shuffles to the oak "
         "door and, opening it, throws you into the tall grasses "
         "outside.\n\nYour adventure ends here.";
}
void page_400(Player &player) {}
int main() {

  Player player;

  intro(player);
  background();

  page_1(player);

  return 0;
}

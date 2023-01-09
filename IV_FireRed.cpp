
#include <cmath>
#include <iostream>
#include "Header1.h"


int main()
{
 
    //Variables
    //============================================================
    
    int lvl = 0;
    int result_hp=0, result_atk=0, result_def=0, result_sp_atk=0, result_sp_def=0, result_spd=0;
    int iv_hp, iv_atk, iv_def, iv_sp_atk, iv_sp_def, iv_spd;
    
    std::string nature = "";
    int n_selector = 0;
   
    int National_num;
  
    
    // POKEMON BASE STATS DATABASE
    //===========================================================
    Base_stats Bulbasaur(45, 49, 49, 65, 65, 45); // 
    Base_stats Pidgey(40, 45, 40, 35, 35, 56);    //
    Base_stats Caterpie(45, 30, 35, 20, 20, 45);  //
    Base_stats Metapod(50, 20, 55, 25, 25, 30);   //
    Base_stats Weedle(40, 35, 30, 20, 20, 50);   //
    Base_stats Kakuna(45, 25, 50, 25, 25, 35);  //
    Base_stats Rattata(30, 56, 35, 25, 35, 72);    //
    Base_stats Spearow(40, 60, 30, 31, 31, 70);   //
    Base_stats Pikachu(35, 55, 40, 50, 50, 90);
    Base_stats Sandshrew(50, 75, 85, 20, 30, 40);
    Base_stats Nidoran_female(55, 47, 52, 40, 40, 41);
    Base_stats Nidoran_male(46, 57, 40, 40, 40, 50);
    Base_stats Clefairy(70, 45, 48, 60, 65, 35);
    Base_stats Vulpix(38, 41, 40, 50, 65, 65);
    Base_stats Jigglypuff(115, 45, 20, 45, 25, 20);
    Base_stats Paras(35, 70, 55, 45, 55, 25);
    Base_stats Venonat(60, 55, 50, 40, 55, 45);
    Base_stats Diglett(10, 55, 25, 35, 45, 95);
    Base_stats Meowth(40, 45, 35, 40, 40, 90);
    Base_stats Psyduck(50, 52, 48, 65, 50, 55);
    Base_stats Mankey(40, 80, 35, 35, 45, 70);  //
    Base_stats Poliwag(40, 50, 40, 40, 40, 90);
    Base_stats Abra(25, 20, 15, 105, 55, 90);
    Base_stats Machop(70, 80, 50, 35, 35, 35);
    Base_stats Bellsprout(50, 75, 35, 70, 30, 40);
    Base_stats Tentacool(40, 40, 35, 50, 100, 70);
    Base_stats Ponyta(50, 85, 55, 65, 65, 90);
    Base_stats Slowpoke(90, 65, 65, 40, 40, 15);
    Base_stats Magnemite(25, 35, 70, 95, 55, 45);
    Base_stats Grimer(80, 80, 50, 40, 50, 25);
    Base_stats Shellder(30, 65, 100, 45, 25, 40);
    Base_stats Gastly(30, 35, 30, 100, 35, 80);
    Base_stats Haunter(45, 50, 45, 115, 55, 95);
    Base_stats Drowzee(60, 48, 45, 43, 90, 42);
    Base_stats Krabby(30, 105, 90, 25, 25, 50);
    Base_stats Voltorb(40, 30, 50, 55, 55, 100);
    Base_stats Electrode(60, 50, 70, 80, 80, 150);
    Base_stats Exeggcute(60, 40, 80, 60, 45, 40);
    Base_stats Cubone(50, 50, 95, 40, 50, 35);
    Base_stats Hitmonlee(50, 120, 53, 35, 110, 87);
    Base_stats Hitmonchan(50, 105, 79, 35, 110, 76);
    Base_stats Koffing(40, 65, 95, 60, 45, 35);
    Base_stats Rhyhorn(80, 85, 95, 30, 30, 25);
    Base_stats Tangela(65, 55, 115, 100, 40, 60);
    Base_stats Kangaskan(105, 95, 80, 40, 80, 90);
    Base_stats Staryu(30, 45, 55, 70, 55, 85);
    Base_stats Magmar(65, 95, 57, 100, 85, 93);
    Base_stats Pinsir(65, 125, 100, 55, 70, 85);
    Base_stats Tauros(75, 100, 95, 40, 70, 110);
    Base_stats Magikarp(20, 10, 55, 15, 20, 80);
    Base_stats Lapras(130, 85, 80, 85, 95, 60);
    Base_stats Ditto(48, 48, 48, 48, 48, 48);
    Base_stats Eevee(55, 55, 50, 45, 65, 55);
    Base_stats Kabuto(30, 80, 90, 55, 45, 55);
    Base_stats Aerodactyl(80, 105, 65, 60, 75, 130);
    Base_stats Snorlax(160, 110, 65, 65, 110, 30);
    Base_stats Dratini(41, 64, 45, 50, 50, 50);

   
    
    //Programs Start Point 
    //=========================================================
  
    









    




    Bulbasaur.stat_print();

    std::cout << "\nenter level\n";
    std::cin >> lvl;
    
   
    
    std::cout << "\nEnter HP IV\n";
    std::cin >> iv_hp;

    std::cout << "\nEnter ATK IV\n";
    std::cin >> iv_atk;

    std::cout << "\nEnter DEF IV\n";
    std::cin >> iv_def;

    std::cout << "\nEnter SP_ATK IV\n";
    std::cin >> iv_sp_atk;

    std::cout << "\nEnter SP_DEF IV\n";
    std::cin >> iv_sp_def;

    std::cout << "\nEnter SPD IV\n";
    std::cin >> iv_spd;

  
    result_hp = HP_base(Bulbasaur.HP, iv_hp, lvl, result_hp);
    result_atk = stat_base(Bulbasaur.ATK, iv_atk, lvl, result_atk);
    result_def = stat_base(Bulbasaur.DEF, iv_def, lvl, result_def);
    result_sp_atk = stat_base(Bulbasaur.SP_ATK, iv_sp_atk, lvl, result_sp_atk);
    result_sp_def = stat_base(Bulbasaur.SP_DEF, iv_sp_def, lvl, result_sp_def);
    result_spd = stat_base(Bulbasaur.SPD, iv_spd, lvl, result_spd);
   
   
    n_selector = N_Selector(n_selector);
    nature = Nature(nature, n_selector);
    

    
    
    stat_output(result_hp, result_atk, result_def, result_sp_atk, result_sp_def, result_spd);
    
    
    
    
  
    
   
    
    
    
    
    
    
   
  


   
}


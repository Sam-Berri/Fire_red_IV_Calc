#pragma once




class Base_stats {

    

public:

    int HP, ATK, DEF, SP_ATK, SP_DEF, SPD;

    //constructor
    Base_stats(int hp, int atk, int def, int sp_atk, int sp_def, int spd) {

        HP = hp;
        ATK = atk;
        DEF = def;
        SP_ATK = sp_atk;
        SP_DEF = sp_def;
        SPD = spd;
    }



    void stat_print() {

        std::cout << HP << "\n";
        std::cout << ATK << "\n";
        std::cout << DEF << "\n";
        std::cout << SP_ATK << "\n";
        std::cout << SP_DEF << "\n";
        std::cout << SPD << "\n";
    }




};









int HP_base(int hp, int iv, int lvl, int result);
int stat_base(int stat, int iv, int lvl, int result);
int stat_positive_nature(int stat, int iv, int lvl, int result);
int stat_negative_nature(int stat, int iv, int lvl, int result);


int N_Selector(int selector);

std::string Nature(std::string nature,int selector);






void stat_output(int res1, int res2, int res3, int res4, int res5, int res6);
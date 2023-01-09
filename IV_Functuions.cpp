#include <cmath>
#include <iostream>

//stat determiners 
//====================================================
int HP_base(int hp,int iv,int lvl, int result) {

	result = floor((2 * hp + iv) * lvl / 100 + lvl + 10);
	return result;
}


int stat_base(int stat, int iv, int lvl, int result) {

	result = floor((2 * stat + iv) * lvl / 100 + lvl + 5);
	return result;
}

int stat_positive_nature(int stat, int iv, int lvl, int result) {

	result = floor((2 * stat + iv) * lvl / 100 + lvl + 5) * 1.1;
	return result;
}

int stat_negative_nature(int stat, int iv, int lvl, int result) {

	result = floor((2 * stat + iv) * lvl / 100 + lvl + 5) * 0.9;
	return result;
}

//=====================================================================


int N_Selector(int selector) {

	std::cout << "choose nature by entering corrisponding number \n\n";


	std::cout << "1.Adamant\n"; 
		std::cout << "2.Bashful\n"; 
		std::cout << "3.Bold\n";	
		std::cout << "4.Brave\n";	
		std::cout << "5.Calm\n"; 
		std::cout << "6.Careful\n";	
		std::cout << "7.Docile\n";	
		std::cout << "8.Gentle\n";	
		std::cout << "9.Hardy\n";	
		std::cout << "10.Hasty\n";	
		std::cout << "11.Impish\n";	
		std::cout << "12.Jolly\n";	
		std::cout << "13.Lax\n";	
		std::cout << "14.Lonely\n"; 
		std::cout << "15.Mild\n";	
		std::cout << "16.Modest\n"; 
		std::cout << "17.Naive\n";	
		std::cout << "18.Naughty\n";	
		std::cout << "19.Quiet\n"; 
		std::cout << "20.Quirky\n"; 
		std::cout << "21.Rash\n"; 
		std::cout << "22.Relaxed\n";	
		std::cout << "23.Sassy\n";	
		std::cout << "24.Serious\n";	
		std::cout << "25.Timid\n\n";	

		std::cin >> selector;
	return selector;
}


std::string Nature(std::string nature, int selector) {

	

	
	
	if (selector == 1) {
		nature = "Adamant";

	}

	else if (selector == 2) {
		nature = "Bashful";

	}

	else if (selector == 3) {
		nature = "Bold";

	}

	else if (selector == 4) {
		nature = "Brave";

	}

	else if (selector == 5) {
		nature = "Calm";

	}

	else if (selector == 6) {
		nature = "Careful";

	}

	else if (selector == 7) {
		nature = "Docile";

	}

	else if (selector == 8) {
		nature = "Gentle";

	}

	else if (selector == 9) {
		nature = "Hardy";

	}

	else if (selector == 10) {
		nature = "Hasty";

	}

	else if (selector == 11) {
		nature = "Impish";

	}

	else if (selector == 12) {
		nature = "Jolly";

	}

	else if (selector == 13) {
		nature = "Lax";

	}

	else if (selector == 14) {
		nature = "Lonely";

	}
	else if (selector == 15) {
		nature = "Mild";

	}

	else if (selector == 16) {
		nature = "Modest";


	}

	else if (selector == 17) {
		nature = "Naive";

	}

	else if (selector == 18) {
		nature = "Naughty";

	}

	else if (selector == 19) {

		nature = "Quiet";

	}

	else if (selector == 20) {
		nature = "Quirky";

	}

	else if (selector == 21) {
		nature = "Rash";

	}

	else if (selector == 22) {
		nature = "Relaxed";

	}

	else if (selector == 23) {
		nature = "Sassy";

	}

	else if (selector == 24) {
	nature = "Serious";
}

	else if (selector == 25) {
	nature = "Timid";
}

	else {
		std::cout << "Error - corrisponding number was not selected";
	}

	return nature;

	std::cout << "Error";
}


void stat_output(int res1, int res2, int res3, int res4, int res5, int res6) {
	std::cout << "\nHP =" << res1 << "\n";
	std::cout << "\nATK =" << res2 << "\n";
	std::cout << "\nDEF =" << res3 << "\n";
	std::cout << "\nSP_ATK =" << res4 << "\n";
	std::cout << "\nSP_DEF =" << res5 << "\n";
	std::cout << "\nSPD =" << res6 << "\n";
}










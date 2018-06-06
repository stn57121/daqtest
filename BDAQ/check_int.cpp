#include <iostream>
#include <cctype>
#include <algorithm>
#include "check_int.h"

bool check_int(std::string str) {
	if (std::all_of(str.cbegin(), str.cend(), isdigit)) {
		return true;
	}
	else {
		return false;
	}
	//try {
	//	int n = std::stoi(str);
	//}
	//catch(...){
	//	return false;
	//}
	return true;
}
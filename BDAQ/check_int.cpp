#include <iostream>
#include <cctype>
#include "check_int.h"

bool check_int(std::string str) {
	std::string::iterator sit;
	for (sit = str.begin(); sit != str.end(); ++sit) {
		if (!isdigit(*sit)) {
			return false;
		}
	}
	return true;
	//if (std::all_of(str.begin(), str.end(), isdigit)) {
	//	return true;
	//}
	//else {
	//	return false;
	//}
	//try {
	//	int n = std::stoi(str);
	//}
	//catch(...){
	//	return false;
	//}
	return true;
}
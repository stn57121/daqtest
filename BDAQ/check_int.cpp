#include <iostream>
#include "check_int.h"

bool check_int(std::string str) {
	try {
		int n = std::stoi(str);
	}
	catch(...){
		return false;
	}
	return true;
}
#include "NodeType.h"

std::string NodeType(std::string str) {
	if (str.find("hvstate") != std::string::npos) {
		return "HVState";
	}
	else if (str.find("rcstate") != std::string::npos) {
		return "RCState";
	}
	else {
		return "ONOFF";
	}
}
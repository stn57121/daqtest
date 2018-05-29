#include <string>
#include <sstream>
#include <vector>
#include "DeleteHeadSpace.h"

std::vector<std::string> SplitLine(std::string line) {
	std::vector<std::string> v;
	std::string str;
	DeleteHeadSpace(line);
	if (line == "") {
		return v;
	}
	std::stringstream ss(line);
	while (!ss.eof()) {
		ss >> str;
		v.push_back(str);
	}
	return v;
}
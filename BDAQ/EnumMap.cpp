#include <string>
#include <map>
#include "EnumMap.h"

void EnumMap::addNode(std::string str, int id) {
	Label_to_Id[str] = id;
	Id_to_Label[id] = str;
}

int EnumMap::getId(std::string str) {
	if (Label_to_Id.count(str)) {
		return Label_to_Id.at(str);
	}
	else {
		return -1;
	}
}

std::string EnumMap::getLabel(int id) {
	if (Id_to_Label.count(id)) {
		return Id_to_Label.at(id);
	}
	else {
		return "NULL";
	}
}
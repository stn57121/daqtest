#ifndef INC_EnumMap
#define INC_EnumMap

#include <map>
#include <string>

class EnumMap {
private:
	std::map<std::string, int> Label_to_Id;
	std::map<int, std::string> Id_to_Label;

public:
	EnumMap() {};
	~EnumMap() {};

	void addNode(std::string str, int id);
	int getId(std::string str);
	std::string getLabel(int id);
};

#endif
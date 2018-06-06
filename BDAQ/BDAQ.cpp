#include "SplitLine.h"
#include "MakeEnumMap.h"
#include "NodeType.h"
#include "Node.h"
#include "check_int.h"
#include "read_node.h"
#include <iomanip>
#include <algorithm>

int main() {
	std::cout << "Hello, World." << std::endl;

	std::string filelist = "./filelist.txt";
	std::ifstream ifs(filelist.c_str());
	std::ofstream ofs;
	std::string line;

	while (std::getline(ifs, line)) {
		std::string path = line;
		std::cout << "Log File Path: " << path << std::endl;
		std::map<std::string, Node> nodes = read_node(path);
		int date, time;
		std::stringstream ss(path);
		ss.ignore(4);
		ss >> date;
		ss.ignore(1);
		ss >> time;
		std::string test = "0";
		std::cout << "Num of Nodes : " << nodes.size() << std::endl;
		for (std::map<std::string,Node>::iterator itr = nodes.begin(); itr != nodes.end(); ++itr) {
			//std::cout << itr->first << "," << itr->second.getname() << "," << itr->second.getstate() << "," << itr->second.getid() << "," << itr->second.gettype() << std::endl;
			std::string name = itr->second.getname();
			std::string state = itr->second.getstate();
			int id = itr->second.getid();
			std::string type = itr->second.gettype();
			//std::cout << itr->first << "," << name << "," << state << "," << id << "," << type << std::endl;
			std::replace(name.begin(), name.end(), ':', '-');
			ofs.open(("./output/" + name + ".txt").c_str(), std::ios::app);
			ofs << date << time << " " << id << std::endl;
			ofs.close();
			//std::cout << typeid(test).name() << std::endl;
		}
	}

	//std::map<std::string, Node> nodes = read_node(path);
	//std::cout << "Num of Nodes : " << nodes.size() << std::endl;
	//for (auto itr = nodes.begin(); itr != nodes.end(); ++itr) {
	//	std::cout << itr->first << "," << itr->second.getname() << "," << itr->second.getstate() << "," << itr->second.getid() << "," << itr->second.gettype() << std::endl;
	//}

    return 0;
}


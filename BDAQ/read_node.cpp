#include "read_node.h"
#include "SplitLine.h"
#include "MakeEnumMap.h"
#include "NodeType.h"
#include "Node.h"
#include "check_int.h"


std::map<std::string, Node> read_node(std::string path) {

	std::ifstream ifs(path);
	std::map<std::string, Node> nodes;
	if (ifs.fail()) {
		std::cerr << "failed to open file : " << path << std::endl;
		return nodes;
	}

	std::string line;
	while (std::getline(ifs, line)) {
		std::vector<std::string> v = SplitLine(line);
		if (v.size() == 0) {
			continue;
		}
		//for (unsigned int i = 0; i < v.size(); i++) {
		//	std::cout << "v[" << i << "] = " << v[i] << std::endl;
		//}
		Node HVNode(v[0], NodeType(v[0]));
		if (check_int(v[1])) {
			HVNode.setid(std::stoi(v[1]));
		}
		else {
			HVNode.setstate(v[1]);
		}
		nodes.insert(std::make_pair(v[0], HVNode));
	}

	return nodes;
}
#ifndef INC_Node
#define INC_Node

#include <string>
#include <vector>
#include "EnumMap.h"

class Node {
private:
	std::string m_name;
	std::string m_state;
	int	m_id;
	EnumMap m_StateMap;
	std::string m_type;

public:
	Node(std::string name, std::string type);
	~Node() {};
	bool operator<(const Node& a);
	bool operator<=(const Node& a);
	bool operator>(const Node& a);
	bool operator>=(const Node& a);

	void setstate(std::string state);
	void setid(int id);
	std::string getname() { return m_name; };
	std::string getstate() { return m_state; };
	int getid() { return m_id; };
	std::string gettype() { return m_type; };
};

#endif
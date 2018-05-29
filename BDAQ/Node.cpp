#include "Node.h"
#include "MakeEnumMap.h"

Node::Node(std::string name, std::string type) :m_name(name), m_type(type) {
	m_StateMap = MakeEnumMap(type);
	m_state = "NULL";
	m_id = -1;
}

void Node::setstate(std::string state) {
	m_state = state;
	m_id = m_StateMap.getId(state);
}

void Node::setid(int id) {
	m_id = id;
	m_state = m_StateMap.getLabel(id);
}

bool Node::operator<(const Node& a) {
	return m_name < a.m_name;
}

bool Node::operator<=(const Node& a) {
	return m_name <= a.m_name;
}

bool Node::operator>(const Node& a) {
	return m_name > a.m_name;
}

bool Node::operator>=(const Node& a) {
	return m_name >= a.m_name;
}
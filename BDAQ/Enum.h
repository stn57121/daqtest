#ifndef INC_Enum
#define INC_Enum

#include <string>

class Enum {
private:
	int m_id;
	std::string m_label;

public:
	const static Enum UNKNOWN;
	Enum(int id, std::string label) :m_id(id), m_label(label) {}
	Enum() :m_id(UNKNOWN.getId()), m_label(UNKNOWN.getLabel()) {}
	~Enum() {}
	const int getId() { return m_id }
	const std::string getLabel() { return m_label }
	void setId(int id) {}
	void setLabel(std::string label) {}
}

#endif
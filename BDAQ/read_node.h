#ifndef INC_read_node
#define INC_read_node

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include "Node.h"

std::map<std::string, Node> read_node(std::string path);

#endif
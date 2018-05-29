#include <string>

void DeleteHeadSpace(std::string &buf) {
	while (buf.find_first_of(" \t") == 0) {
		buf.erase(buf.begin());
		if (buf.empty()) {
			break;
		}
	}
}
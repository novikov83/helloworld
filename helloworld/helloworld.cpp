#include <iostream>
#include "version.h"

int main(int, char**)
{
	std::cout << "build " << GetVersion() << std::endl;
	std::cout << "Hello, World!" << std::endl;

	return 0;
}

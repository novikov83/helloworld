#include <iostream>
#include "helloworld_lib.h"

int main(int, char**)
{
	std::cout << "Version: " << GetVersion() << std::endl;
	std::cout << "Hello, World!" << std::endl;

	return 0;
}

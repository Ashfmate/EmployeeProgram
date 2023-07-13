#include <iostream>
#include "Daddy.h"

int main()
{
	Daddy d{ "path.txt" };
	d.save("This string should be in a file");
	string load = d.load();
	std::cin.get();
}
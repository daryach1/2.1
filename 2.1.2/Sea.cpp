#include "Sea.h"
#include <iostream>

void Sea::print()
{
	std::cout << "Название: " << name << "\t";
	std::cout << "Глубина: " << deep << "\t";
	std::cout << "Соленость: " << salinity << "\t" << "\n";
}

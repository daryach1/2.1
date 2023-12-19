#include <iostream>
#include <fstream>
#include "../2.1.2/Sea.h"

int main()
{
	setlocale(LC_ALL, "ru");
	Sea sea;
	std::string parameter;
	std::ifstream file("input.txt");
		int i = 0;
		while (file >> parameter)
		{
			if (i == 0)
			{
				sea.name = parameter;
			}
			if (i == 1)
			{
				sea.deep = atof(parameter.c_str());
			}
			if (i == 2)
			{
				sea.salinity = atof(parameter.c_str());
			}
			i++;
			if (i == 3)
			{
				i = 0;
				sea.print();
			}
		}
}

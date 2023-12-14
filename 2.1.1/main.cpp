#include <string>;
#include <fstream>
#include <iostream>

struct Sea
{
	std::string name;
	double deep = 0;
	double salinity = 0;
};

int main()
{
    setlocale(LC_ALL, "ru");
    Sea sea;
	std::ifstream file("input.txt");
	std::string parameter;
	if (!file.is_open())
	{
		std::cerr << "Не удалось открыть файл." << std::endl;
	}
	int i = 0;
	while (file >> parameter)
	{
		if (i == 0)
		{
			sea.name = parameter;
			std::cout << "Название: " << sea.name << std::endl;
		}
		if (i == 1)
		{
			sea.deep = atof(parameter.c_str());
			std::cout << "Глубина: " << sea.deep << std::endl;
		}
		if (i == 2)
		{
			sea.salinity = atof(parameter.c_str());
			std::cout << "Соленость: " << sea.salinity << std::endl;
		}
		i++;
		if (i == 3)
		{
			i = 0;
			std::cout << std::endl;
		}
	}
}


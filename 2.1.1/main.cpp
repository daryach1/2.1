#include <string>;
#include <fstream>
#include <iostream>

struct Sea
{
	std::string name;
	double deep = 0;
	double salinity = 0;
};

void getSeas(std::ifstream& file, std::string& parameter, Sea& sea)
{
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

void checkFile(std::ifstream& file)
{
	if (!file.is_open())
	{
		std::cerr << "Не удалось открыть файл." << std::endl;
	}
}

int main()
{
    setlocale(LC_ALL, "ru");
    Sea sea;
	std::ifstream file("input.txt");
	checkFile(file);
	std::string parameter;
	getSeas(file, parameter, sea);
}


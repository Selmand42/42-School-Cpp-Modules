#include <iostream>
#include <string>
#include <fstream>

std::string ft_replace(std::string line, std::string search, std::string replace)
{
	size_t pos = line.find(search);

	while (pos != std::string::npos)
	{
		line.erase(pos, search.length());
		line.insert(pos, replace);
		pos = line.find(search, pos + replace.length());
	}
	return line;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments!!" << std::endl;
		return (0);
	}
	std::string line;

	std::ifstream input(argv[1]);
	if (!input.is_open())
	{
		std::cout << "File couldn't opened!" << std::endl;
		return (0);
	}

	std::ofstream output(std::string(argv[1]) +  ".replace");
	if (!output.is_open())
	{
		input.close();
		std::cout << "File couldn't opened!" << std::endl;
		return (0);
	}

	while (std::getline(input, line))
	{
		output << ft_replace(line, argv[2], argv[3]);
		if (!input.eof())
			output << std::endl;
	}
	input.close();
	output.close();
	return (0);
}

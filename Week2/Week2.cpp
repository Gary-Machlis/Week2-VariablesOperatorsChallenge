#include <iostream>
#include <string>

template<typename T>
T Sum(const T& num1, const T& num2, const T& num3)
{
	return num1 + num2 + num3;
}

template<typename T>
T Average(const T& num1, const T& num2, const T& num3)
{
	return (num1 + num2 + num3) / 3.0f;
}

int main()
{
	std::string num1, num2, num3;
	bool noFloat = true;
	std::cout << "Please input 3 numbers followed by enter for each number.\n";
	std::getline(std::cin, num1);
	std::getline(std::cin, num2);
	std::getline(std::cin, num3);

	if (num1.find('.') != std::string::npos || num2.find('.') != std::string::npos || num3.find('.') != std::string::npos)
		noFloat = false;

	if (noFloat)
	{
		std::cout << "The sum of these 3 numbers are: " << Sum(stoi(num1), stoi(num2), stoi(num3)) << std::endl;

		std::cout << "The average of these 3 numbers are: " << Average(stoi(num1), stoi(num2), stoi(num3)) << std::endl;
	}
	else
	{
		std::cout << "The sum of these 3 numbers are: " << Sum(stof(num1), stof(num2), stof(num3)) << std::endl;

		std::cout << "The average of these 3 numbers are: " << Average(stof(num1), stof(num2), stof(num3)) << std::endl;
	}

	return 0;
}
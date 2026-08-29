// Document: algExpression.cpp
// Date: 08/28/2026
// Author: Alberto Reategui

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

int main()
{
	// All of necessary variables to compute this program
	std::vector<std::string> strCoefficients;
	double sum = 0;
	// Creating a string to store the coefficients for an algebraic equation
	std::string s{};
	std::string token{};
	
	// Declaring and initializing the x-value
	int x = 0;
	
	// Prompting the user to enter the x-value (assumed to be an integer for now)
	std::cout << "Enter the x-value: ";
	std::cin >> x;
	
	// Prompting the user to enter the string of coefficients
	std::cout << "Enter the string of coefficients: "; 
	std::cin >> s;
	
	std::istringstream inputStr(s);
	
	while (std::getline(inputStr, token, ','))
	{
		if (!token.empty())
		{
			strCoefficients.push_back(token);
		}
	}
	
	for (int i = strCoefficients.size()-1; i >= 0; i--)
	{
		std::cout << "Coefficient: " << strCoefficients[i] << "; x = " << x << "; i = " << i << std::endl; 
		sum += std::stoi(strCoefficients[i]) * pow(x, i);
	}
	
	std::cout << "Resulting sum of the equation: " << sum << std::endl;
	
	return 0;
}
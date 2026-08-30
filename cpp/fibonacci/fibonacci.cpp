// Document: fibonacci.cpp
// Date: 08/29/2026
// Author: Alberto Reategui

#include <iostream>

// Main function
int main()
{
	// n - Number of terms in the Fibonacci series
	// sum - Sum of the Fibonacci series
	int n = 0;
	int sum = 0;
	
	// Prompt user to enter in how many terms to sum
	std::cout << "n = ";
	std::cin >> n;
	
	
	// Check for the following test cases
	if (n == 1)
	{
		sum = 0;
	}
	else if (n == 2)
	{
		sum = 1;
	}
	else
	{
		// The first two terms are known, so the series begins at index 2
		int a = 0, a1 = 1;
		
		// Loop until the nth term
		for (int i = 2; i <= n; i++)
		{
			// Sum the previous two terms, then shift
			sum = (a + a1);
			a = a1;
			a1 = sum;
		}
	}
	
	// Print out the following message
	std::cout << "The Fibonacci number for a series with " << n << " terms is: " << sum << std::endl;
	
	return 0;
}
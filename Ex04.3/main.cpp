#include <iostream>

#define MAX_NUMBER 600851475143;

int main()
{
	const unsigned int maxNumber = MAX_NUMBER;
	int biggestPrimeFactor = 0;
	int factor = 1;

	for (int i = 1; i < maxNumber; i++)
	{
		if (maxNumber % i == 0 && i % 1 == 0 && i % i == 0 && i > biggestPrimeFactor && factor < maxNumber)
		{
			factor *= i;
			biggestPrimeFactor = i;
		}
	}

	std::cout << "The biggest prime factor of 600 851 475 143 is " << biggestPrimeFactor << ".\n\n";

	system("pause");
	return EXIT_SUCCESS;
}
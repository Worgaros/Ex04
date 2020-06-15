#include <iostream>
#define MAX_NUMBER 1000;

int main()
{
	const int maxNumber = MAX_NUMBER;
	int multipleOf3 = 0;
	int multipleOf5 = 0;
	int result = 0;

	for (int i = 0; i < maxNumber; i += 3)
	{
		multipleOf3 += i;
	}


	for (int i = 0; i < maxNumber; i += 5)
	{
		multipleOf5 += i;
	}

	result = multipleOf3 + multipleOf5;

	std::cout << "The sum of the multiples of 3 or 5 less than 1000 is " << result << ".\n\n";

	system("pause");
	return EXIT_SUCCESS;
}
#include <iostream>

#define MAX_NUM 1000
#define MULTIPLE_1 3
#define MULTIPLE_2 5

int main()
{
	int sumMultiples = 0;
	const int maxNum = MAX_NUM;
	const int multiple1 = MULTIPLE_1;
	const int multiple2 = MULTIPLE_2;

	for (int i = 1; i < maxNum; i++)
	{
		if (i % multiple1 == 0 || i % multiple2 == 0)
			sumMultiples += i;
	}

	std::cout << "The sum of the multiples of 3 or 5 less than 1000 is " << sumMultiples << ".\n\n";

	system("pause");
	return EXIT_SUCCESS;
}
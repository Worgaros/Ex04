#include <iostream>;

int main()
{
	const int maxNum = 1000;
	const int multiple1 = 3;
	const int multiple2 = 5;
	int sumMultiples = 0;

	for (int i = 1; i < maxNum; i++)
	{
		if (i % multiple1 == 0 || i % multiple2 == 0)
			sumMultiples += i;
	}

	std::cout << "The sum of the multiples of 3 and 5 under " << maxNum << " is " << sumMultiples << ".\n\n";

	system("pause");
	return EXIT_SUCCESS;
}
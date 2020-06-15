#include <iostream>

#define MAX 4000000;

int fib(unsigned int max, unsigned int result);

int main()
{
	unsigned int result = 0;
	const unsigned int max = MAX;

	result = fib(max, result);

	std::cout << "Sum of even fibonacci terms lower than 4000000: " << result << ".\n\n";

	system("pause");
	return EXIT_SUCCESS;
}

int fib(unsigned int max, unsigned int result)
{
	unsigned int n = 0;
	unsigned int nMoinsDeux = 0;
	unsigned int nMoinsUn = 1;

	for (unsigned int i = 2; i < max; i++)
	{
		n = nMoinsDeux + nMoinsUn;
		if (n % 2 == 0)
		{
			result += n;
		}
		nMoinsDeux = nMoinsUn;
		nMoinsUn = n;
	}
	return result;
}
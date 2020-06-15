#include <iostream>

/*La suite de fibonacci est créée comme cela, chaque nouveau terme est égale à la somme des 2 précédents. 
En prenant les 10 premier termes et en commençant par 1, 2 on obtient:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89
En c++ : En considérant les termes de Fibonacci qui ont une valeurs qui n’est pas plus grande que 4 millions, 
trouver la sommes des termes qui ont une valeurs pair.
*/

#define MAX 4000000;

int fib(unsigned int max, unsigned int result);

int main()
{
	unsigned int result = 0;
	const unsigned int max = MAX;

	result = fib(max, result);

	std::cout << "Sum of even fibonacci terms lower than 4000000: " << result << "\n";

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
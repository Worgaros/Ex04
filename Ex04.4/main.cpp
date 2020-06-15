#include <iostream>

void Fit(int containerX, int containerY, int boxX, int boxY);

int main()
{
	Fit(25, 18, 6, 5);
	Fit(10, 10, 1, 1);
	Fit(12, 34, 5, 6);
	Fit(12345, 678910, 1112, 1314);
	Fit(5, 100, 6, 1);

	system("pause");
	return EXIT_SUCCESS;
}

void Fit(int containerX, int containerY, int boxX, int boxY)
{
	unsigned int maxBoxesInContainer = 0;
	unsigned int maxXBoxes = 0;
	unsigned int maxYBoxes = 0;

	maxXBoxes = containerX / boxX;
	maxYBoxes = containerY / boxY;

	maxBoxesInContainer = maxXBoxes * maxYBoxes;


	if (maxBoxesInContainer == 1)
		std::cout << "We can put a maximum of " << maxBoxesInContainer << " boxe in the container.\n\n";
	else if (maxBoxesInContainer > 1)
		std::cout << "We can put a maximum of " << maxBoxesInContainer << " boxes in the container.\n\n";
	else
		std::cout << "No box can be placed in the container.\n\n";
}
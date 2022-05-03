// usedma.cpp -- inheritance, friends, and DMA
// compile with dma.cpp
#include <iostream>
#include "dma.h"
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	const int arrLength = 3;
	const int LENGTH = 40;
	int rating;
	enum choices
	{
		BASEDMA = 1, LACKDMA = 2, HASDMA = 3
	};
	int choice;
	abcDMA* arrayOfInheritedClasses[arrLength];

	char label[LENGTH];
	char style[LENGTH];
	char color[LENGTH];

	for (int i = 0; i != arrLength; ++i)
	{
		cout << "Element " << i + 1 << ": " << endl;
		cout << "Label: ";
		cin.getline(label, LENGTH);

		cout << "Rating: ";
		cin >> rating;

		cout << "Enter 1 for baseDMA class, 2 for lacksDMA, 3 for hasDMA: ";
		cin >> choice;
		cin.get();

		switch (choice)
		{
		case BASEDMA:
			arrayOfInheritedClasses[i] = new baseDMA(label, rating);
			break;
		case LACKDMA:
			cout << "Enter the style: ";
			cin.getline(style, LENGTH);
			arrayOfInheritedClasses[i] = new lacksDMA(style, label, rating);
			break;
		case HASDMA:
			cout << "Enter the color: ";
			cin.getline(color, LENGTH);
			arrayOfInheritedClasses[i] = new lacksDMA(color, label, rating);
			break;
		default:
			cout << "Unknown type, try again" << endl;
			break;
		}
	}

	cout << "You entered: " << endl;
	for (int i = 0; i != arrLength; ++i)
	{
		cout << "Element " << i + 1 << ": ";
		arrayOfInheritedClasses[i]->View();
	}

	for (int i = 0; i != arrLength; ++i)
	{
		delete arrayOfInheritedClasses[i];
	}

	return 0;
}
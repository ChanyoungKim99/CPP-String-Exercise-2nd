#include <iostream>

int main()
{
	char myString1[255];
	char myString2[255];
	char myString3[255]{};
	int x{ 0 };

	std::cout << "Word 1 : ";
	std::cin >> myString1;
	std::cout << "Word 2 : ";
	std::cin >> myString2;

	
	for (int i = 0; i < 255; i++)
	{
		myString3[i] = myString1[i];

		if (myString1[i + 1] == '\0')
		{
			break;
		}
	}

	for (int i = 0; i < 255; i++)
	{
		if (myString3[i] != '\0')
		{
			continue;
		}

		myString3[i] = myString2[x];
		x++;
	
		if (myString2[x] == '\0')
		{
			break; 
		}
	}

	std::cout << "Result : " << myString3 << std::endl;

}








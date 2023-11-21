#include"MyChar.h"
using namespace std;

MyChar::MyChar(char a)
{
	cout << "Parameterized Constructor with default Arguments: " << a << endl;
}

void MyChar::setMyChar(char c)
{
	Letter = c;
}

char MyChar::getMyChar()
{
	return Letter;
}

void MyChar::uppcase(char a)
{
	if (a >= 97 && a <= 122)
	{
		a = a - 32;
		cout << "Your letter is in lower case. I convert it into upper case: " << a << endl;
	}
	else
	{
		cout << "Lower case: " << a << endl;
	}
}

void MyChar::lowcase(char a)
{
	if (a >= 65 && a <= 90)
	{
		a = a + 32;
		cout << "Your letter is in upper case. I convert it into lower case: " << a << endl;
	}
	else
	{
		cout << "Lower case: " << a << endl;
	}
}

void MyChar::sort(char* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			// Check if both characters are uppercase
			if ((arr[i] >= 65 && arr[i] <= 90) && (arr[j] >= 97 && arr[j] <= 122))
			{
				if (arr[i] > arr[j])
				{
					char empty = arr[i];
					arr[i] = arr[j];
					arr[j] = empty;
				}
			}
			// Check if the first character is uppercase and the second character is lowercase
			else if ((arr[i] >= 65 && arr[i] <= 90) && (arr[j] >= 97 && arr[j] <= 122))
			{
				if (arr[i] > arr[j])
				{
					char empty = arr[i];
					arr[i] = arr[j];
					arr[j] = empty;
				}
			}
			// Check if the first character is uppercase and the second character is lowercase
			else if ((arr[i] >= 97 && arr[i] <= 122) && (arr[j] >= 65 && arr[j] <= 90))
			{
				if (arr[i] > arr[j])
				{
					char empty = arr[i];
					arr[i] = arr[j];
					arr[j] = empty;
				}
			}
			// Check if the first character is lowwercase and the second character is lowercase
			else if ((arr[i] >= 97 && arr[i] <= 122) && (arr[j] >= 97 && arr[j] <= 122))
			{
				if (arr[i] > arr[j])
				{
					char empty = arr[i];
					arr[i] = arr[j];
					arr[j] = empty;
				}
			}
		}
	}
}
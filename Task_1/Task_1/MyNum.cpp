#include"MyNum.h"
using namespace std;

MyNum::MyNum(int a = 0) {
	number = a;
	cout << "Number = " << number << endl;
}


void MyNum::setnum(int x)
{
	number = x;
}

int MyNum::getnum()
{
	return number;
}

void MyNum::posnum()
{
	if (number < 0)
	{
		number = number * (-1);
		cout << "Your number is negative. I converted it to a positive number: " << number << endl;
	}
	else
	{
		cout << "Number is positive: " << number << endl;
	}
}

void MyNum::negnum()
{
	if (number > 0)
	{
		number = number * (-1);
		cout << "Your number is positive. I converted it to a negative number: " << number << endl;
	}
	else
	{
		cout << "Number is negative: " << number << endl;
	}
}

void MyNum::sort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "Sorted array is: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

MyNum::~MyNum()
{
	cout << "Bye Bye" << endl;
}
#include"MyNum.h"
using  namespace std;
int main()
{
	int nu;
	MyNum n(1);
	cout << "Enter Any Number	= ";
	cin >> nu;
	n.setnum(nu);
	cout << "Current Number is	= "<<n.getnum()<<endl;
	n.posnum();
	n.negnum();
	int size;
	cout << " Input How many numebrs you want to Input	= ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		int N;
		cout << "Enter your numebr here		= ";
		cin >>N;		
		MyNum ni(N);
		ni.setnum(N);
		cout << "Current number: " << ni.getnum() << endl;
		ni.posnum();
		ni.negnum();
		arr[i] = N;
	}

	n.sort(arr,size);

	delete[]arr;

	return 0;
}
#include "MyChar.h"
using namespace std;

int main()
{
    char let;
    cout << "Input Any Single Letter = ";
    cin >> let;

    MyChar ch('A'); // Parametrized Constructor with default argument
    ch.setMyChar(let);

    cout << "My First Character = " << ch.getMyChar() << endl;
    ch.uppcase(ch.getMyChar()); // Corrected function name
    ch.lowcase(ch.getMyChar()); // Corrected function name

    int N, a = 0;
    cout << "Input How Many times you want to Run this = ";
    cin >> N;
    cout << endl;

    char* arr = new char[N];

    while (a < N)
    {
        char leet;
        cout << "Input Any Single Letter = ";
        cin >> leet;
        cout << endl;
        MyChar cha('A'); // Creating a new object
        cha.setMyChar(leet);
        cout << "My First Character = " << cha.getMyChar();
        cha.uppcase(ch.getMyChar()); 
        cha.lowcase(ch.getMyChar());
        arr[a] = cha.getMyChar();
        a++; // Increment operator
        cout << endl;
    }

    ch.sort(arr, N); // Function For Sorting Character Array

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Delete Pointer Array

    return 0;
}

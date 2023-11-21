#include"Name.h"
using namespace std;
int nameCompare(Name name1, Name name2);
int main()
{
	const int size = 10;
	char* fN = new char[size];
	char* lN = new char[size];
	Name n(nullptr, nullptr);
	cout << "Enter First Name		= ";
	cin >> fN;
	cout << "Enter Last Name		= ";
	cin >> lN;
	n.setfisrtName(fN, size);
	n.setlastName(lN, size);
	if (n.isValidName())
	{
		cout << endl << "Name contains only Alphabets not any special characters or digits." << endl;
	}
	else 
	{
		cout << endl << "Name also contains special characters or digits." << endl;
	}
	cout << endl;
	Name one = n;       // Deep copy constructor
	n.copyName(one);     // Its a function
	n.camelCase();
	n.toLower();
	n.toUpper();
	n.nameLength();

	char* fullname = n.fullName();
	cout << "Full Name: " << fullname << endl;
	fullname = nullptr;
	delete[]fullname;

	const int siize = 10;
	char* fN1 = new char[siize];
	char* lN2 = new char[siize];
	Name n1(nullptr, nullptr);
	cout << "Enter First Name		= ";
	cin >> fN1;
	cout << "Enter Last Name		= ";
	cin >> lN2;
	n1.setfisrtName(fN1, siize);
	n1.setlastName(lN2, siize);
	n1.display();


	// Compare last names
	int comparisonResult = nameCompare(n,n1);

	cout << "Comparison Result: " << comparisonResult << endl;

	delete[] fN;
	delete[] lN;
	
	return 0;
}

int nameCompare(Name name1, Name name2)
{
    int size1Last = strlen(name1.getlastName());
    int size2Last = strlen(name2.getlastName());

    int counterLast = 0;

    // Compare last names
    if (size1Last != size2Last)
    {
        if (size1Last < size2Last)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        for (int i = 0; i < size1Last; ++i)
        {
            if (name1.getlastName()[i] != name2.getlastName()[i])
            {
                if (name1.getlastName()[i] < name2.getlastName()[i])
                {
                    return -1;
                }
                else
                {
                    return 1;
                }
            }
        }
    }

    // If last names are equal, compare first names
    int size1First = strlen(name1.getfirstName());
    int size2First = strlen(name2.getfirstName());

    // Reset counter for first names
    int counterFirst = 0;

    if (size1First != size2First)
    {
        if (size1First < size2First)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        for (int i = 0; i < size1First; ++i)
        {
            if (name1.getfirstName()[i] != name2.getfirstName()[i])
            {
                if (name1.getfirstName()[i] < name2.getfirstName()[i])
                {
                    return -1;
                }
                else
                {
                    return 1;
                }
            }
        }
    }

    return 0; // Names are the same
}

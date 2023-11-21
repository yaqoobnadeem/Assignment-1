#include"Name.h"

using namespace std;


Name::Name(char* first, char* last) {
	if (first != nullptr) {
		int size = strlen(first);
		firstName = new char[size + 1];
		strcpy(firstName, first);
	}
	else {
		firstName = nullptr;
	}

	if (last != nullptr) {
		int size = strlen(last);
		lastName = new char[size + 1];
		strcpy(lastName, last);
	}
	else {
		lastName = nullptr;
	}
}

void Name::setfisrtName(char* fn, int ss)
{
	const int size = ss + 1;
	firstName = new char[size];

	for (int i = 0; i < size; i++)
	{
		firstName[i] = fn[i];
	}

	firstName[size - 1] = '\0'; // Set the null terminator at the end
}

void Name::setlastName(char* ln, int ss)
{
	const int size = ss + 1;
	lastName = new char[size];

	for (int i = 0; i < size; i++)
	{
		lastName[i] = ln[i]; // Fix: Use ln instead of ls
	}

	lastName[size - 1] = '\0'; // Set the null terminator at the end
}


char* Name::getfirstName()
{
	return firstName;
}

char* Name::getlastName()
{
	return lastName;
}

Name::Name(const Name& Name2)
{
	if (Name2.firstName != nullptr)
	{
		int size = strlen(Name2.firstName);
		firstName = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			firstName[i] = Name2.firstName[i];
		}
		firstName[size] = '\0';
	}
	else
	{
		firstName = nullptr;
	}

	if (Name2.lastName != nullptr)
	{
		int size = strlen(Name2.lastName);
		lastName = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			lastName[i] = Name2.lastName[i];
		}
		lastName[size] = '\0';
	}
	else
	{
		lastName = nullptr;
	}

	cout << "Copy Constructor Name is: ";
	display();
	delete[] firstName;
	delete[] lastName;

}

	void Name::copyName(Name & other) 
	{
		if (other.firstName != nullptr)
		
	{
			int size = strlen(other.firstName);
			delete[] firstName;
			firstName = new char[size + 1];
			for (int i = 0; i < size; ++i) {
				firstName[i] = other.firstName[i];
			}
			firstName[size] = '\0';
		}
		else 
		{
			firstName = new char[1];
			firstName[0] = '\0';
		}

		if (other.lastName != nullptr)
		{
			int size = strlen(other.lastName);
			delete[] lastName;
			lastName = new char[size + 1];
			for (int i = 0; i < size; ++i) {
				lastName[i] = other.lastName[i];
			}
			lastName[size] = '\0';
		}
		else 
		{
			lastName = new char[1];
			lastName[0] = '\0';
		}

	}

char* Name::fullName() {
	int size1 = 0;
	if (firstName != nullptr) {
		size1 = strlen(firstName);
	}

	int size2 = 0;
	if (lastName != nullptr) {
		size2 = strlen(lastName);
	}

	int ss = size1 + size2 + 2; // Add 2 for the space between names and the null terminator
	char* mixarray = new char[ss];

	int i = 0;
	// Copy the characters from firstName to mixarray
	for (int k = 0; k < size1; ++k) {
		mixarray[i] = firstName[k];
		++i;
	}

	// Add a space between first and last names
	mixarray[i] = ' ';
	++i;

	// Copy the characters from lastName to mixarray
	for (int j = 0; j < size2; ++j) {
		mixarray[i] = lastName[j];
		++i;
	}

	// Set the null terminator at the end
	mixarray[i] = '\0';

	return mixarray;
}




void Name::camelCase()
{
	// Convert the first character of firstName to uppercase
	if (firstName[0] >= 97 && firstName[0] <= 122) {
		firstName[0] = firstName[0] - 32;
	}

	// Convert the rest of firstName to lowercase
	for (int i = 1; i < strlen(firstName); i++) {
		if (firstName[i] >= 65 && firstName[i] <= 92) {
			firstName[i] = firstName[i] + 32;
		}
	}

	// Convert the first character of lastName to uppercase
	if (lastName[0] >= 97 && lastName[0] <= 122) {
		lastName[0] = lastName[0] - 32;
	}

	// Convert the rest of lastName to lowercase
	for (int i = 1; i < strlen(lastName); i++) {
		if (lastName[i] >= 65 && lastName[i] <= 92) {
			lastName[i] = lastName[i] + 32;
		}
	}

	cout << "Camel Case = ";
	display();
}

void Name::toLower()
{
	int size1 = strlen(firstName);
	int size2 = strlen(lastName);

	for (int i = 0; i < size1; i++)
	{
		if (firstName[i] >= 65 && firstName[i] <= 90)
		{
			firstName[i] = firstName[i] + 32;
		}
	}

	for (int i = 0; i < size2; i++)
	{
		if (lastName[i] >= 65 && lastName[i] <= 90)
		{
			lastName[i] = lastName[i] + 32;
		}
	}
	cout << "Lower Case Function :		";
	display();
}

void Name::toUpper()
{
	int size1 = strlen(firstName);
	int size2 = strlen(lastName);

	for (int i = 0; i < size1; i++)
	{
		if (firstName[i] >= 97 && firstName[i] <= 122)
		{
			firstName[i] = firstName[i] - 32;
		}
	}

	for (int i = 0; i < size2; i++)
	{
		if (lastName[i] >= 97 && lastName[i] <= 122)
		{
			lastName[i] = lastName[i] - 32;
		}
	}
	cout << "Upper Case Function :		";
	display();
}


int Name::nameLength()
{
	int size1 = strlen(firstName);
	int size2 = strlen(lastName);
	int ss = size1 + size2;
	cout << "Size of name is = " << ss << endl;
	return ss;
}

void Name::swapNames()
{
	char* temp = firstName;
	firstName = lastName;
	lastName = temp;
	cout << "After Swaping:		= ";
	display();
	delete[]temp;

}

char* Name::fullName() {
	int size1 = 0;
	if (firstName != nullptr) {
		size1 = strlen(firstName);
	}

	int size2 = 0;
	if (lastName != nullptr) {
		size2 = strlen(lastName);
	}

	int ss = size1 + size2 + 2; // Add 2 for the space between names and the null terminator
	char* mixarray = new char[ss];

	int i = 0;
	// Copy the characters from firstName to mixarray
	for (; i < size1; ++i) {
		mixarray[i] = firstName[i];
	}

	// Add a space between first and last names
	mixarray[i++] = ' ';

	// Copy the characters from lastName to mixarray
	for (int j = 0; j < size2; ++j, ++i) {
		mixarray[i] = lastName[j];
	}

	// Set the null terminator at the end
	mixarray[i] = '\0';

	return mixarray;
}


bool Name::isValidName()
{
	int size1 = 0;
	if (firstName != nullptr) 
	{
		size1 = strlen(firstName);
	}

	int size2 = 0;
	if (lastName != nullptr)
	{
		size2 = strlen(lastName);
	}

	for (int i = 0; i < size1; i++) {
		if (!((firstName[i] >= 'A' && firstName[i] <= 'Z') || (firstName[i] >= 'a' && firstName[i] <= 'z')))
		{
			return false;
		}
	}

	for (int i = 0; i < size2; i++) {
		if (!((lastName[i] >= 'A' && lastName[i] <= 'Z') || (lastName[i] >= 'a' && lastName[i] <= 'z'))) 
		{
			return false;
		}
	}

	return true;
}


void Name::display()
{
	if (firstName && lastName) 
	{
		cout << firstName << " " << lastName << endl;
	}
	else 
	{
		cout << "Invalid name" << endl;
	}
}

Name::~Name()
{
	delete[] firstName;
	delete[] lastName;
	cout << "Bye Bye Jerry" << endl;
}
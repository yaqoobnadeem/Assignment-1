#include<iostream>
class Name
{
private:

	char* firstName;
	char* lastName;

public:
	Name(char*, char*);								// parameterized constructor with default values
	void setfisrtName(char*, int);					//Setter for give data to private attribute
	void setlastName(char*, int);					//Setter for give data to private attribute
	char* getfirstName();							//Setter for give data to private attribute
	char* getlastName();							//Setter for give data to private attribute
	~Name();										//destructor.
	Name(const Name&);								//copy constructor
	void copyName(Name&);							//this is not a copy constructor, I want this function to copy the contents of one nam(firstName and lastName both) to another name
	void camelCase();								// make first letter capital of both attributes
	void toLower();									//convert name to lower case alphabets
	void toUpper();									//convert name into upper case alphabets
	int nameLength();								// both first and last (excluding space)
	void swapNames();								// firstName becomes lastName and vice versa
	char* fullName();								//concatenate both attributes and return full name with a space in between both
	bool isValidName();								// name should contain only alphabets - no special characters or digits
	void display();									//prints name(firstName and lastName with space in between)
};
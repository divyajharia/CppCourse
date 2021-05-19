// There can be Mutable Functions and non Mutable Functions
//when you add const to a function like : int getValue() const;
//the function becomes non mutable so we cannot change the values in it and the object accesssing it should be const or non const it doesnt matter 
//but if we have a const object we should always have a const function defination available 
//this is considered in the signature of the function therefor it can be used in for Polymorphism 

#include <iostream>
using namespace std;

class C1
{
	int value{ 8 };
public :
	void setValue(int val);
	int getValue() const;
	int getValue();
};

void C1::setValue(int val)
{
	value = val;
}

int C1::getValue() const
{
	cout << "Me Const\n";
	return value;
}

int C1::getValue()
{
	cout << "Me Non const\n";
	return value;
}


int main()
{
	C1 ob1;
	ob1.setValue(70);
	const C1 ob2 = ob1;

	cout << ob1.getValue() <<endl;
	cout << ob2.getValue() << endl;
	return 0;
}
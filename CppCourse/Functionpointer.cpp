#include <iostream>
#include <fstream>
using namespace std;

int func()
{
	cout << "hellow from the out side";
	return 1;
}

int func1()
{
	cout << "\n Its a love story baby just say yes\n";
	return 1;
}

int func2()
{
	cout << "\n nNa nan an na ana na \n";
	return 1;
}

int (*function[])() = { func, func1, func2 };

int main()
{

	function[2]();

	char test{ 'a' };
	size_t i = size_t(test) - 0;
	cout << i << endl;
}
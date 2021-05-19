#include <iostream>
#include<time.h>
using namespace std;
const double PI = 3.14;

double volume(int r);
double volume(int h, int b, int l);
double volume(int h, int r);
int main()
{
	volume(4);
	volume(4, 5, 6);
	volume(7, 3);

	return 0;
}

double volume(double r)
{
	double volume = PI * r * r * r;
	
	cout << "Volume of sphere :" << volume<<endl;
	return volume;
}

double volume(double h, double b, double l)
{
	double volume = l*b*h;

	cout << "Volume of Cuboid :" << volume<<endl;
	return volume;
}

double volume(double h, double r)
{
	double volume = PI * r * r * h;

	cout << "Volume of Cylinder :" << volume<<endl;
	return volume;
}

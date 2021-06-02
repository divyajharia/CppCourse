//#include<iostream>
//#include<string>
//using namespace std;
//
//const string def{ "default" };
//const string clone{ "clone-" };
//class Animal
//{
//	string animalName;
//	string animalBreed;
//	string animalPlace;
//public:
//	Animal();
//	Animal(string an, string ab, string ap);
//	Animal(string...);
//	Animal(const Animal&);
//	Animal& operator=(const Animal&);
//	~Animal();
//};
//
//
//
//
//Animal::Animal() : animalBreed{def}, animalName{def}, animalPlace{def}
//{
//	cout << "Default constructor\n";
//	cout << animalName << " belongs to breed " << animalBreed << " and place " << animalPlace<<endl;
//}
//
//Animal::Animal(string an, string ab, string ap): animalBreed{ab},animalName{an},animalPlace{ap}
//{
//	cout << "Parametereized constructor\n";
//	cout << animalName << " belongs to breed " << animalBreed << " and place " << animalPlace<<endl;
//}
//
//Animal::Animal(string ...)
//{
//}
//
//Animal::~Animal()
//{
//	cout << animalBreed << "  " << animalName <<" "<< animalPlace << endl;
//}
//
//Animal::Animal(const Animal& a)
//{
//	animalBreed = clone + a.animalBreed;
//	animalName = a.animalName;
//	animalPlace = a.animalPlace;
//	cout << "Copy constructor\n";
//	cout << animalName << " belongs to breed " << animalBreed << " and place " << animalPlace<<endl;
//}
//
//Animal& Animal::operator=(const Animal& rhs) 
//{
//	cout << "assignment operator\n";
//	if (this != &rhs)
//	{
//		animalBreed = clone+rhs.animalBreed;
//		animalName = rhs.animalName;
//		animalPlace = rhs.animalPlace;
//	}
//	cout << animalName << " belongs to breed " << animalBreed << " and place " << animalPlace << endl;
//	return *this;
//}
//
//int main()
//{
//	Animal a1;
//	Animal a2("Michel", "dog", "jabalpur");
//	Animal a3 = a2;
//	Animal a4;
//	a4 = a3;
//	//cout << animalName << " belongs to breed " << animalBreed << " and place " << animalPlace << endl;
//	
//	return 0;
//}
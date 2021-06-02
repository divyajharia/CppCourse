 #include <iostream>
#include<array>
#include <string>
using namespace std;

namespace bw {
	class numword
	{
		uint64_t n;
		array<int,8> arr{10,100,1000,10000,100000,1000000,10000000,100000000};
		array<int, 8> arrDigit{};
		numword(uint64_t val = 0) : n (val){};
		string words(uint64_t val);
		int findDigits(uint64_t val);
	};
	string numword::words(uint64_t val)
	{

		
		return string();
	}
	int numword::findDigits(uint64_t val)
	{
		int x = 0;
		for (int i = 0; i < arr.size(); i++)
		{
			x = val % i;
			arrDigit.at(i) == x;
			val = val / i;
		}
		return arrDigit.size();
	}
}
int main()
{
	int a =7;
	cout << a + 7.9999;
	return 0;
}
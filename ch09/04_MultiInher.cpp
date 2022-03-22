#include <iostream>
using namespace std;

class BaceOne
{
public:
	void SimpleFuncOne() { cout << "BaceOne" << endl; }
};

class BaceTwo
{
public:
	void SimpleFuncTwo() { cout << "BaceTow" << endl; }

};

class M : public BaceOne, private BaceTwo
{
public:
	void ComplexFunc()
	{
		SimpleFuncOne();
		SimpleFuncTwo();
	}
};

int main()
{
	M m;
	m.ComplexFunc();
}
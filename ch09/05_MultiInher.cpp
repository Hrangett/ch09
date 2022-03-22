#include <iostream>
using namespace std;

class BaceOne
{
public:
	void SimpleFunc() { cout << "BaceOne" << endl; }
};

class BaceTwo
{
public:
	void SimpleFunc() { cout << "BaceTow" << endl; }

};

class MultiDerived : public BaceOne, private BaceTwo
{
public:
	void ComplexFunc()
	{
		BaceOne::SimpleFunc();
		BaceTwo::SimpleFunc();
	}
};

int main()
{
	MultiDerived m;
	m.ComplexFunc();
}
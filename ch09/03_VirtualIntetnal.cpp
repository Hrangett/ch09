#include<iostream>
using namespace std;

class AAA
{
private:
	int num1;
public:
	virtual void Func1() { cout << "Func01" << endl; }
	virtual void Func2() { cout << "Func02" << endl; }
};

class BBB : public AAA
{
private:
	int num2;

public:
	virtual void Func1() { cout << "BBB :: Func01" << endl; }
	void Func3() { cout << "Func03" << endl; }
};

int main()
{
	AAA* aptr = new AAA();
	aptr->Func1();

	BBB* bptr = new BBB();
	bptr->Func1();

	AAA* ptr = new BBB();
	ptr->Func1();
	ptr->Func2();

}
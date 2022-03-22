#include <iostream>
using namespace std;

typedef struct Data
{
	int data;
	void (*ShowData)(Data*);	//	�Լ������� :: 
	void (*Add)(Data*, int);
} Data;

void ShowDat(Data* THIS) { cout << "Data: " << THIS->data << endl; }
void Add(Data* THIS, int num) { THIS->data += num; }

int main()
{
	Data obj1 = { 15,ShowDat,Add };
	Data obj2 = { 7,ShowDat,Add };

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);

	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);

	return 0;
}
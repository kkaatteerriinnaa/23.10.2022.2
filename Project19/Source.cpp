#include <iostream>
#include "Base.h"
#include "Vehicle.h"

using namespace std;
using namespace Military;
using namespace Transport;

int main()
{
	Base obj(300, 10, 1000, 1000);
	obj.Print();
	Vehicle* obj2 = nullptr;
	obj2 = new Truck(10, 100, 70, 150);
	cout << endl;
	obj2->Print();
	obj2->leave(obj);
	cout << endl;
	obj.Print();
	cout << endl;
	obj2->Print();
	obj2->arrive(obj);
	cout << endl;
	obj.Print();
	cout << endl;
	obj2->Print();
}
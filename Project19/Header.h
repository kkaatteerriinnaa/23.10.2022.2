#pragma once
#include <iostream>
using namespace std;

namespace Military
{
	class Base
	{
	private:
		static int people_on_base;
		static int vehicles_on_base;
		static double petrol_on_base;
		static double goods_on_base;
	public:
		Base() {}
		Base(int p, int v, double pe, double g)
		{
			people_on_base = p;
			vehicles_on_base = v;
			petrol_on_base = pe;
			goods_on_base = g;
		}
		void Print()
		{
			cout << "People on base: " << people_on_base << "\n";
			cout << "Vehicles on base: " << vehicles_on_base << "\n";
			cout << "Petrol on base: " << petrol_on_base << "\n";
			cout << "Goods on base: " << goods_on_base << " t\n";
		}
		void SetPeople(int a)
		{
			people_on_base = a;
		}
		int GetPeople()
		{
			return people_on_base;
		}
		void SetVehicles(int a)
		{
			vehicles_on_base = a;
		}
		int GetVehicles()
		{
			return vehicles_on_base;
		}
		void SetPetrol(double a)
		{
			petrol_on_base = a;
		}
		double GetPetrol()
		{
			return petrol_on_base;
		}
		void SetGoods(double a)
		{
			goods_on_base = a;
		}
		double GetGoods()
		{
			return goods_on_base;
		}
	};

	int Base::people_on_base = 0;
	int Base::vehicles_on_base = 0;
	double Base::petrol_on_base = 0;
	double Base::goods_on_base = 0;
}

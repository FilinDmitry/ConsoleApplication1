#include<iostream>
#include<string>
using namespace std;

int main()
{
	int int1 = 15, int2 = 20, int3 = 20, int4 = 30;

	// Задание 1
	
	while (int2 == int3)
	{
		int2++;
	}
	cout << "operator == true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	// Задание 2
	
	while (int2 != int3)
	{
		int2--;
	}
	cout << "operator != true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	

	// Задание 3
	
	while (int4 > int3)
	{
		int4--;
	}
	cout << "operator > true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	
	while (int1 < int3)
	{
		int1++;
	}
	int2 = 10;
	cout << "operator < true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	// Задание 4
	
	while (int3 >= int2)
	{
		int2++;
	}
	cout << "operator >= true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	while (int3 <= int2)
	{
		int3++;
	}
	cout << "operator <= true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	
	// Задание 5
	while (int1 == int4 && int3 > int2)
	{
		int2++;
	}
	cout << "operator && true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	// Задание 6
	while (int2 >= int3 || int1 == int4)
	{
		int3++;
		int1--;
	}
	cout << "operator || true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;


	// Задание 7

	while (!(int2 == int3))
	{
		int2++;
	}
	cout << "operator ! true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;


}
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int int1 = 15, int2 = 20, int3 = 20, int4 = 30;

	// ������� 1
	
	while (int2 == int3)
	{
		int2++;
	}
	cout << "operator == true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	// ������� 2
	
	while (int2 != int3)
	{
		int2--;
	}
	cout << "operator != true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	

	// ������� 3
	
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

	// ������� 4
	
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

	
	// ������� 5
	while (int1 == int4 && int3 > int2)
	{
		int2++;
	}
	cout << "operator && true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;

	// ������� 6
	while (int2 >= int3 || int1 == int4)
	{
		int3++;
		int1--;
	}
	cout << "operator || true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;


	// ������� 7

	while (!(int2 == int3))
	{
		int2++;
	}
	cout << "operator ! true" << "     int1 = " << int1 << "    int2 = " << int2 << "    int3 = " << int3 << "     int4 = " << int4 << endl;


}
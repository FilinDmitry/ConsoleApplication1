#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i, j, k, l;
	cin >> i >> j >> k >> l;
	if (i > j and i > k and i > l)
	{
		cout << "max i " << i << endl;
	}
	if (i < j and j > k and j > l)
	{
		cout << "max j " << j << endl;
	}
	if (k > j and k > i and k > l)
	{
		cout << "max k " << k << endl;
	}
	if (l > j and l > i and l > k)
	{
		cout << "max l " << l << endl;
	}
}
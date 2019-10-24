#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int GOD;
	cout << "GOD=";
	cin >> GOD;
	if (GOD > 0)
	{
		if (GOD % 100 == 0)
		{
			cout << (GOD / 100) << " VEK";
		}
		else
		{
			cout << (GOD / 100) + 1 << " VEK";
		}
	}
	else
	{
		cout << "ERROR";
	}
}
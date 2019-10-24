#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int A, B, C;
	float Plosh;
	    cout << "A=";
		cin >> A;
		cout << "B=";
		cin >> B;
        cout << "C=";
		cin >> C;
		if (A > 0 && B > 0 && C > 0)
		{
		if (A >= C && B >= C)
		{
			cout << "Kol-vo kvadratov - " << ((A / C)*(B / C)) << endl;
			Plosh = (A*B) - (A / C)*(B / C)*C*C;
			cout << "ploshad nezanyatoy chasti- " << Plosh;
		}
		else
		{
			cout << "Kol-vo kvadratov - 0";
		}
	}
	else
	{
		cout << "Error";
	}
}
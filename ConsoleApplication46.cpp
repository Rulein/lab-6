#include <iostream>
#include <string>
using namespace std;
int main()
{
	int K;
	cout << "K=";
	cin >> K;
	if (1 <= K && K <= 365)
	{
		cout << "Nomer dnya nedely-" << K % 7;
	}
	else
	{
		cout << "Error";
	}
}
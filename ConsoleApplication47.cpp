#include <iostream>
#include <string>
using namespace std;
int main()
{
	int K, N;
	cout << "K=";
	cin >> K;
	cout << "N=";
	cin >> N;
	if (1 <= K && K <= 365 && 1 <= N && N <= 7)
	{
		cout << "Nomer dnya nedely-" << K % 7 + N;
	}
	else
	{
		cout << "Error";
	}
}
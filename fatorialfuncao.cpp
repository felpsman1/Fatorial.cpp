#include<iostream>
using namespace std;
int fato(int n)
{
	int fatorial=1;
	for(int i = 1; i <= n; i++)
	{
		fatorial = fatorial * i;

	}
	return fatorial;
}
int main()
{
	int n;
	cin >> n ;
	cout << fato(n) << endl;
	return 0;
}

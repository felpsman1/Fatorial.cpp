#include<iostream>
using namespace std;
int main()
{
	int fat=1;
	int n;
	cin >> n ;
	for(int i = 1; i <= n; i++)
	{
		fat = fat * i;

	}
	cout << fat << endl;
	return 0;
}

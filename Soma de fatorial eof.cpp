#include <iostream>
using namespace std;
int main()
{
	long long int M, N, fat, fat2; // Declaracao dos contadores e dos dois variaveis
	while(cin >> M >> N) // equanto eu estiver entrando com os contadores
	{
		fat = 1; // fatorial 1
		fat2 = 1; // fatorial 2
		for (int i = M; i > 0; --i) //for pra o calculo do fatorial
		{
			fat = fat * M;
			M++;
		}
		for (int i = N; i > 0; --i) // for para o calculo do fatorial 2
		{
			fat2 = fat2 * N;
			N++;
		}
		cout << (fat + fat2) << endl; // soma dos dois fatoriais 
	}
	return 0;
}

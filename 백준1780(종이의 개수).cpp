#include <iostream>
#include <cstring>
using namespace std;

int N;
int minus_p = 0, zero_p = 0, plus_p = 0;
int Procession[2200][2200];
void div_conq(int y, int x, int n)
{
	int tmp_cnt = 0;

}

int main()
{
	cin >> N;
	memset(Procession, -2, sizeof(Procession));
	for (auto i = 0; i < N; ++i)
	{
		for (auto j = 0; j < N; ++j)
		{
			scanf_s("%d", &Procession[i][j]);
		}
	}
	div_conq(0,0,0);
}
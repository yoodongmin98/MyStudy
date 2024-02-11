#include <iostream>

using namespace std;

int N;
int Max = 0;
int Map[501][501];
int Num[501][501] = { 0 };

int Dir[4][2] = { {0,-1}, {1,0}, {0,1}, {-1,0} };

void Solution(int X,int Y,int Count)
{
	int Now = Map[Y][X];
	for (auto i = 0; i < 4; ++i)
	{
		int NY = Y + Dir[i][1];
		int NX = X + Dir[i][0];
		if (NX >= 0 && NY >= 0 && NX <= N && NY <= N)
		{
			if (Map[NY][NX] > Now)
			{
				Solution(NX, NY, Count+1);
			}
		}
	}
	if (Count > Max)
		Max = Count;
}

int main()
{
	cin >> N;
	for (auto i = 0; i < N; ++i)
	{
		for (auto j = 0; j < N; ++j) {
			int Info;
			cin >> Info;
			Map[i][j] = Info;
		}
	}
	for (auto i = 0; i < N; ++i)
	{
		for (auto j = 0; j < N; ++j)
		{
			Solution(j,i,1);
		}
	}
	cout << Max;
}
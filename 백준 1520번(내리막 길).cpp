//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//int Map[501][501];
//bool Isvisit[501][501] = { false };
//bool DP[501][501] = { false };
//int Dir[4][2] = { {0,-1} ,{1,0} ,{0,1}, {-1,0} };
//int Result = 0;
//void DFS(int Y,int X)
//{
//	int Test = Map[Y][X];
//	if (X == M - 1 && Y == N - 1)
//	{
//		Result++; return;
//	}
//	DP[Y][X] = true;
//	Isvisit[Y][X] = true;
//	for (auto v : Dir)
//	{
//		int NX = X + v[0];
//		int NY = Y + v[1];
//		if (NX < M && NX >= 0 && NY < N && NY >= 0)
//		{
//			if (Map[Y][X] > Map[NY][NX])
//			{
//				if (Isvisit[NY][NX] == false)
//				{
//					DFS(NY, NX);
//				}	
//			}
//		}
//	}
//	Isvisit[Y][X] = false;	
//}
//int main()
//{
//	cin >> N >> M;
//	for (auto i = 0; i < N; ++i)
//	{
//		for (auto j = 0; j < M; ++j)
//		{
//			int Num;
//			cin >> Num;
//			Map[i][j] = Num;
//		}
//	}
//	DFS(0,0);
//	cout << Result;
//}
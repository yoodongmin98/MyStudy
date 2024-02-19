//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//int Map[501][501];
//bool Isvisit[501][501] = { false };
//int DP[501][501] = { false };
//int Dir[4][2] = { {0,-1} ,{1,0} ,{0,1}, {-1,0} };
//void DFS(int Y,int X)
//{
//	int Test = Map[Y][X];
//	Isvisit[Y][X] = true;
//	bool Find = false;
//	for (auto i=0 ; i<4 ;++i)
//	{
//		int NX = X + Dir[i][0];
//		int NY = Y + Dir[i][1];
//		if (NX < M && NX >= 0 && NY < N && NY >= 0)
//		{
//			if (Map[Y][X] > Map[NY][NX])
//			{
//				if (Isvisit[NY][NX] == false)
//				{
//					if (DP[NY][NX]>0){
//						Find = true;
//						DP[Y][X] += DP[NY][NX];
//					}
//					else if (DP[NY][NX]!=-1) {
//						Find = true;
//						DFS(NY, NX);
//						--i;
//					}
//				}	
//			}
//		}
//	}
//	if (Find == false) {
//		if (X == 0 && Y == 0){ }
//		else
//		DP[Y][X] = -1;
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
//	DP[N - 1][M - 1] = 1;
//	DFS(0,0);
//	cout << DP[0][0];
//}
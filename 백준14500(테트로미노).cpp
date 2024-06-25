//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//int N, M;
//int Map[501][501];
//int MaxN = 0;
//int Dir[4][2] = { {0,-1}, {1,0}, {0,1}, {-1,0} };
//bool Isvisit[501][501] = { false };
//
//int Result = 0;
//void Solution(int Y,int X,int Re,int Depth)
//{
//	//내가 이거 잘못쳐서 몇번을 틀리니 ㅓ ㅗ ㅏ ㅜ
//	if (Y - 1 >= 0 && Y + 1 < N && X - 1 >= 0)
//		Result = max(Result, Map[Y - 1][X] + Map[Y + 1][X] + Map[Y][X] + Map[Y][X - 1]); //ㅓ
//	if (Y - 1 >= 0 && X + 1 < M && X - 1 >= 0)
//		Result = max(Result, Map[Y - 1][X] + Map[Y][X + 1] + Map[Y][X - 1] + Map[Y][X]);
//	if (Y - 1 >= 0 && Y + 1 < N && X + 1 < M)
//		Result = max(Result, Map[Y - 1][X] + Map[Y + 1][X] + Map[Y][X] + Map[Y][X + 1]);
//	if (Y + 1 < N && X + 1 < M && X - 1 >= 0)
//		Result = max(Result, Map[Y + 1][X] + Map[Y][X + 1] + Map[Y][X - 1] + Map[Y][X]);
//	Isvisit[Y][X] = true;
//	Re += Map[Y][X];
//	Result = max(Result,Re);
//	if (Depth == 4)
//	{
//		Isvisit[Y][X] = false;
//		return;
//	}	
//	for (auto k : Dir)
//	{
//		if (Y + k[1] >= 0 && Y + k[1] < N && X + k[0] >= 0 && X + k[0] < M)
//		{
//			int NY = Y + k[1];
//			int NX = X + k[0];
//			if(Isvisit[NY][NX]==false)
//				Solution(NY, NX, Re, Depth + 1);
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
//	for (auto i = 0; i < N; ++i)
//	{
//		for (auto j = 0; j < M; ++j)
//		{
//			Solution(i, j, 0, 1);
//		}
//	}
//	cout << Result;
//}
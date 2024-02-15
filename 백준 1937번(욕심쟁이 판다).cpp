//#include <iostream>
//
//using namespace std;
////개 ㅈ같은 문제로구만
//int N;
//int Max = 0;
//int Map[501][501];
//int Num[501][501] = { 0 };
//
//int Dir[4][2] = { {0,-1}, {1,0}, {0,1}, {-1,0} };
//void Solution(int X,int Y,int Count,int _StartX, int _StartY)
//{
//	bool SideCheck = false;
//	int Now = Map[Y][X];
//	for (auto i = 0; i < 4; ++i)
//	{
//		int NY = Y + Dir[i][1];
//		int NX = X + Dir[i][0];
//		if (NX >= 0 && NY >= 0 && NX <= N && NY <= N)
//		{
//			if (Map[NY][NX] > Now)
//			{
//				SideCheck = true;
//				if (Num[NY][NX] != 0) {
//					if (Count != 1)
//						if (Num[Y][X]<1+Num[NY][NX])
//							Num[Y][X] = 1 + Num[NY][NX];
//					else {
//						int SetC = Count + Num[NY][NX];
//						if (Num[_StartY][_StartX] < SetC)
//							Num[_StartY][_StartX] = SetC;
//						if (SetC > Max)
//							Max = SetC;
//					}
//				}
//				else {
//					Solution(NX, NY, Count + 1, _StartX, _StartY);
//					--i;
//				}
//			}
//		}
//	}
//	if (SideCheck == false) {
//		Num[Y][X] = 1;
//	}
//	if (Count > Max)
//		Max = Count;
//	if (Num[_StartY][_StartX] < Count)
//		Num[_StartY][_StartX] = Count;
//}
//
//int main()
//{
//	cin >> N;
//	for (auto i = 0; i < N; ++i)
//	{
//		for (auto j = 0; j < N; ++j) {
//			int Info;
//			cin >> Info;
//			Map[i][j] = Info;
//		}
//	}
//	for (auto i = 0; i < N; ++i)
//	{
//		for (auto j = 0; j < N; ++j)
//		{
//			if(Num[i][j]==0)
//				Solution(j,i,1,j,i);
//		}
//	}
//	cout << Max;
//}
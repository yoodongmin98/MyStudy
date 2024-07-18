//#include <iostream>
//#include <vector>
//using namespace std;
//
//int R, C;
//char Map[10001][501] = {" "};
//bool Isvisit[10001][501] = { false };
//int Dir[3][2] = { {1,-1}, {1,0}, {1,1} };
//int Result = 0;
//bool Returns = false;
//void Solution(int Y,int X)
//{
//	if (X == C-1)
//	{
//		Returns = true;
//		Result++;
//		return;
//	}
//	Isvisit[Y][X] = true;
//	for (auto v : Dir)
//	{
//		if (Returns == true)
//			return;
//		int NX = X + v[0];
//		int NY = Y + v[1];
//		if (NX >= 0 && NX < C && NY>=0 && NY < R)
//		{
//			if (Isvisit[NY][NX] == false && Map[NY][NX] != 'x')
//			{
//				Solution(NY, NX);
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> R >> C;
//	for (auto i = 0; i < R; ++i)
//	{
//		for (auto j = 0; j < C; ++j)
//		{
//			char Dot;
//			cin >> Dot;
//			Map[i][j] = Dot;
//		}
//	}
//	for (auto p = 0; p < R; ++p)
//	{
//		Solution(p, 0);
//		Returns = false;
//	}
//	cout << Result;
//}
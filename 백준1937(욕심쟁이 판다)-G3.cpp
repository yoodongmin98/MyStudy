//#include <iostream>
//
//using namespace std;
//
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
//	for (auto i = 0; i < 4; ++i) //상 우 하 좌
//	{
//		int NY = Y + Dir[i][1]; //다음index
//		int NX = X + Dir[i][0];
//		if (NX >= 0 && NY >= 0 && NX <= N && NY <= N) //칸검사
//		{
//			if (Map[NY][NX] > Now)//그 방향의 값이 현재 index의 값보다 작으면
//			{
//				SideCheck = true;
//				if (Num[NY][NX] != 0) //그 방향의 메모이제이션 배열이 0이 아니면(뭔가 지나온 값이 있다면)
//				{
//					if (Count != 1) //Count가 1이 아닐떄(재귀로 들어온 dfs노드일 때)
//					{
//						//그 노드에서 다음노드까지의 Count수가 현재 기록된것보다 클 때
//						if (Num[Y][X] < 1 + Num[NY][NX]) 
//							Num[Y][X] = 1 + Num[NY][NX]; //그 값을 넣음
//					}
//					else //재귀로들어온 노드가 아니라 시작된 첫 노드일 떄
//					{
//						//위와같이 값 비교
//						int SetC = Count + Num[NY][NX]; 
//						if (Num[_StartY][_StartX] < SetC)
//							Num[_StartY][_StartX] = SetC;
//						//그 값의 max값 검사
//						if (SetC > Max)
//							Max = SetC;
//					}
//				}
//				else { //지나온 값이 없다면
//					//그 다음노드를 재귀적으로 방문
//					Solution(NX, NY, Count + 1, _StartX, _StartY);
//					--i;
//				}
//			}
//		}
//	}
//	//그 노드의 방향을 모두 검사했는데 움직일수있는 노드가 없다면
//	if (SideCheck == false) {
//		//그 노드는 움직일수있는 수가 1이다.
//		Num[Y][X] = 1;
//	}
//	//Max검사
//	if (Count > Max)
//		Max = Count;
//	//재귀를 돌면서 시작노드의 값보다 Count가 커지면 갱신
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
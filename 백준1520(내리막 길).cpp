//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//int Map[501][501]; //이건 맵
//bool Isvisit[501][501] = { false }; //방문여부
//int DP[501][501] = { false }; //중복여부 조사해줄 DP배열
//int Dir[4][2] = { {0,-1} ,{1,0} ,{0,1}, {-1,0} }; //늘 쓰는 그 방향
//void DFS(int Y,int X)
//{
//	Isvisit[Y][X] = true; //방문체크
//	bool Find = false; //4방향을 돌면서 갈 수 있는 방향을 찾았는지
//	for (auto i=0 ; i<4 ;++i) //늘 도는 그 4방향
//	{
//		int NX = X + Dir[i][0];
//		int NY = Y + Dir[i][1];
//		if (NX < M && NX >= 0 && NY < N && NY >= 0) //늘 검사하는 그 index
//		{
//			//현재값이 이동하고자하는곳 보다 크다면
//			if (Map[Y][X] > Map[NY][NX])
//			{
//				//방문체크가 안되어있을때만 이동가능
//				if (Isvisit[NY][NX] == false)
//				{
//					//DP배열에 그 경로(Map[NY][NX])로 이동했을때의
//					//경우의 수가 저장되어있다면
//					if (DP[NY][NX]>0){
//						Find = true; //찾았다 요놈 +
//						DP[Y][X] += DP[NY][NX]; //그 경우의수를 더하면 돌 필요가없음
//					}
//					else if (DP[NY][NX]!=-1) { //-1은 밑에 이유있음
//						Find = true;
//						DFS(NY, NX);//아니면 재귀돌아라
//						--i; //재귀 돌고 나와서 그 자리값을 재검사 하기위함
//					}
//				}	
//			}
//		}
//	}
//	//만약 4방향 다 돌았는데 이동할 수 있는곳이 없다면
//	if (Find == false) { 
//		if (X == 0 && Y == 0){ }
//		else
//		DP[Y][X] = -1; //-1을 넣으세요
//	}
//	Isvisit[Y][X] = false;	//재귀에서 나오면 false(DFS)
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
//	//0,0부터 목적지에 도착할때 마다 값을 더해줄것이므로
//	DFS(0,0);
//	//DP첫번째 값이 곧 답이다.
//	cout << DP[0][0];
//}
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <string>
//#define Max 1000001;
//using namespace std;
//
//
//int N, M;
//bool Isvisit[1001][1001] = { false };
//bool Map[1001][1001] = {false};
//int Dir[4][2] = { {0,-1}, {1,0}, {0,1}, {-1,0} };
//queue<pair<int, int>> NodeQ;
//int Min = Max;
//bool Crash = false;
//void BFS(int Y,int X,int Count,bool Crash)
//{
//	if (Y == N - 1&& X==M-1) //도착했으면 카운트검사
//	{
//		if (Count < Min)
//			Min = Count;
//	}
//	Isvisit[Y][X] = true; //일단 그 노드는 방문
//	for (auto i = 0; i < 4; ++i) //4방향을 돌면서
//	{
//		int NX = Dir[i][0];
//		int NY = Dir[i][1];
//		if (NX >= 0 && NX < M && NY >= 0 && NY < N)//map 넘어가는지 Check
//		{
//			if (Crash == false) {//아직 안부쉈으면
//				NodeQ.push(make_pair(NY, NX)); //주변 노드 값 넣고(벽포함)
//			}
//			else //부쉈으면
//			{
//				if(Map[NY][NX]!=true) //벽이 없는곳만 넣어라
//					NodeQ.push(make_pair(NY, NX));
//			}
//		}
//	}
//	int NY = NodeQ.front().first;
//	int NX = NodeQ.front().second;//다음값 재귀
//	NodeQ.pop();
//	if (Crash == false) //안부순 상태면 밑과 같이 진행
//	{
//		if (Map[NY][NX] == true) //벽이 있다면
//		{
//			Map[NY][NX] = false; //일단 부수고
//			Crash = true;
//			BFS(NY, NX, Count + 1, Crash); //부순상태로 다시돌아라
//		}
//		else
//		{
//			BFS(NY, NX, Count + 1, Crash);
//		}
//	}
//	else //이미 부순상태면 재귀나 돌아라
//	{
//		if (Map[NY][NX] != true)
//			BFS(NY, NX, Count + 1, Crash);
//	}
//}
//
//int main()
//{
//	cin >> N >> M;
//	for (auto i = 0; i < N; ++i)
//	{
//		string Wall;
//		cin >> Wall;
//		for (auto j = 0; j < M; ++j)
//		{
//			Map[i][j] = Wall[j]-'0';
//		}
//	}
//	BFS(0, 0, 1,Crash);
//	cout << Min;
//}
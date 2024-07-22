//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int Dir[4][2] = { {0,-1},{1,0},{0,1},{-1,0} };
//int T, N, M, K, x, y;
//bool Map[51][51] = { false };
//bool visit[51][51] = { false };
//queue<int> Results;
//
//
//void Solution(int x, int y)
//{
//	visit[y][x] = true;
//	for (auto i = 0; i < 4; ++i)
//	{
//		int nx = x + Dir[i][0];
//		int ny = y + Dir[i][1];
//		if (nx >= 0 && nx < M && ny >= 0 && ny < N)
//		{
//			if (Map[ny][nx] && !visit[ny][nx])
//				Solution(nx, ny);
//		}
//	}
//}
//int main()
//{
//	cin >> T;
//	for (auto i = 0; i < T; ++i)
//	{
//		cin >> M >> N >> K;
//		memset(visit, false, sizeof(visit));
//		memset(Map, false, sizeof(Map));
//		int Result = 0;
//		for (auto k = 0; k < K; ++k)
//		{
//			int x, y;
//			cin >> x >> y;
//			Map[y][x] = true;
//		}
//		for (auto p = 0; p < N; ++p)
//		{
//			for (auto l = 0; l < M; ++l)
//			{
//				if (false==visit[p][l] && true==Map[p][l])
//				{
//					Solution(l,p);
//					Result++;
//				}
//			}
//		}
//		Results.push(Result);
//	}
//	while (!Results.empty())
//	{
//		cout << Results.front() << endl;
//		Results.pop();
//	}
//}
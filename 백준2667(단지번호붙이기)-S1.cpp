//#include <iostream>
//#include <vector>
//#include <queue>
//#include <string>
//using namespace std;
//
//int N;
//vector<vector<int>> D;
//bool visit[26][26] = { false };
//int Result = 0;
//int Cnt = 0;
//priority_queue<int> Rcnt;
//int Dir[4][2] = { {0,-1},{1,0},{0,1},{-1,0} };
//string B;
//void dfs(int _y, int _x)
//{
//	Cnt++;
//	visit[_y][_x] = true;
//	for (auto i = 0; i < 4; ++i)
//	{
//		int nx = _x + Dir[i][0];
//		int ny = _y + Dir[i][1];
//		if (nx >= 0 && nx < N && ny >= 0 && ny < N)
//		{
//			if (!visit[ny][nx] && D[ny][nx])
//				dfs(ny, nx);
//		}
//	}
//	return;
//}
//int main()
//{
//	cin >> N;
//	D.resize(N);
//	for (auto i = 0; i < N; ++i)
//	{
//		cin >> B;
//		for (auto k = 0; k < N; ++k)
//		{
//			D[k].resize(N);
//			D[i][k] = B[k] - '0';
//		}
//	}
//	for (auto i = 0; i < N; ++i)
//	{
//		for (auto p = 0; p < N; ++p)
//		{
//			if (!visit[i][p] && D[i][p])
//			{
//				dfs(i, p);
//				Rcnt.push(-Cnt);
//				Cnt = 0;
//				++Result;
//			}
//		}
//	}
//	cout << Result << endl;
//	while (!Rcnt.empty())
//	{
//		cout << -Rcnt.top() << endl;
//		Rcnt.pop();
//	}
//}
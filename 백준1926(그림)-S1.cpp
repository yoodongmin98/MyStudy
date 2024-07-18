//#include <iostream>
//#include <queue>
//using namespace std;
//bool Isvisited[501][501];
//int Count = 0;
//priority_queue<int> PQ;
//int n,m,V;
//void dfs(int Y,int X)
//{
//	Count++;
//	Isvisited[Y][X]=false;
//	if (Isvisited[Y+1][X]==true && Y!=n)
//		dfs(Y+1,X);
//	if (Isvisited[Y-1][X]==true && Y!=0)
//		dfs(Y-1,X);
//	if (Isvisited[Y][X-1]==true && X!=0)
//		dfs(Y,X-1);
//	if (Isvisited[Y][X+1]==true && X!=m)
//		dfs(Y,X+1);
//}
//int main()
//{
//	cin >> n >> m;
//	for (auto i = 0; i < n; ++i){
//		for (auto k = 0; k < m; ++k){
//			cin >> V;
//			Isvisited[i][k] = V;
//		}	
//	}
//	for (auto i = 0; i < n; ++i){
//		for (auto k = 0; k < m; ++k){
//			if (Isvisited[i][k] == true) {
//				dfs(i, k);
//				PQ.push(Count);
//				Count = 0;
//			}	
//		}
//	}
//	PQ.size() == 0 ? cout << 0 << "\n" << 0 : (cout << PQ.size() << "\n" << PQ.top());
//}
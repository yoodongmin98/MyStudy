//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//
//vector<pair<vector<int>, int>>Node;
//bool Isvisit[1000001] = { false };
//
//void bfs(int _S) {
//	queue<int> Q;
//	Q.push(_S);
//	Isvisit[_S] = true;
//	Node[_S].second = 1;
//	while (!Q.empty()) {
//		int F = Q.front();
//		Q.pop();
//		for (auto& i : Node[F].first) {
//			if (Isvisit[i] == false && Node[F].second != 0 && Node[i].second != 0) {
//				Isvisit[i] = true;
//				Q.push(i);
//				if (Node[i].second != 0 && Node[F].second != 0) {
//					Node[i].second = Node[F].second + 1;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int N, M, Start;
//	cin >> N >> M;
//	Node.resize(N * M);
//	for (auto i = 0; i < N * M; ++i) {
//		int u;
//		cin >> u;
//		if (2 == u) {
//			Start = i;}
//		if (i != 0 && i % M != 0) {
//			Node[i].first.push_back(i - 1);
//			Node[i].second = u;}
//		if (i == 0 || (i + 1) % M != 0 && i < N * M - 1) {
//			Node[i].first.push_back(i + 1);
//			Node[i].second = u;}
//		if (i + M < N * M) {
//			Node[i].first.push_back(i + M);
//			Node[i].second = u;}
//		if (i - M >= 0) {
//			Node[i].first.push_back(i - M);
//			Node[i].second = u;}
//	}
//	bfs(Start);
//	for (int j = 0; j < N * M; j += M)
//	{
//		for (int k = 0; k < M; ++k) {
//			if (Node[j + k].second != 0 && Isvisit[j + k] == false)
//				cout << "-1" << " ";
//			else if (Node[j + k].second != 0)
//				cout << Node[j + k].second - 1 << " ";
//			else
//				cout << "0" << " ";
//		}
//		cout << "\n";
//	}
//};
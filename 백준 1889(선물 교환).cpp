//#include <iostream>
//#include <vector>
//#include <map>
//#include <queue>
//using namespace std;
//
//
//multimap<pair<int,int>,int> Info;
//vector<int> NumCount;
//queue<int> PreInfo;
//int N;
//int K, P;
//void Solution()
//{
//	int P1=PreInfo.front();
//	PreInfo.pop();
//	int P2 = PreInfo.front();
//	PreInfo.pop();
//
//	Info.erase(make_pair(P1, P2));
//	for (map<pair<int, int>, int >::iterator iter = Info.begin(); iter != Info.end(); ++iter)
//		cout << iter->second << endl;
//}
//
//int main()
//{
//	cin >> N;
//	NumCount.resize(N + 1);
//	for (auto i = 1; i <= N; ++i) {
//		cin >> K >> P;
//		if (NumCount[K] < 2)
//			NumCount[K] += 1;
//		else
//			PreInfo.push(K);
//		if (NumCount[P] < 2)
//			NumCount[P] += 1;
//		else
//			PreInfo.push(P);
//		Info.insert(make_pair(make_pair(K,P), i));
//	}
//	Solution();
//}
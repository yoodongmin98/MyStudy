//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <climits>
//using namespace std;
////이분탐색 문제지만 이상하게 다른 풀이가 해보고싶은 동쪽이
//int N;
//int Min = INT_MAX;
//vector<pair<int,bool>> V;
//priority_queue<int> Result;
//int main()
//{
//	cin >> N;
//	for (auto i = 0; i < N; ++i)
//	{
//		int Num;
//		cin >> Num;
//		if (Num >= 0) {
//			V.push_back(make_pair(Num, true));
//		}
//		else {
//			V.push_back(make_pair(abs(Num), false));
//		}
//	}
//	sort(V.begin(), V.end(),greater<pair<int,bool>>());
//	for (auto i = 0; i < V.size() - 1; ++i)
//	{
//		int A, B;
//		if (V[i].second == true)
//			A=V[i].first;
//		else
//			A=-V[i].first;
//		if (V[i + 1].second == true)
//			B=V[i + 1].first;
//		else
//			B= -V[i + 1].first;
//		int Value = abs(A + B);
//		if (Value <= Min)
//		{
//			if (!Result.empty()) {
//				Result.pop(); Result.pop();
//			}
//			Min = Value;
//			if (V[i].second == true)
//				Result.push(-V[i].first);
//			else
//				Result.push(V[i].first);
//			if (V[i+1].second == true)
//				Result.push(-V[i+1].first);
//			else
//				Result.push(V[i+1].first);
//		}
//	}
//	for (auto i = 0; i < 2; ++i) {
//		cout << -Result.top() << " ";
//		Result.pop();
//	}
//}
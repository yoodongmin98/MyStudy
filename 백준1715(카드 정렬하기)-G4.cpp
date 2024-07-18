//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int T;
//priority_queue<int> PQ;
//int Result = 0;
//void Solution()
//{
//	if (PQ.size() == 1)
//	{
//		return;
//	}
//	while (!PQ.empty())
//	{
//		int A = -PQ.top();
//		PQ.pop();
//		int B = -PQ.top();
//		PQ.pop();
//		if(!PQ.empty())
//			PQ.push(-(A + B));
//		Result += (A + B);
//	}
//}
//int main()
//{
//	cin >> T;
//	for (auto i = 0; i < T; ++i)
//	{
//		int Card;
//		cin >> Card;
//		PQ.push(-Card);
//	}
//	Solution();
//	cout << Result;
//}
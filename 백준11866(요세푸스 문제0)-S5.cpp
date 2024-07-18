//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, K;
//queue<int> Info;
//
//void Solution()
//{
//	while (!Info.empty())
//	{
//		for (auto i = 1; i < K; ++i)
//		{
//			int Front = Info.front();
//			Info.pop();
//			Info.push(Front);
//		}
//		int Pops = Info.front();
//		Info.pop();
//		if (!Info.empty())
//			cout << Pops << ", ";
//		else
//			cout << Pops;
//	}
//}
//int main()
//{
//	cin >> N >> K;
//	for (auto i = 1; i <= N; ++i)
//	{
//		Info.push(i);
//	}
//	cout << "<";
//	Solution();
//	cout << ">";
//}
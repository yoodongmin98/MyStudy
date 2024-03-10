//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N;
//vector<int> Info;
//int Result = 0;
//
////시간초과
//void Solution()
//{
//	for (auto i = 0; i < Info.size(); ++i)
//	{
//		int M = min_element(Info.begin() + i, Info.end()) - Info.begin();
//		int C = 0;
//		for (auto k = i; k < Info.size(); ++k)
//		{
//			if (Info[k] >= Info[i])
//				C++;
//			else
//				k = (int)Info.size() - 1;
//		}
//		if (i < Info.size() - 1)
//		{
//			int Pre = 0;
//			if (Info[M] == 0) {
//				Pre = max(Info[i] * C, (Info[i] - Info[i + 1]) * (M- i-1));
//			}
//			else {
//				Pre = max(Info[i] * C, (Info[i] - Info[i + 1]) * (M - i));
//			}
//			Result = max(Pre, Result);
//		}
//		else
//		{
//			int Pre = Info[i];
//			Result = max(Pre, Result);
//		}
//	}
//}
//int main()
//{
//	cin>> N;
//	for (auto i = 0; i < N; ++i)
//	{
//		int H;
//		cin >> H;
//		Info.push_back(H);
//	}
//	Solution();
//	cout << Result;
//}
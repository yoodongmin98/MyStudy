//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int T, N;
//vector<string> Info;
//void Solution()
//{
//	for (auto i = 0; i < Info.size()-1; ++i)
//	{
//		if (0 == Info[i+1].find(Info[i]))
//		{
//			cout << "NO" << "\n";
//			return;
//		}
//	}
//	cout << "YES"<<"\n";
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cin >> T;
//	for (auto i = 0; i < T; ++i)
//	{
//		cin >> N;
//		Info.clear();
//		for (auto j = 0; j < N; ++j)
//		{
//			string Number;
//			cin >> Number;
//			Info.push_back(Number);
//		}
//		sort(Info.begin(), Info.end());
//		Solution();
//	}
//}
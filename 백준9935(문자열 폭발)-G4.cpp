//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//string message;
//string Bomb;
//string Result;
//void Solution()
//{
//	for(auto i=0; i<message.size(); ++i)
//	{
//		Result += message[i];
//		if (Bomb.back() == message[i] && Result.size()>=Bomb.size())
//		{
//			string Test(Result.end()-Bomb.size(), Result.end());
//			if (Test == Bomb) {
//				Result.erase(Result.end() - Bomb.size(), Result.end());
//			}
//		}
//	}
//	if (0 == Result.size())
//		cout << "FRULA";
//	else
//		cout << Result;
//}
//int main()
//{
//	cin >> message;
//	cin >> Bomb;
//	Solution();
//}

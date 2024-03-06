//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N, M;
//string S;
//vector<string> K;
//int main()
//{
//	string Pair = "I";
//	cin >> N >> M >> S;
//	for (auto i = 0; i < N; ++i)
//	{
//		Pair += "OI";
//	}
//	if (Pair.size() > M) {
//		cout << 0;
//		return 0;
//	}
//	for (auto j = 0; j < S.size() - N*2; ++j)
//	{
//		string C;
//		C += S[j];
//		for (auto p = 0; p < N*2; p+=2)
//		{
//			C += S[j + p+1];
//			C += S[j + p+2];
//		}
//		K.push_back(C);
//	}
//	int Count = count(K.begin(), K.end(), Pair);
//	cout << Count;
//}
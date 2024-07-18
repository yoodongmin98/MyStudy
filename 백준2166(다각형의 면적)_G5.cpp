//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int T;
//vector<pair<double,double>> Info;
//double Result = 0;
//int main()
//{
//	cin >> T;
//	for (auto i = 0; i < T; ++i)
//	{
//		double X;
//		double Y;
//		cin >> X >> Y; 
//		Info.push_back(make_pair(X,Y));
//	}
//	int P1 = 0, P2 = 1;
//	while (P2 < Info.size())
//	{
//		Result += Info[P1].first * Info[P2].second - Info[P2].first * Info[P1].second;
//		P1++; P2++;
//	}
//	Result += Info[P2-1].first * Info[0].second - Info[0].first * Info[P2-1].second;
//	Result = abs(Result)/2;
//	printf("%.1f", Result);
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int Com;
//int Net;
//int n1, n2;
//vector<vector<int>> V;
//int Result = 0;
//bool Visit[101] = { true,false, };
//void Virus(int _Start)
//{
//	for (auto k = 0; k < V[_Start].size(); ++k)
//	{
//		if (false == Visit[V[_Start][k]])
//		{
//			Visit[V[_Start][k]] = true;
//			Result++;
//			Virus(V[_Start][k]);
//		}
//	}
//}
//int main()
//{
//	cin >> Com;
//	V.resize(Com);
//	cin >> Net;
//	for (auto i = 0; i < Net; ++i)
//	{
//		cin >> n1 >> n2;
//		V[n1 - 1].push_back(n2 - 1);
//		V[n2 - 1].push_back(n1 - 1);
//	}
//	Virus(0);
//	cout << Result;
//}
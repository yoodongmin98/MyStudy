//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//using namespace std;
//int main()
//{
//	int N,M;
//	vector<int> V_Budget;
//	cin >> N;
//	for (auto i = 0; i < N; ++i)
//	{
//		int budget;
//		cin >> budget;
//		V_Budget.push_back(budget);
//	}
//	cin >> M;
//	sort(V_Budget.begin(), V_Budget.end(), less<int>());
//	if (M >= accumulate(V_Budget.begin(), V_Budget.end(), 0))
//	{
//		cout << *max_element(V_Budget.begin(), V_Budget.end());
//	}
//	else
//	{
//		int Size = V_Budget.size();
//		for (auto i = 0; i < V_Budget.size(); ++i)
//		{
//			if ((M / Size) >= V_Budget[i])
//			{
//				M -= V_Budget[i]; Size--;
//			}
//			else
//			{
//				cout << (M / Size);
//				break;
//			}
//		}
//	}
//}

//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<int> solution(vector<int> prices) {
//	vector<int> R;
//	for (auto i = 0; i < prices.size(); ++i)
//	{
//		int Value = prices[i];
//		int index = 1 ,second = 0;
//		bool Check = false;
//		while (i+index<prices.size())
//		{
//			if (Value <= prices[i + index])
//			{
//				Check = true;
//				second++; index++;
//			}
//			else
//			{
//				if (Check == false)
//					second++;
//				break;
//			}
//		}
//		R.push_back(second);
//	}
//	return R;
//}
//
//int main()
//{
//	vector<int> asd = { 1, 2, 3, 2, 3 };
//	vector<int>Result = solution(asd);
//	int a = 0;
//}
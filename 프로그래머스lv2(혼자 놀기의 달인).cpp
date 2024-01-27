//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool Isvisited[101] = { false };
//int solution(vector<int> cards) 
//{
//	vector<int> R;
//	int index = 0;
//	int Count = 1;
//	while (true)
//	{
//		for (auto i = 1; i <= cards.size(); ++i)
//		{
//			if (false == Isvisited[i])
//			{
//				index = i; break;
//			}
//			else if(i== cards.size())
//			{
//				sort(R.begin(), R.end(),greater<int>());
//				return R.size() < 2 ? 0 : R[0] * R[1];
//			}
//		}
//		do
//		{
//			Isvisited[index] = true;
//			if (false == Isvisited[cards[(index-1)]])
//			{
//				index = cards[(index-1)]; Count++;
//			}
//			else
//			{
//				R.push_back(Count); Count = 1;
//			}
//		} while (false == Isvisited[index]);
//	}
//}
//
//int main()
//{
//    vector<int> Card = { 8,6,3,7,2,5,1,4 };
//    int Result=solution(Card);
//	int a = 0;
//}
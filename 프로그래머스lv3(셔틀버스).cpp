//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//int n = 0;
//int m = 0;
//int t = 0;
//string solution(int n, int t, int m, vector<string> timetable) 
//{
//	sort(timetable.begin(), timetable.end());
//	for (auto i = 0; i < n; ++i)//몇번
//	{
//		for (auto k = 0; k < m; ++k)//몇명태우냐
//		{
//			if (stoi(timetable[k]) < 9 && timetable.size() != 0)
//			{
//				timetable.erase(timetable.begin()+k);
//				k--;
//				if (timetable.size() == 0)
//				{
//					return "09:00";
//				}
//			}//ㅈㄴ어렵네 ㅅㅂ!!!!!!!!!!!!!
//		}
//	}
//}
//void Setntm(int _n, int _t, int _m)
//{
//	n = _n;
//	t = _t;
//	m = _m;
//}
//int main()
//{
//	vector<string> Time = { "09:10", "09:09", "08:00" };
//	Setntm(2,10,2);
//	string Test=solution(n,t,m, Time);
//	cout << Test << endl;
//}
//#include <iostream>
//#define Max_N 10000
//using namespace std;
//
//bool Visit[10002] = { false };
//
//void SelfNumber(int _Start)
//{
//	if (_Start > Max_N)
//		return;
//	int Save = _Start;
//	while (_Start > 0)
//	{
//		Save += (_Start % 10);
//		_Start /= 10;
//	}
//	Save <= Max_N ? Visit[Save] = true : 0;
//	SelfNumber(Save);
//}
//int main()
//{
//	for (int i = 1; i <= Max_N; ++i)
//	{
//		if (!Visit[i])
//		{
//			cout << i << endl;
//			SelfNumber(i);
//		}
//	}
//}
//#include <iostream>
//
//
//
//using namespace std;
//
// 
//
// 반례 : 3003일때 601이 아니라 1001이라고나옴(3먼저 나눈거 ㅇㅇ)
// 
//int N;
//int Result = 0;
//int main()
//{
//	cin >> N;
//	while (1)
//	{
//		if (N % 5 == 0)
//		{
//			Result += N / 5;
//			break;
//		}
//		if (N % 3 == 0)
//		{
//			Result += N / 3;
//			break;
//		}
//
//		if (N < 5)
//			N -= 3;
//		else
//			N -= 5;
//		Result++;
//		if (N < 0)
//		{
//			Result = -1;
//			break;
//		}
//		
//	}
//	cout << Result;
//}
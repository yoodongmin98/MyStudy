//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	//8을 넘는 가장 짧은 수열을 구해보자
//	vector<int> P_Array = { 2,5,2,1,1,5,2,1,6,2};
//	priority_queue<int> Q_Count; //길이를 담을 우선순위 큐
//	int P_Start = 0;
//	int P_End = 0;
//	int Sum = 0; //Start부터 End까지의 합
//	while (P_End <= P_Array.size())
//	{
//		if (Sum >= 8) 
//		{
//			Q_Count.push(-(P_End+-P_Start));
//			Sum -= P_Array[P_Start];
//			P_Start++;
//		}
//		else
//		{
//			Sum += P_Array[P_End];
//			P_End++;
//		}
//		if (Sum < 8 && P_End == P_Array.size())
//		{
//			break;
//		}
//	}
//	cout << -Q_Count.top() << endl;
//}
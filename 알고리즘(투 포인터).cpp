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

//여기다가 알고리즘 조합예시 적어놓기.

//누적합 경우의수 = 1 ,2인덱스부터 시작해서 넘치면 left++ 적으면 right++ 맞으면 Count++하고 경우에따라 투 포인터 옮겨주기
//두개의 경우의수 = 배열을"정렬"한 후left=0 start=arr.size()-1에서 시작 왼쪽 오른쪽 옮겨가면서 맞는 값 찾기

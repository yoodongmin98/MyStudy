//#include <iostream>
//using namespace std;
//
//int N;
//int Count;
//int main()
//{
//	cin >> N;
//	int left = 1, right = 2;
//	
//	unsigned int Sum = left;
//	while (left<=N)
//	{
//		if (Sum < N) {
//			Sum += right;
//			right++;
//		}
//		else if (Sum > N) {
//			Sum -= left;
//			left++;
//		}
//		else {
//			Count++;
//			Sum -= left;
//			left++;
//		}
//	}
//	cout << Count;
//}
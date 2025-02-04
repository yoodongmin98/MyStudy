//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//int N;
//std::vector<int> Arr;
//int main()
//{
//	cin >> N;
//	Arr.resize(N);
//	for (auto i = 0; i < N; ++i)
//	{
//		cin >> Arr[i];
//	}
//	sort(Arr.begin(), Arr.end(), less<int>()); //내림차순 정렬
//	int left = 0, right = Arr.size() - 1, index = 0, Count = 0;
//
//	while (index < Arr.size())
//	{
//		while (left < right)
//		{
//			if (left == index)
//			{
//				left++;
//				continue;
//			}
//			if (right == index)
//			{
//				right--;
//				continue;
//			}
//			int Sum = Arr[left] + Arr[right];
//			if (Sum < Arr[index])
//				left++;
//			else if (Sum > Arr[index])
//				right--;
//			else if (Sum == Arr[index])
//			{
//				Count++;
//				index++;
//				if (index >= Arr.size())
//					break;
//				left = 0;
//				right = Arr.size() - 1;
//			}
//		}
//		index++;
//		left = 0;
//		right = Arr.size() - 1;
//	}
//
//	cout << Count;
//}
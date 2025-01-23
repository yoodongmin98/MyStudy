//#include <iostream>
//#include <vector>
//#include <algorithm>
//int N, M;
//using namespace std;
//
//std::vector<int> Arr;
//int main()
//{
//	cin >> N >> M;
//	Arr.resize(N);
//	for (auto i = 0; i < N; ++i)
//	{
//		cin >> Arr[i];
//	}
//	int left = 0, right = N-1, Count = 0;
//	sort(Arr.begin(), Arr.end(), less<int>());
//	while (left < right)
//	{
//		if (Arr[left] + Arr[right] == M)
//		{
//			Count++;
//			left++;
//			right--;
//		}
//		else if (Arr[left] + Arr[right] < M)
//			left++;
//		else if (Arr[left] + Arr[right] > M)
//			right--;
//	}
//	cout << Count;
//}
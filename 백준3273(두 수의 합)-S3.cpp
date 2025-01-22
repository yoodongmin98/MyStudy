//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int N, X, Count = 0;
//std::vector<int> Array;
//int main()
//{
//	std::cin >> N;
//	Array.resize(N);
//	for (auto i = 0; i < N; ++i)
//	{
//		std::cin >> Array[i];
//	}
//	std::cin >> X;
//	std::sort(Array.begin(), Array.end(), std::less<int>());
//	int left = 0, right = N - 1;
//	while (left < right)
//	{
//		if (Array[left] + Array[right] > X)
//			right--;
//		else if (Array[left] + Array[right] < X)
//			left++;
//		else
//		{
//			Count++; right--; left++;
//		}
//	}
//	std::cout << Count;
//}
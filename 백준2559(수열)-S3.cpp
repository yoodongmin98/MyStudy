//#include <iostream>
//#include <vector>
//
//
//int N, K;
//std::vector<int> TempArray;
//int main()
//{
//	std::cin >> N >> K;
//	TempArray.resize(N);
//	for (auto i = 0; i < N; ++i)
//	{
//		std::cin >> TempArray[i];
//	}
//	int current_sum = 0;
//	for (int i = 0; i < K; ++i)
//	{
//		current_sum += TempArray[i];
//	}
//	int max_sum = current_sum;
//	for (auto i = K; i < N; ++i)
//	{
//		current_sum = current_sum - TempArray[i - K] + TempArray[i];
//		max_sum = std::max(max_sum, current_sum);
//	}
//	std::cout << max_sum;
//}

//슬라이딩 윈도우
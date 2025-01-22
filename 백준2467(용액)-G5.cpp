//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//int main() {
//    int N;
//    std::cin >> N;
//
//    std::vector<int> Arr(N);
//    for (int i = 0; i < N; ++i) 
//        std::cin >> Arr[i];
//
//    std::sort(Arr.begin(), Arr.end());
//
//    int left = 0, right = N - 1;
//    int Maxs = 2147483647;
//    int R1 = 0, R2 = 0;
//
//    while (left < right) 
//    {
//        int sum = Arr[left] + Arr[right];
//        if (std::abs(sum) < Maxs) 
//        {
//            Maxs = std::abs(sum);
//            R1 = Arr[left];
//            R2 = Arr[right];
//        }
//        if (sum < 0) 
//            ++left;
//        else 
//            --right;
//    }
//    std::cout << R1 << " " << R2 << "\n";
//}

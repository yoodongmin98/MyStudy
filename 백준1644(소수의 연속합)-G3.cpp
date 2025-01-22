//#include <iostream>
//#include <math.h>
//#include <vector>
//
//bool Prime[4000001] = { false };
//int N;
//int Count = 0;
//
//int main()
//{
//    std::cin >> N;
//    Prime[0] = true;
//    Prime[1] = true;
//
//    for (auto i = 2; i < sqrt(4000000); ++i)
//    {
//        if (Prime[i] == false)
//        {
//            for (auto k = i * 2; k < 4000000; k += i)
//                Prime[k] = true;
//        }
//    }
//
//    std::vector<int> primes;
//    for (int i = 2; i <= 4000000; ++i)
//    {
//        if (!Prime[i]) {
//            primes.push_back(i);
//        }
//    }
//
//    int Left = 0, Right = 0, Sum = 0;
//
//    while (Right < primes.size())
//    {
//        for (auto i = Left; i < Right; ++i)
//            Sum += primes[i];
//        if (Sum < N)
//        {
//            Right++;
//        }
//        else if (Sum > N)
//        {
//            Left++;
//        }
//        else
//        {
//            Count++;
//            Left++;
//            Right = Left;
//        }
//        Sum = 0;
//    }
//    std::cout << Count;
//}

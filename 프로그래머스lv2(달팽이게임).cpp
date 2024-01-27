//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<int> solution(int n) {
//    vector<int> Result;
//    int index = 0;
//    int Size = 0;
//    int Count = n;
//    while (Count !=0)
//    {
//        Size += Count; Count --;
//    }
//    Result.resize(Size);
//    Size = 1;
//    while (true)
//    {
//        if (Size >= n)
//        {
//            Result[index] = Size;
//            Size++; index++;
//        }
//        else if (Size < n)
//        {
//            Result[index] = Size;
//            index += Size;
//            Size++;
//        }
//      
//    }
//    return Result;
//}
//
//int main()
//{
//    int n = 5;
//    vector<int> Test=solution(n);
//    for (const auto& v : Test)
//    {
//        cout << v << " ";
//    }
//}
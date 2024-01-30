//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int Count = 0;
//int Index = 0;
//int Result = 0;
//int solution(vector<string> want, vector<int> number, vector<string> discount) {
//    while (true)
//    {
//        if (Index + 10 > discount.size())
//            break;
//        for (auto i = 0; i < want.size(); ++i)
//        {
//            if (number[i] > count(discount.begin() + Index, discount.begin() + Index + 10, want[i])) {
//                Index++;  Count = 0; break;
//            }
//            else {
//                Count++;
//            }
//        }
//        if (Count == want.size()) {
//            Result += 1; Index++;
//        }
//        Count = 0;
//    }   
//    return Result;
//}
//
//int main()
//{
//    vector<string> Want = { "banana", "apple", "rice", "pork", "pot" };
//    vector<int> Number = { 3, 2, 2, 2, 1 };
//    vector<string> Discount = { "apple", "banana", "rice", "apple", "pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana", "chicken", "apple" };
//    solution(Want, Number, Discount);
//}
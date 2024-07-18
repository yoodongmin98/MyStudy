//#include <iostream>
//#include <string>
//#include <set>
//using namespace std;
//
//int N;
//string D;
//int Result = 0;
//
//void Solution(string _D)
//{
//
//    set<char> Findset;
//    char Before = 0;
//    for (int i = 0; i < _D.size(); ++i)
//    {
//        if (Before != _D[i])
//        {
//            if (Findset.find(_D[i]) != Findset.end())
//            {
//                return;
//            }
//            else
//            {
//                Findset.insert(_D[i]);
//            }
//        }
//        Before = _D[i];
//    }
//    Result++;
//}
//
//int main()
//{
//    cin >> N;
//    for (int i = 0; i < N; ++i)
//    {
//        cin >> D;
//        Solution(D);
//    }
//    cout << Result;
//}
////unique+erase ->O(N log N)
////set -> O(N logN) (삽입)
////Unordered_set ->O(N) (제거)
//
////중복 처리(중복된 값 제거)
////1.순서가 보장되지 않아도 되는경우
//// std::set을 이용하거나, 배열을 정렬한 후 unique+erase 함수를 이용
////2. 순서가 보장되어야하는경우
////unordered_set으로 삽입 O(N log N) 제거O(N)
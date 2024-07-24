//#include <iostream>
//#include <set>
//using namespace std;
//
//int N;
//multiset<int> S;
//multiset<int>::iterator mid = S.begin();
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
// 
//    for (int i = 0; i < N; ++i) {
//        int num;
//        cin >> num;
//        S.insert(num);
//
//        if (i == 0) 
//            mid = S.begin();
//        else 
//        {
//            if (num < *mid) {
//                if (S.size() % 2 == 0)
//                    mid--;
//            }
//            else {
//                if (S.size() % 2 == 1)
//                    mid++;
//            }
//        }
//        cout << *mid << "\n";
//    }
//}

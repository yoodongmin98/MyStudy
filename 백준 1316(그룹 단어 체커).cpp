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
////set -> O(N logN) (����)
////Unordered_set ->O(N) (����)
//
////�ߺ� ó��(�ߺ��� �� ����)
////1.������ ������� �ʾƵ� �Ǵ°��
//// std::set�� �̿��ϰų�, �迭�� ������ �� unique+erase �Լ��� �̿�
////2. ������ ����Ǿ���ϴ°��
////unordered_set���� ���� O(N log N) ����O(N)
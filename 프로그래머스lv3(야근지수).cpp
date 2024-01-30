//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <numeric>
//#include <queue>
//using namespace std;
//
//long long solution(int n, vector<int> works) {
//    long long Result = 0;
//    priority_queue<int> PQ(works.begin(), works.end());
//    int Value = accumulate(works.begin(), works.end(), 0);
//    if (Value < n)
//        return 0;
//    while (n > 0)
//    {
//        int Value = PQ.top();
//        PQ.pop();
//        PQ.push(Value-1);
//        --n;
//    }
//    while(!PQ.empty())
//    {
//        Result += pow(PQ.top(), 2);
//        PQ.pop();
//    }
//    return Result;
//}
//
//int main()
//{
//    int n = 4;
//    vector<int> V = { 4,3,3 };
//    solution(n, V);
//}
//#include <iostream>
//
//
//int memo[100010][3];
//void Solution()
//{
//    memo[0][0] = memo[0][2] = 1;
//    memo[0][1] = 0;
//    for (int i = 1; i < 100001; i++) {
//        memo[i][0] = memo[i - 1][0] + memo[i - 1][1] * 6 + memo[i - 1][2] * 3;
//        memo[i][2] = memo[i - 1][2] * 10;
//        memo[i][1] = (memo[i - 1][0] + memo[i - 1][1] + memo[i - 1][2]) * 3 + memo[i - 1][1];
//    }
//
//}
//
//int main()
//{
//    Solution();
//}

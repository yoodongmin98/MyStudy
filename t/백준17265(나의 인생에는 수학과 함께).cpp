//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int n;
//vector<vector<char>> vec;
//
//int dx[] = { 1, 0 };
//int dy[] = { 0, 1 };
//
//int Max = INT_MIN;
//int Min = INT_MAX;
//
//void dfs(int a, int b, char oper, int Result)
//{
//    if (a == n - 1 && b == n - 1)
//    {
//        Max = max(Max, Result);
//        Min = min(Min, Result);
//        return;
//    }
//
//    for (int i = 0; i < 2; i++)
//    {
//        int nx = a + dx[i];
//        int ny = b + dy[i];
//
//        if (0 > nx || nx >= n) continue;
//        if (0 > ny || ny >= n) continue;
//
//        if (vec[nx][ny] >= '0' && vec[nx][ny] <= '5')
//        {
//            if (oper == '*')
//            {
//                dfs(nx, ny, oper, Result * int(vec[nx][ny] - '0'));
//            }
//            else if (oper == '+')
//            {
//                dfs(nx, ny, oper, Result + int(vec[nx][ny] - '0'));
//            }
//            else if (oper == '-')
//            {
//                dfs(nx, ny, oper, Result - int(vec[nx][ny] - '0'));
//            }
//        }
//        else
//        {
//            dfs(nx, ny, vec[nx][ny], Result);
//        }
//    }
//}
//
//
//int main()
//{
//    cin >> n;
//    vec.resize(n, vector<char>(n));
//    for (auto& i : vec)    
//        for (auto& j : i) 
//            cin >> j;
//    dfs(0, 0, '*', int(vec[0][0] - '0'));
//    cout << Max << " " << Min;
//
//    return 0;
//}

//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//
//int N, M;
//bool Map[101][101] = { false };
//bool Isvisit[101][101] = { false };
//int Dir[4][2] = { {0,-1},{1,0},{0,1},{-1,0} };
//int Result = 1000;
//
//void bfs(int _y, int _x)
//{
//    queue<pair<int, int>> q;
//    q.push({ _y, _x });
//    Isvisit[_y][_x] = true;
//
//    int level = 1;
//    while (!q.empty()) {
//        int size = q.size();  
//        for (int i = 0; i < size; ++i) {
//            int curY = q.front().first;
//            int curX = q.front().second;
//            q.pop();
//
//            if (curY == (N - 1) && curX == (M - 1)) {
//                Result = level;
//                return;
//            }
//
//            for (auto j = 0; j < 4; ++j) {
//                int nx = curX + Dir[j][0];
//                int ny = curY + Dir[j][1];
//
//                if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
//                    if (!Isvisit[ny][nx] && Map[ny][nx]) {
//                        Isvisit[ny][nx] = true;
//                        q.push({ ny, nx });
//                    }
//                }
//            }
//        }
//        level++; 
//    }
//}
//
//int main()
//{
//    cin >> N >> M;
//    for (auto i = 0; i < N; ++i)
//    {
//        string Input;
//        cin >> Input;
//        for (auto k = 0; k < M; ++k)
//        {
//            Map[i][k] = Input[k] - '0';
//        }
//    }
//    bfs(0, 0);
//    cout << Result;
//    return 0;
//}

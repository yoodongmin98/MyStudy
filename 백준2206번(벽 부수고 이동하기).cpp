//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int Dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
//int N, M;
//int visited[1000][1000][2];
//int BFS(int _X, int _Y, vector<string>& Map) {
//    queue<pair<pair<int, int>, int>> Q;
//    Q.push({ {0,0},1 });
//    visited[0][0][1] = 1;
//    while (!Q.empty()) {
//        int X = Q.front().first.first;
//        int Y = Q.front().first.second;
//        int Wall = Q.front().second;
//        Q.pop();
//        if (X == N - 1 && Y == M - 1) {
//            return visited[X][Y][Wall];
//        }
//        for (int i = 0; i < 4; i++) {
//            int NX = X + Dir[i][0];
//            int NY = Y + Dir[i][1];
//            if (NX >= 0 && NX < N && NY >= 0 && NY < M) {
//                if (Map[NX][NY] == '1' && Wall) {
//                    Q.push({ {NX,NY} ,0 });
//                    visited[NX][NY][Wall - 1] = visited[X][Y][Wall] + 1;
//                }
//                else if (Map[NX][NY] == '0' && visited[NX][NY][Wall] == 0) {
//                    Q.push({ {NX,NY},Wall });
//                    visited[NX][NY][Wall] = visited[X][Y][Wall] + 1;
//                }
//            }
//        }
//    }
//    return -1;
//}
//int main() {
//    cin >> N >> M;
//    vector<string> Map(N);
//    for (int i = 0; i < N; i++) {
//        cin >> Map[i];
//    }
//    cout << BFS(0, 0, Map);
//}
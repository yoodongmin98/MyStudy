//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int Dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} }; //늘 쓰는 그 4방향
//int N, M;
//int visited[1000][1000][2]; //벽 부쉈는지를 확인하기위한 3차원배열
//int BFS(int _X, int _Y, vector<string>& Map) {
//    queue<pair<pair<int, int>, int>> Q;
//    Q.push({ {0,0},1 });
//    visited[0][0][1] = 1; //시작지점은 거리가1
//    while (!Q.empty()) {
//        int X = Q.front().first.first;
//        int Y = Q.front().first.second;
//        int Wall = Q.front().second;
//        Q.pop();
//        if (X == N - 1 && Y == M - 1) { //도착했다면 return
//            return visited[X][Y][Wall];
//        }
//        for (int i = 0; i < 4; i++) { //늘 도는 그 4방향
//            int NX = X + Dir[i][0];
//            int NY = Y + Dir[i][1];
//            if (NX >= 0 && NX < N && NY >= 0 && NY < M) { //늘 검사하는 그 index
//                //벽이 있으면서 아직 안부쉈다면
//                if (Map[NX][NY] == '1' && Wall) {
//                    //일단 뿌셔뿌셔
//                    Q.push({ {NX,NY} ,0 });
//                    //뿌셔버린 배열로 검사검사
//                    visited[NX][NY][Wall - 1] = visited[X][Y][Wall] + 1;
//                }
//                //돌고있는데 벽이없고 방문하지 않았을 때
//                else if (Map[NX][NY] == '0' && visited[NX][NY][Wall] == 0) {
//                    Q.push({ {NX,NY},Wall });
//                    //지나갑니다(전index에서 1증가(거리1증가)
//                    visited[NX][NY][Wall] = visited[X][Y][Wall] + 1;
//                }
//            }
//        }
//    }
//    //Q가 비었는데 아직 도착을 하지 못했다면
//    return -1; //그건 갈 수가 없는 것입니다요.
//}
//int main() {
//    cin >> N >> M;
//    vector<string> Map(N);
//    for (int i = 0; i < N; i++) {
//        cin >> Map[i];
//    }
//    cout << BFS(0, 0, Map);
//}
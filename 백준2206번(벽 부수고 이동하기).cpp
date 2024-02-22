//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int Dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} }; //�� ���� �� 4����
//int N, M;
//int visited[1000][1000][2]; //�� �ν������� Ȯ���ϱ����� 3�����迭
//int BFS(int _X, int _Y, vector<string>& Map) {
//    queue<pair<pair<int, int>, int>> Q;
//    Q.push({ {0,0},1 });
//    visited[0][0][1] = 1; //���������� �Ÿ���1
//    while (!Q.empty()) {
//        int X = Q.front().first.first;
//        int Y = Q.front().first.second;
//        int Wall = Q.front().second;
//        Q.pop();
//        if (X == N - 1 && Y == M - 1) { //�����ߴٸ� return
//            return visited[X][Y][Wall];
//        }
//        for (int i = 0; i < 4; i++) { //�� ���� �� 4����
//            int NX = X + Dir[i][0];
//            int NY = Y + Dir[i][1];
//            if (NX >= 0 && NX < N && NY >= 0 && NY < M) { //�� �˻��ϴ� �� index
//                //���� �����鼭 ���� �Ⱥν��ٸ�
//                if (Map[NX][NY] == '1' && Wall) {
//                    //�ϴ� �ѼŻѼ�
//                    Q.push({ {NX,NY} ,0 });
//                    //�ѼŹ��� �迭�� �˻�˻�
//                    visited[NX][NY][Wall - 1] = visited[X][Y][Wall] + 1;
//                }
//                //�����ִµ� ���̾��� �湮���� �ʾ��� ��
//                else if (Map[NX][NY] == '0' && visited[NX][NY][Wall] == 0) {
//                    Q.push({ {NX,NY},Wall });
//                    //�������ϴ�(��index���� 1����(�Ÿ�1����)
//                    visited[NX][NY][Wall] = visited[X][Y][Wall] + 1;
//                }
//            }
//        }
//    }
//    //Q�� ����µ� ���� ������ ���� ���ߴٸ�
//    return -1; //�װ� �� ���� ���� ���Դϴٿ�.
//}
//int main() {
//    cin >> N >> M;
//    vector<string> Map(N);
//    for (int i = 0; i < N; i++) {
//        cin >> Map[i];
//    }
//    cout << BFS(0, 0, Map);
//}
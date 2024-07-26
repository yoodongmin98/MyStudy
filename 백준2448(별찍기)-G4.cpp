//#include <iostream>
//#include <vector>
//
//#define Star '*'
//using namespace std;
//
//void PrintStar(vector<string>& pattern, int x, int y, int size) {
//    if (size == 3) {
//        for (int i = 0; i < 5; ++i) {
//            pattern[y + 2][x - 2 + i] = Star;
//        }
//        pattern[y + 1][x - 1] = Star;
//        pattern[y + 1][x + 1] = Star;
//        pattern[y][x] = Star;
//        return;
//    }
//    int half = size / 2;
//    PrintStar(pattern, x, y, half);
//    PrintStar(pattern, x - half, y + half, half);
//    PrintStar(pattern, x + half, y + half, half);
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    vector<string> pattern(n, string(2 * n - 1, ' '));
//
//    PrintStar(pattern, n - 1, 0, n);
//    for (const string& line : pattern) {
//        cout << line << endl;
//    }
//}

//#include <iostream>
//#include <vector>
//#include <string>
//
//int N, M;
//std::vector<int> A, B;
//
////��±��� �����ؼ� �ð��ʰ��� ���ؾ��ϴ� ���� ������ �����α���
//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    std::cin >> N >> M;
//    A.resize(N);
//    B.resize(M);
//
//    for (int i = 0; i < N; ++i) {
//        std::cin >> A[i];
//    }
//    for (int j = 0; j < M; ++j) {
//        std::cin >> B[j];
//    }
//
//    int Ap = 0, Bp = 0;
//    std::string output;
//
//    while (Ap < N && Bp < M) {
//        if (A[Ap] <= B[Bp]) {
//            output += std::to_string(A[Ap++]) + " ";
//        }
//        else {
//            output += std::to_string(B[Bp++]) + " ";
//        }
//    }
//
//    while (Ap < N) {
//        output += std::to_string(A[Ap++]) + " ";
//    }
//
//    while (Bp < M) {
//        output += std::to_string(B[Bp++]) + " ";
//    }
//    std::cout << output;
//    return 0;
//}

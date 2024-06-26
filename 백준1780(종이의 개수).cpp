//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int N;
//int Procession[2200][2200];
//int Re_M = 0, Re_Z = 0, Re_P = 0;
//
//void CountCheck(int Pro, int M = 0, int Z = 0, int P = 0)
//{
//	if (M || - 1 == Pro)
//		Re_M++;
//	if (Z || 0 == Pro)
//		Re_Z++;
//	if (P || 1 == Pro)
//		Re_P++;
//}
//void div_conq(int y, int x, int n)
//{
//	if (1 == n) {
//		CountCheck(Procession[y][x]);
//		return;
//	}
//	int minus_p = 0, zero_p = 0, plus_p = 0;
//	int div_samp = n / 3;
//	for (auto i = y; i < y+n; ++i){
//		for (auto j = x; j < x + n; ++j){
//			switch (Procession[i][j]){
//			case -1:{
//				++minus_p; break;
//			}
//			case 0: {
//				++zero_p; break;
//			}
//			case 1: {
//				++plus_p; break;
//			}
//			}
//		}
//	}
//	if (minus_p == n * n || zero_p == n * n || plus_p == n * n) {
//		CountCheck(-2,minus_p, zero_p, plus_p);
//		return;
//	}
//	else
//	{
//		for (auto p = y; p < y+n; p += div_samp) {
//			for (auto k = x; k < x+n; k += div_samp) {
//				div_conq(p, k, div_samp);
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> N;
//	memset(Procession, -2, sizeof(Procession));
//	for (auto i = 0; i < N; ++i)
//	{
//		for (auto j = 0; j < N; ++j)
//		{
//			scanf("%d", &Procession[i][j]);
//		}
//	}
//	div_conq(0,0,N);
//	cout << Re_M << endl << Re_Z << endl << Re_P;
//}
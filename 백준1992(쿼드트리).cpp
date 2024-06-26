//#include <iostream>
//#include <cstring> 
//using namespace std;
//
//int QT_Map[65][65];
//void div_conq(int x, int y,int n)
//{
//	if (1 == n) {
//		cout << QT_Map[x][y];
//		return;
//	}
//	int tmp_cnt = 0;
//	for (auto i = x; i < x + n; ++i){
//		for (auto j = y; j < y + n; ++j){
//			if (QT_Map[i][j])
//				tmp_cnt++;
//		}
//	}
//	if (!tmp_cnt) cout << "0";
//	else if (tmp_cnt == n * n) cout << "1";
//	else{
//		cout << "(";
//		int half = n / 2;
//		div_conq(x, y, half);
//		div_conq(x, y + half, half);
//		div_conq(x+half, y, half);
//		div_conq(x + half, y + half, half);
//		cout << ")";
//	}
//	return;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	memset(QT_Map, 0, sizeof(QT_Map));
//	for (auto i = 0; i < n; ++i) {
//		for (auto j = 0; j < n; ++j){
//			scanf("%1d", &QT_Map[i][j]);
//		}
//	}
//	div_conq(0,0,n);
//}
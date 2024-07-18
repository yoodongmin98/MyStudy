//#include <iostream>
//#include <queue>
//using namespace std;
//
//char Map[12][6];
//bool Isvisit[12][6] = { false };
//int Dir[4][2] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//int Count = 0;
//int Result = 0;
//bool CycleCheck = false;
//char Save = ' ';
//bool BreakCheck = false;
//vector<pair<int, int>> PreIndex;
//void dfs(int Y, int X)
//{
//	if (X > 5 || X < 0)
//		return;
//	if (Y > 11 || Y < 0)
//		return;
//	Count++;
//	Isvisit[Y][X] = true;
//	Save = Map[Y][X];
//	PreIndex.push_back(make_pair(Y, X));
//	Map[Y][X] = '.';
//	for (const auto V : Dir)
//	{
//		if (Map[Y + V[1]][X + V[0]] == Save) {
//				dfs(Y + V[1], X + V[0]);
//		}
//	}
//	Isvisit[Y][X] = false;
//}
//void Move()
//{
//	queue<char> Q;
//	int R = 0, G = 0, B = 0, P = 0, y = 0;
//	for (auto X = 0; X < 6 ;++X)
//	{
//		for (auto Y = 11; Y >= 0; --Y)
//		{
//			if (Map[Y][X] != '.') {
//				Q.push(Map[Y][X]);
//				switch (Map[Y][X]) {
//				case 'R':{
//					R++; break;
//				}
//				case 'G': {
//					G++; break;
//				}
//				case 'B': {
//					B++; break;
//				}
//				case 'P': {
//					P++; break;
//				}
//				case 'Y': {
//					y++; break;
//				}
//				}
//				Map[Y][X] = '.';
//			}
//		}
//		size_t QSize = Q.size();
//		int Index = 11;
//		for (auto i = 0; i < QSize; ++i)
//		{
//			Map[Index][X] = Q.front();
//			Q.pop(); Index--;
//		}
//	}
//	if ((R < 4 && G < 4 && B < 4 && P < 4 && y < 4)|| CycleCheck==false)
//		BreakCheck = true;
//}
//void PreCheck()
//{
//	if (Count < 4) {
//		for (auto i = 0; i < PreIndex.size(); ++i)
//		{
//			Map[PreIndex[i].first][PreIndex[i].second] = Save;
//		}
//	}
//	else {
//		if (false == CycleCheck) {
//			CycleCheck = true;
//			Result += 1;
//		}
//	}
//}
//void Solution()
//{
//	while (true)
//	{
//		for (auto i = 0; i < 12; ++i)
//		{
//			for (auto j = 0; j < 6; ++j)
//			{
//				if (Map[i][j] != '.' && false == Isvisit[i][j]){
//					dfs(i, j);
//					PreCheck();
//				}
//				Count = 0;
//				PreIndex.clear();
//			}
//		}
//		Move();
//		CycleCheck = false;
//		if (true == BreakCheck)
//			break;
//	}
//}
//int main()
//{
//	for (auto i = 0; i < 12; ++i)
//	{
//		for (auto j = 0; j < 6; ++j)
//		{
//			char A;
//			cin >> A;
//			Map[i][j] = A;
//		}
//	}
//	Solution();
//	cout << Result;
//}
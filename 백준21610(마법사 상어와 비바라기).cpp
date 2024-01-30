//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//using namespace std;
//
//int N, M;
//vector<vector<int>> Map;
//vector<pair<int, int>> Info;
//int Dir[8][2] = { {-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1}};
//vector<pair<int,int>> Fog;
//int Result = 0;
//void Move(int Phase)
//{
//	for (auto i = 0; i < Fog.size(); ++i)
//	{
//		#define FX Fog[i].first
//		#define FY Fog[i].second
//		FX += (Info[Phase].second*Dir[Info[Phase].first-1][0]);
//		if (FX < 0) {
//			FX %= N;
//			if (FX<0) {FX += N;}
//		}
//		else if (FX>=N) {FX %= N;}
//		FY += (Info[Phase].second*Dir[Info[Phase].first-1][1]);
//		if (FY < 0) {
//			FY %= N;
//			if (FY < 0) {FY += N;}
//		}
//		else if (FY >= N) {FY %= N;}
//	}
//	for (auto i = 0; i < Fog.size(); ++i){
//		Map[FY][FX] += 1;
//	}
//	for (auto i = 0; i < Fog.size(); ++i)
//	{
//		if (FY + Dir[1][1] < N && FX + Dir[1][0] < N
//			&& FY + Dir[1][1]>=0 && FX + Dir[1][0]>=0
//			&& Map[FY + Dir[1][1]][FX + Dir[1][0]] != 0)
//			Map[FY][FX] += 1;
//		if (FY + Dir[3][1] < N && FX + Dir[3][0] < N
//			&&FY + Dir[3][1]>=0 && FX + Dir[3][0] >=0
//			&& Map[FY + Dir[3][1]][FX + Dir[3][0]] != 0)
//			Map[FY][FX] += 1;
//		if (FY + Dir[5][1] < N && FX + Dir[5][0] < N
//			&& FY + Dir[5][1]>=0 && FX + Dir[5][0]>=0
//			&& Map[FY + Dir[5][1]][FX + Dir[5][0]] != 0)
//			Map[FY][FX] += 1;
//		if (FY + Dir[7][1] < N && FX + Dir[7][0] < N
//			&& FY + Dir[7][1]>=0 && FX + Dir[7][0]>=0
//			&& Map[FY + Dir[7][1]][FX + Dir[7][0]] != 0)
//			Map[FY][FX] += 1;
//	}
//	int BeforeSize = Fog.size();
//	bool IndexCheck = false;
//	for (auto i = 0; i < N; ++i){
//		for (auto j = 0; j < N; ++j){
//			if (Map[i][j] >= 2){
//				for (auto k = 0; k < BeforeSize; ++k){
//					if (j == Fog[k].first && i == Fog[k].second){
//						IndexCheck = true;
//					}
//				}
//				if (IndexCheck == false) {
//					Map[i][j] -= 2;
//					Fog.push_back(make_pair(j, i));
//				}
//				IndexCheck = false;
//			}
//		}
//	}
//	Fog.erase(Fog.begin(), Fog.begin() + BeforeSize);
//}
//void Solution()
//{
//	for (auto i = 0; i < Info.size(); ++i){
//		Move(i);
//	}
//	for (auto i = 0; i < Map.size(); ++i){
//		Result += accumulate(Map[i].begin(), Map[i].end(), 0);
//	}
//	cout << Result;
//}
//int main()
//{
//	cin >> N >> M;
//	Map.resize(N);
//	for (auto i = 0; i < N; ++i){
//		for (auto j = 0; j < N; ++j){
//			int Num;
//			cin >> Num;
//			Map[i].push_back(Num);
//		}
//	}
//	for (auto i = 0; i < M; ++i){
//		int D, M;
//		cin >> D >> M;
//		Info.push_back(make_pair(D, M));
//	}
//	Fog.push_back(make_pair(0,N-1));
//	Fog.push_back(make_pair(1,N-1));
//	Fog.push_back(make_pair(0,N-2));
//	Fog.push_back(make_pair(1,N-2));
//	Solution();
//}
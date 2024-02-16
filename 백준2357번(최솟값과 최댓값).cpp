//#include <iostream>
//#include <vector>
//#include <cmath>
//#define Max 1000000001
//using namespace std;
//
//int N, M;
//vector<int> Arr;
//vector<int> MaxTree;
//vector<int> MinTree;
//vector<int> Result;
//pair<int,int> FindValue(int Node, int Start, int End, int Left, int Right)
//{
//	if (Left > End || Right < Start) 
//	{ 
//		return make_pair(0,Max);
//	}
//	if (Left <= Start && End <= Right) 
//	{ 
//		return make_pair(MaxTree[Node],MinTree[Node]); 
//	}
//	int Mid = (Start + End) / 2;
//	pair L = FindValue(Node * 2, Start, Mid, Left, Right);
//	pair R = FindValue(Node * 2+1, Mid+1, End, Left, Right);
//	return make_pair(max(L.first,R.first),min(L.second,R.second));
//}
//void CreateTree(int Node, int Start, int End)
//{
//	if (Start == End) {
//		MaxTree[Node] = Arr[End];
//		MinTree[Node] = Arr[End];
//		return;
//	}
//	int Mid = (Start + End) / 2;
//	CreateTree(Node * 2, Start, Mid);
//	CreateTree(Node * 2+1, Mid+1, End);
//	MaxTree[Node] = max(MaxTree[Node * 2], MaxTree[(Node * 2) + 1]);
//	MinTree[Node] = min(MinTree[Node * 2], MinTree[(Node * 2) + 1]);
//}
//int main()
//{
//	cin >> N;
//	cin >> M;
//	MaxTree.resize(N*4);
//	MinTree.resize(N*4);
//	for (auto i = 0; i < N; ++i)
//	{
//		int Num;
//		cin >> Num;
//		Arr.push_back(Num);
//	}
//	CreateTree(1, 0, Arr.size() - 1);
//	for (auto k = 0; k <M; ++k)
//	{
//		int L, R;
//		cin >> L >> R;
//		pair p = FindValue(1, 1, Arr.size() , L, R);
//		Result.push_back(p.second);
//		Result.push_back(p.first);
//	}
//	for (auto j = 0; j < Result.size(); j+=2)
//	{
//		cout << Result[j] << " " << Result[j + 1] << "\n";
//	}
//}
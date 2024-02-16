//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <queue>
//using namespace std;
//
//int N, M;
//vector<int> Arr; //값을 넣을 배열
//vector<pair<int,int>> SegmentTree;//세그먼트 트리												
//queue<int> Result; //결과값 담을 Q
//int Max = INT_MIN;
//int Min = INT_MAX;
//pair<int,int> FindValue(int Node,int Start,int End,int Left,int Right)
//{
//
//}
//int CreateTree(int Node,int Start,int End)
//{
//	if (Start == End) return SegmentTree[Node] = make_pair(0,Arr[Start]);
//	int Mid = (Start + End) / 2;
//	int Left = CreateTree(Node * 2, Start, Mid);
//	int Right = CreateTree(Node * 2 + 1, Mid + 1, End);
//	SegmentTree[Node] = make_pair(Left, Right);
//	return SegmentTree[Node];
//}
//int main()
//{
//	cin >> N >> M;
//	int TreeHeight = sqrt(N) + 1;
//	int TreeSize = 1 << (TreeHeight + 1);
//	SegmentTree.resize(TreeSize);
//	for (auto i = 0; i < N; ++i)
//	{
//		int Num;
//		cin >> Num;
//		Arr.push_back(Num);
//	}
//	CreateTree(1,0,Arr.size()-1); //트리 생성
//	for (auto i = 0; i < M; ++i)
//	{
//		int Left, Right;
//		cin >> Left >> Right;
//		pair R = FindValue(1,0,Arr.size()-1,Left,Right);
//		Result.push(R.first);
//		Result.push(R.second);
//		Max = INT_MIN;
//		Min = INT_MAX;
//	}
//	while (!Result.empty())
//	{
//		for (auto i = 0; i < 2; ++i) {
//			cout << Result.front() << " "; Result.pop();
//		}
//		cout << endl;
//	}
//}
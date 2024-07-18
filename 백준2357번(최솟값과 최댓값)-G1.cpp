//#include <iostream>
//#include <vector>
//#include <cmath>
//#define Max 1000000001
//using namespace std;
//
////세그먼트 트리란
////-구간을 저장하기위한 이진트리구조
////-리프노드(말단노드)는 배열의 값을 그대로 갖고있고
////-나머지 노드들은 해당 자식들의 합을 저장하고있음
////-트리의 크기정하기
////ㄴ배열의 크기가 9라면
////ㄴ근사한 제곱근을 구하고 그것을 올림한다.(10이면 3.xx->4) -> 이게 트리의 높이
////ㄴ트리의 크기 = 2^(트리높이+1)
////ㄴ편의상 배열크기x4로 할당하고 사용하는경우도 많음
////
////세그먼트 트리 생성
////과정
////1.주어진 범위를 반으로 나눈다.
////2.나눠진 두 범위에대해 왼쪽재귀호출,오른쪽 재귀호출을 한다.
////3.위 과정을 반복한다.
////4.시작하는범위=끝나는범위 일때 재귀를 멈춘다.
//
//int N, M;
//vector<int> Arr;
//vector<int> MaxTree; //구간의 최대값을 저장할 세그먼트 트리
//vector<int> MinTree; //구간의 최소값을 저장할 세그먼트 트리
//vector<int> Result; //결과값 담을vector
//pair<int,int> FindValue(int Node, int Start, int End, int Left, int Right)
//{
//	//구간이 전혀 겹치지 않을 때
//	if (Left > End || Right < Start) 
//	{ 
//		return make_pair(0,Max); //최소값을 비교하기위해 큰 값을 넣음
//	}
//	//구간이 겹칠 때 ex) 3~6구간을 구하고있다면 3~4여도 여기 들어옴
//	if (Left <= Start && End <= Right) 
//	{ 
//		return make_pair(MaxTree[Node],MinTree[Node]); 
//	}
//	//트리 생성과 똑같이 구간을 쪼개면서 진행
//	int Mid = (Start + End) / 2;
//	//재귀 돌면
//	 /*           ㅁ
//				ㅁ
//			  ㅁ
//			ㅁ    <-이런식으로 left부터 채워지면서 재귀를돔            */
//	pair L = FindValue(Node * 2, Start, Mid, Left, Right);
//	pair R = FindValue(Node * 2+1, Mid+1, End, Left, Right);
//	//L과R(자식노드)를 비교해가면서 큰값과 작은값을 return
//	return make_pair(max(L.first,R.first),min(L.second,R.second));
//}
//void CreateTree(int Node, int Start, int End)
//{
//	//구간을 쪼개다가 더이상 쪼갤 구간이 없을때(리프노드일때)
//	if (Start == End) {
//		//리프노드에 배열의 값을 넣음
//		MaxTree[Node] = Arr[End]; //start나end나 똑같아서 아무거나 넣어도댐
//		MinTree[Node] = Arr[End];
//		return;
//	}
//	//쪼갤 구간이 있다면
//	int Mid = (Start + End) / 2;
//	CreateTree(Node * 2, Start, Mid); //왼쪽,오른쪽 구간을 나눔
//	CreateTree(Node * 2+1, Mid+1, End); //ex) 0~9라면 mid는 4이므로 0~4와 5~9 구간으로 나뉨
//	//위 두 구간(왼쪽 오른쪽)중에 큰값은 max tree 작은값은 min tree에 넣음
//	MaxTree[Node] = max(MaxTree[Node * 2], MaxTree[(Node * 2) + 1]);
//	MinTree[Node] = min(MinTree[Node * 2], MinTree[(Node * 2) + 1]);
//}
//int main()
//{
//	cin >> N;
//	cin >> M;
//	MaxTree.resize(N*4);//
//	MinTree.resize(N*4);
//	for (auto i = 0; i < N; ++i)
//	{
//		int Num;
//		cin >> Num;
//		Arr.push_back(Num);
//	}
//	//Arr배열 기준으로 세그먼트 트리 생성
//	CreateTree(1, 0, Arr.size() - 1);
//	for (auto k = 0; k <M; ++k)
//	{
//		int L, R;
//		cin >> L >> R;
//		//구간마다의 최대값 최소값 을 pair로 가져와서
//		pair p = FindValue(1, 1, Arr.size() , L, R);
//		//결과값vector에 담고 
//		Result.push_back(p.second);
//		Result.push_back(p.first);
//	}
//	for (auto j = 0; j < Result.size(); j+=2)
//	{
//		//여기서 출력
//		cout << Result[j] << " " << Result[j + 1] << "\n";
//	}
//}
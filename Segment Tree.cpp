//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///*
//세그먼트 트리란
//-구간을 저장하기위한 이진트리구조
//-리프노드(말단노드)는 배열의 값을 그대로 갖고있고
//-나머지 노드들은 해당 자식들의 합을 저장하고있음
//-트리의 크기정하기
//ㄴ배열의 크기가 9라면
//ㄴ근사한 제곱근을 구하고 그것을 올림한다.(10이면 3.xx->4) -> 이게 트리의 높이
//ㄴ트리의 크기 = 2^(트리높이+1)
//ㄴ편의상 배열크기x4로 할당하고 사용하는경우도 많음
//
//세그먼트 트리 생성
//과정
//1.주어진 범위를 반으로 나눈다.
//2.나눠진 두 범위에대해 왼쪽재귀호출,오른쪽 재귀호출을 한다.
//3.위 과정을 반복한다.
//4.시작하는범위=끝나는범위 일때 재귀를 멈춘다.
//*/
//
//
//vector<int> SegmentTree;
//vector<int> TestVec = { 5,2,3,4,6,1,7,8,10 };
//
//int Sum(int _Node, int _Start, int _End, int _Left, int _Right)
//{
//	cout << endl;
//	cout << _Left << "부터" << _Right << "까지의 구간합을 구하는 중입니다." << endl;
//	cout << _Start << "부터" << _End << "까지의 범위를 검사합니다." << endl;
//	
//	//구하고자하는 범위가 겹치지 않을 때
//	if (_Left>_End || _Right<_Start)
//	{
//		cout << "①)검사중인 범위가 구하고자하는 범위와 맞지 않아서 다음 구간을 검사합니다." << endl;
//		return 0;
//	}
//	//구하고있는 구간이 일치할 때(Node가 담고있는 범위가 구하고자하는 범위와 일치할 때)
//	if (_Left <= _Start && _End <= _Right)
//	{
//		cout << "②) 검사중인 " << _Start << "~" << _End << "구간이 구하고자하는 범위에 포함되서 return합니다.";
//		cout << endl;
//		return SegmentTree[_Node];
//	}
//
//	cout << "구하고자 하는 범위보다 검사중인 범위가 넓어서 구간을 나눕니다." << endl;
//	//쪼개가면서 연산시작
//	int Mid = (_Start + _End) / 2;
//	int Left = Sum(_Node * 2, _Start, Mid, _Left, _Right);
//	int Right = Sum(_Node * 2+1, Mid+1, _End, _Left, _Right);
//
//	cout << "③)찾고자하는 범위가 걸쳐있어서 검사를 이어갑니다." << endl;
//	return Left + Right;
//}
//
//void TreeUpdate(int _Node, int _Start, int _End, int _Index, int _Gap)
//{
//	//검사하는 범위에 그 index가 없다면 return
//	if (_Index<_Start || _Index>_End) return;
//	//그 index가 포함되어있다면 바꾸려는 값의 차이만큼 더해준다.
//	SegmentTree[_Node] += _Gap;
//
//
//	//Start와End가 같다면 그 Index를 찾았다는 뜻
//	if (_Start != _End)
//	{
//		int Mid = (_Start + _End) / 2;
//		TreeUpdate(_Node * 2, _Start, Mid, _Index, _Gap);
//		TreeUpdate(_Node * 2+1, Mid+1,_End , _Index, _Gap);
//	}
//}
//
//
////검사중인 노드번호,검사할 범위(start,end)
//int CreateSegmentTree(int _Node,int _Start,int _End)
//{
//	//검사할 범위가 없으면 return
//	if (_Start == _End) return SegmentTree[_Node] = TestVec[_Start];
//	//구간 쪼개기
//	int Mid = (_Start + _End) / 2;
//	//재귀로 왼쪽리프노드부터 채운다.
//	int Left = CreateSegmentTree(_Node * 2, _Start, Mid);
//	int Right= CreateSegmentTree(_Node * 2+1, Mid+1, _End);
//	//부모노드의 값은 아래범위의 노드값을 더한것
//	SegmentTree[_Node] = Left + Right;
//
//	//Left와Right값을 구하기위함
//	return SegmentTree[_Node];
//}
//
//int main()
//{
//	//트리의 높이
//	int TreeHeight = sqrt(TestVec.size()) + 1;
//
//	//트리의 크기(비트연산자)
//	int TreeSize = (1 << (TreeHeight+1));
//
//	//크기만큼 resize
//	SegmentTree.resize(TreeSize);
//
//	//0번노드로 시작하게되면 노드연산이 안되므로(ex. 왼쪽자식노드번호=부모노드번호*2)
//	//1번노드부터 시작한다. 
//	CreateSegmentTree(1, 0, TestVec.size() - 1);
//
//	//구간합 1
//	int Result=Sum(1, 0, TestVec.size() - 1, 3, 5);
//	cout << "구간합은 " << Result << " 입니다." << endl;
//
//	//Tree Update
//	int Index = 3; //3번째 Index를 
//	int ChageValue = 5; //5로 바꾸어보겠슴둥
//	int Gap = ChageValue - TestVec[Index];
//	TreeUpdate(1, 0, TestVec.size() - 1, Index, Gap);
//
//	//구간합 다시 구해보기
//	int Result2 = Sum(1, 0, TestVec.size() - 1, 3, 5);
//	cout << "구간합은 " << Result2 << " 입니다." << endl;
//}
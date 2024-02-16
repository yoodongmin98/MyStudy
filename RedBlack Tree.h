#pragma once
#include <vector>

using namespace std;
/*
레드 블랙 트리 규칙. 
1.각 노드의 색은 Red또는Black이다.
2.Root노드(최상위 노드)는 Black이다.
3.모든Leaf노드(말단 노드)는 Black이다.
4.Red노드의 자식들은 전부 Black이다.(Red노드는 연속적으로 등장할 수 없다.)
5.Root노드에서 말단노드까지의 모든 경로에는 동일한 개수의 Black노드가 존재한다.
*/
enum NodeColor
{
	None,
	Red,
	Black
};
class Node
{

};
template<typename T1,typename T2>
class Mymap
{
public:
	Mymap<T1, T2>(){};
	~Mymap() {};

	void Insert(T1 _Key, T2 _Value)
	{
		Key = _Key;
		Value = _Value;
	}
private:
	T1 Key;
	T2 Value;
	NodeColor Color = NodeColor::None;

	Mymap<T1, T2>* GrandParentNode = nullptr;
	Mymap<T1, T2>* ParentNode = nullptr;
	Mymap<T1, T2>* UncleNode = nullptr;
	Mymap<T1, T2>* InsertNode = nullptr;
};

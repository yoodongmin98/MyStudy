#pragma once
#include <vector>

using namespace std;
/*
���� �� Ʈ�� ��Ģ. 
1.�� ����� ���� Red�Ǵ�Black�̴�.
2.Root���(�ֻ��� ���)�� Black�̴�.
3.���Leaf���(���� ���)�� Black�̴�.
4.Red����� �ڽĵ��� ���� Black�̴�.(Red���� ���������� ������ �� ����.)
5.Root��忡�� ���ܳ������� ��� ��ο��� ������ ������ Black��尡 �����Ѵ�.
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

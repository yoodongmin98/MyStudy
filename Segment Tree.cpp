//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///*
//���׸�Ʈ Ʈ����
//-������ �����ϱ����� ����Ʈ������
//-�������(���ܳ��)�� �迭�� ���� �״�� �����ְ�
//-������ ������ �ش� �ڽĵ��� ���� �����ϰ�����
//-Ʈ���� ũ�����ϱ�
//���迭�� ũ�Ⱑ 9���
//���ٻ��� �������� ���ϰ� �װ��� �ø��Ѵ�.(10�̸� 3.xx->4) -> �̰� Ʈ���� ����
//��Ʈ���� ũ�� = 2^(Ʈ������+1)
//�����ǻ� �迭ũ��x4�� �Ҵ��ϰ� ����ϴ°�쵵 ����
//
//���׸�Ʈ Ʈ�� ����
//����
//1.�־��� ������ ������ ������.
//2.������ �� ���������� �������ȣ��,������ ���ȣ���� �Ѵ�.
//3.�� ������ �ݺ��Ѵ�.
//4.�����ϴ¹���=�����¹��� �϶� ��͸� �����.
//*/
//
//
//vector<int> SegmentTree;
//vector<int> TestVec = { 5,2,3,4,6,1,7,8,10 };
//
//int Sum(int _Node, int _Start, int _End, int _Left, int _Right)
//{
//	cout << endl;
//	cout << _Left << "����" << _Right << "������ �������� ���ϴ� ���Դϴ�." << endl;
//	cout << _Start << "����" << _End << "������ ������ �˻��մϴ�." << endl;
//	
//	//���ϰ����ϴ� ������ ��ġ�� ���� ��
//	if (_Left>_End || _Right<_Start)
//	{
//		cout << "��)�˻����� ������ ���ϰ����ϴ� ������ ���� �ʾƼ� ���� ������ �˻��մϴ�." << endl;
//		return 0;
//	}
//	//���ϰ��ִ� ������ ��ġ�� ��(Node�� ����ִ� ������ ���ϰ����ϴ� ������ ��ġ�� ��)
//	if (_Left <= _Start && _End <= _Right)
//	{
//		cout << "��) �˻����� " << _Start << "~" << _End << "������ ���ϰ����ϴ� ������ ���ԵǼ� return�մϴ�.";
//		cout << endl;
//		return SegmentTree[_Node];
//	}
//
//	cout << "���ϰ��� �ϴ� �������� �˻����� ������ �о ������ �����ϴ�." << endl;
//	//�ɰ����鼭 �������
//	int Mid = (_Start + _End) / 2;
//	int Left = Sum(_Node * 2, _Start, Mid, _Left, _Right);
//	int Right = Sum(_Node * 2+1, Mid+1, _End, _Left, _Right);
//
//	cout << "��)ã�����ϴ� ������ �����־ �˻縦 �̾�ϴ�." << endl;
//	return Left + Right;
//}
//
//void TreeUpdate(int _Node, int _Start, int _End, int _Index, int _Gap)
//{
//	//�˻��ϴ� ������ �� index�� ���ٸ� return
//	if (_Index<_Start || _Index>_End) return;
//	//�� index�� ���ԵǾ��ִٸ� �ٲٷ��� ���� ���̸�ŭ �����ش�.
//	SegmentTree[_Node] += _Gap;
//
//
//	//Start��End�� ���ٸ� �� Index�� ã�Ҵٴ� ��
//	if (_Start != _End)
//	{
//		int Mid = (_Start + _End) / 2;
//		TreeUpdate(_Node * 2, _Start, Mid, _Index, _Gap);
//		TreeUpdate(_Node * 2+1, Mid+1,_End , _Index, _Gap);
//	}
//}
//
//
////�˻����� ����ȣ,�˻��� ����(start,end)
//int CreateSegmentTree(int _Node,int _Start,int _End)
//{
//	//�˻��� ������ ������ return
//	if (_Start == _End) return SegmentTree[_Node] = TestVec[_Start];
//	//���� �ɰ���
//	int Mid = (_Start + _End) / 2;
//	//��ͷ� ���ʸ��������� ä���.
//	int Left = CreateSegmentTree(_Node * 2, _Start, Mid);
//	int Right= CreateSegmentTree(_Node * 2+1, Mid+1, _End);
//	//�θ����� ���� �Ʒ������� ��尪�� ���Ѱ�
//	SegmentTree[_Node] = Left + Right;
//
//	//Left��Right���� ���ϱ�����
//	return SegmentTree[_Node];
//}
//
//int main()
//{
//	//Ʈ���� ����
//	int TreeHeight = sqrt(TestVec.size()) + 1;
//
//	//Ʈ���� ũ��(��Ʈ������)
//	int TreeSize = (1 << (TreeHeight+1));
//
//	//ũ�⸸ŭ resize
//	SegmentTree.resize(TreeSize);
//
//	//0������ �����ϰԵǸ� ��忬���� �ȵǹǷ�(ex. �����ڽĳ���ȣ=�θ����ȣ*2)
//	//1�������� �����Ѵ�. 
//	CreateSegmentTree(1, 0, TestVec.size() - 1);
//
//	//������ 1
//	int Result=Sum(1, 0, TestVec.size() - 1, 3, 5);
//	cout << "�������� " << Result << " �Դϴ�." << endl;
//
//	//Tree Update
//	int Index = 3; //3��° Index�� 
//	int ChageValue = 5; //5�� �ٲپ�ڽ���
//	int Gap = ChageValue - TestVec[Index];
//	TreeUpdate(1, 0, TestVec.size() - 1, Index, Gap);
//
//	//������ �ٽ� ���غ���
//	int Result2 = Sum(1, 0, TestVec.size() - 1, 3, 5);
//	cout << "�������� " << Result2 << " �Դϴ�." << endl;
//}
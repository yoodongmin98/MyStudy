//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	//8�� �Ѵ� ���� ª�� ������ ���غ���
//	vector<int> P_Array = { 2,5,2,1,1,5,2,1,6,2};
//	priority_queue<int> Q_Count; //���̸� ���� �켱���� ť
//	int P_Start = 0;
//	int P_End = 0;
//	int Sum = 0; //Start���� End������ ��
//	while (P_End <= P_Array.size())
//	{
//		if (Sum >= 8) 
//		{
//			Q_Count.push(-(P_End+-P_Start));
//			Sum -= P_Array[P_Start];
//			P_Start++;
//		}
//		else
//		{
//			Sum += P_Array[P_End];
//			P_End++;
//		}
//		if (Sum < 8 && P_End == P_Array.size())
//		{
//			break;
//		}
//	}
//	cout << -Q_Count.top() << endl;
//}

//����ٰ� �˰��� ���տ��� �������.

//������ ����Ǽ� = 1 ,2�ε������� �����ؼ� ��ġ�� left++ ������ right++ ������ Count++�ϰ� ��쿡���� �� ������ �Ű��ֱ�
//�ΰ��� ����Ǽ� = �迭��"����"�� ��left=0 start=arr.size()-1���� ���� ���� ������ �Űܰ��鼭 �´� �� ã��

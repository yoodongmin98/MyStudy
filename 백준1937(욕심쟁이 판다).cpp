//#include <iostream>
//
//using namespace std;
//
//int N;
//int Max = 0;
//int Map[501][501];
//int Num[501][501] = { 0 };
//
//int Dir[4][2] = { {0,-1}, {1,0}, {0,1}, {-1,0} };
//void Solution(int X,int Y,int Count,int _StartX, int _StartY)
//{
//	bool SideCheck = false;
//	int Now = Map[Y][X];
//	for (auto i = 0; i < 4; ++i) //�� �� �� ��
//	{
//		int NY = Y + Dir[i][1]; //����index
//		int NX = X + Dir[i][0];
//		if (NX >= 0 && NY >= 0 && NX <= N && NY <= N) //ĭ�˻�
//		{
//			if (Map[NY][NX] > Now)//�� ������ ���� ���� index�� ������ ������
//			{
//				SideCheck = true;
//				if (Num[NY][NX] != 0) //�� ������ �޸������̼� �迭�� 0�� �ƴϸ�(���� ������ ���� �ִٸ�)
//				{
//					if (Count != 1) //Count�� 1�� �ƴҋ�(��ͷ� ���� dfs����� ��)
//					{
//						//�� ��忡�� ������������ Count���� ���� ��ϵȰͺ��� Ŭ ��
//						if (Num[Y][X] < 1 + Num[NY][NX]) 
//							Num[Y][X] = 1 + Num[NY][NX]; //�� ���� ����
//					}
//					else //��ͷε��� ��尡 �ƴ϶� ���۵� ù ����� ��
//					{
//						//���Ͱ��� �� ��
//						int SetC = Count + Num[NY][NX]; 
//						if (Num[_StartY][_StartX] < SetC)
//							Num[_StartY][_StartX] = SetC;
//						//�� ���� max�� �˻�
//						if (SetC > Max)
//							Max = SetC;
//					}
//				}
//				else { //������ ���� ���ٸ�
//					//�� ������带 ��������� �湮
//					Solution(NX, NY, Count + 1, _StartX, _StartY);
//					--i;
//				}
//			}
//		}
//	}
//	//�� ����� ������ ��� �˻��ߴµ� �����ϼ��ִ� ��尡 ���ٸ�
//	if (SideCheck == false) {
//		//�� ���� �����ϼ��ִ� ���� 1�̴�.
//		Num[Y][X] = 1;
//	}
//	//Max�˻�
//	if (Count > Max)
//		Max = Count;
//	//��͸� ���鼭 ���۳���� ������ Count�� Ŀ���� ����
//	if (Num[_StartY][_StartX] < Count)
//		Num[_StartY][_StartX] = Count;
//}
//
//int main()
//{
//	cin >> N;
//	for (auto i = 0; i < N; ++i)
//	{
//		for (auto j = 0; j < N; ++j) {
//			int Info;
//			cin >> Info;
//			Map[i][j] = Info;
//		}
//	}
//	for (auto i = 0; i < N; ++i)
//	{
//		for (auto j = 0; j < N; ++j)
//		{
//			if(Num[i][j]==0)
//				Solution(j,i,1,j,i);
//		}
//	}
//	cout << Max;
//}
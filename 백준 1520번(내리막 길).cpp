//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//int Map[501][501]; //�̰� ��
//bool Isvisit[501][501] = { false }; //�湮����
//int DP[501][501] = { false }; //�ߺ����� �������� DP�迭
//int Dir[4][2] = { {0,-1} ,{1,0} ,{0,1}, {-1,0} }; //�� ���� �� ����
//void DFS(int Y,int X)
//{
//	Isvisit[Y][X] = true; //�湮üũ
//	bool Find = false; //4������ ���鼭 �� �� �ִ� ������ ã�Ҵ���
//	for (auto i=0 ; i<4 ;++i) //�� ���� �� 4����
//	{
//		int NX = X + Dir[i][0];
//		int NY = Y + Dir[i][1];
//		if (NX < M && NX >= 0 && NY < N && NY >= 0) //�� �˻��ϴ� �� index
//		{
//			//���簪�� �̵��ϰ����ϴ°� ���� ũ�ٸ�
//			if (Map[Y][X] > Map[NY][NX])
//			{
//				//�湮üũ�� �ȵǾ��������� �̵�����
//				if (Isvisit[NY][NX] == false)
//				{
//					//DP�迭�� �� ���(Map[NY][NX])�� �̵���������
//					//����� ���� ����Ǿ��ִٸ�
//					if (DP[NY][NX]>0){
//						Find = true; //ã�Ҵ� ��� +
//						DP[Y][X] += DP[NY][NX]; //�� ����Ǽ��� ���ϸ� �� �ʿ䰡����
//					}
//					else if (DP[NY][NX]!=-1) { //-1�� �ؿ� ��������
//						Find = true;
//						DFS(NY, NX);//�ƴϸ� ��͵��ƶ�
//						--i; //��� ���� ���ͼ� �� �ڸ����� ��˻� �ϱ�����
//					}
//				}	
//			}
//		}
//	}
//	//���� 4���� �� ���Ҵµ� �̵��� �� �ִ°��� ���ٸ�
//	if (Find == false) { 
//		if (X == 0 && Y == 0){ }
//		else
//		DP[Y][X] = -1; //-1�� ��������
//	}
//	Isvisit[Y][X] = false;	//��Ϳ��� ������ false(DFS)
//}
//int main()
//{
//	cin >> N >> M;
//	for (auto i = 0; i < N; ++i)
//	{
//		for (auto j = 0; j < M; ++j)
//		{
//			int Num;
//			cin >> Num;
//			Map[i][j] = Num;
//		}
//	}
//	DP[N - 1][M - 1] = 1;
//	//0,0���� �������� �����Ҷ� ���� ���� �����ٰ��̹Ƿ�
//	DFS(0,0);
//	//DPù��° ���� �� ���̴�.
//	cout << DP[0][0];
//}
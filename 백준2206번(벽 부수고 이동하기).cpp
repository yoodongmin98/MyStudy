//#include <iostream>
//#include <vector>
//#include <queue>
//#include <string>
//#define Max 1000001;
//using namespace std;
//
//
//int N, M;
//bool Isvisit[1001][1001] = { false };
//bool Map[1001][1001] = {false};
//int Dir[4][2] = { {0,-1}, {1,0}, {0,1}, {-1,0} };
//queue<pair<int, int>> NodeQ;
//int Min = Max;
//bool Crash = false;
//void BFS(int Y,int X,int Count,bool Crash)
//{
//	if (Y == N - 1&& X==M-1) //���������� ī��Ʈ�˻�
//	{
//		if (Count < Min)
//			Min = Count;
//	}
//	Isvisit[Y][X] = true; //�ϴ� �� ���� �湮
//	for (auto i = 0; i < 4; ++i) //4������ ���鼭
//	{
//		int NX = Dir[i][0];
//		int NY = Dir[i][1];
//		if (NX >= 0 && NX < M && NY >= 0 && NY < N)//map �Ѿ���� Check
//		{
//			if (Crash == false) {//���� �Ⱥν�����
//				NodeQ.push(make_pair(NY, NX)); //�ֺ� ��� �� �ְ�(������)
//			}
//			else //�ν�����
//			{
//				if(Map[NY][NX]!=true) //���� ���°��� �־��
//					NodeQ.push(make_pair(NY, NX));
//			}
//		}
//	}
//	int NY = NodeQ.front().first;
//	int NX = NodeQ.front().second;//������ ���
//	NodeQ.pop();
//	if (Crash == false) //�Ⱥμ� ���¸� �ذ� ���� ����
//	{
//		if (Map[NY][NX] == true) //���� �ִٸ�
//		{
//			Map[NY][NX] = false; //�ϴ� �μ���
//			Crash = true;
//			BFS(NY, NX, Count + 1, Crash); //�μ����·� �ٽõ��ƶ�
//		}
//		else
//		{
//			BFS(NY, NX, Count + 1, Crash);
//		}
//	}
//	else //�̹� �μ����¸� ��ͳ� ���ƶ�
//	{
//		if (Map[NY][NX] != true)
//			BFS(NY, NX, Count + 1, Crash);
//	}
//}
//
//int main()
//{
//	cin >> N >> M;
//	for (auto i = 0; i < N; ++i)
//	{
//		string Wall;
//		cin >> Wall;
//		for (auto j = 0; j < M; ++j)
//		{
//			Map[i][j] = Wall[j]-'0';
//		}
//	}
//	BFS(0, 0, 1,Crash);
//	cout << Min;
//}
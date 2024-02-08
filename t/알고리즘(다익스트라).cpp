//#include <iostream>
//#include <vector>
//#include <queue>
//
//#define Max 1000000000;
//using namespace std;
//vector <vector<pair<int, int>>> A;
//int Dist[7];
//void dijkstra(int _Start)
//{
//	Dist[_Start] = 0; 
//	priority_queue<pair<int, int>> pq; 
//	pq.push(make_pair(0,_Start));
//	
//	while (!pq.empty())
//	{
//		int current = pq.top().second;
//		cout << "\n" << endl;
//		cout << current << "��Node�˻縦 �����մϴ�." << endl;
//		int distance = -pq.top().first; 
//		cout << current << "��Node������ ���� �ּҰŸ���"<<Dist[current] << "�Դϴ�." << endl;
//		pq.pop();
//		if (Dist[current] < distance)
//		{
//			cout <<"���ŵ� "<< current << "��Node�� �ּҺ���� �� �����Ƿ� ����Q���� �˻��մϴ�." << endl;
//			continue;
//		}
//		for (auto i = 0; i < A[current].size(); ++i)
//		{
//			int Nextnode = A[current][i].second;
//			int Nextdistance = distance+A[current][i].first;
//			cout << current<<"��Node����"<< Nextnode << "��Node������ �ּҰŸ��� �˻��մϴ�." << endl;
//			if (Nextdistance < Dist[Nextnode])
//			{
//				cout << current << "��Node���� " << Nextnode << "��Node�� ���°� �� ª���Ƿ�"<< Nextnode <<" �� �ּҰŸ��� �����մϴ�." << endl;
//				Dist[Nextnode] = Nextdistance;
//				pq.push(make_pair(-Nextdistance,Nextnode));
//			}
//			else
//				cout << current << "��Node���� " << Nextnode << "��Node������ �Ÿ��� "<<Nextnode<<"��Node�� �ּҰŸ���"<<Dist[Nextnode]<<" ���� �� �н��մϴ�." << endl;
//		}
//	}
//}
//int main() 
//{
//	for (auto i = 1; i <= 6; ++i)
//	{
//		Dist[i] = Max;
//	}
//	A.resize(7);
//	A[1].push_back(make_pair(2, 2));
//	A[1].push_back(make_pair(1, 3));
//	A[1].push_back(make_pair(7, 6));
//
//	A[2].push_back(make_pair(2,1));
//	A[2].push_back(make_pair(4,6));
//	A[2].push_back(make_pair(2,4));
//
//	A[3].push_back(make_pair(1,1));
//	A[3].push_back(make_pair(2,4));
//	A[3].push_back(make_pair(4,5));
//
//	A[4].push_back(make_pair(2,2));
//	A[4].push_back(make_pair(1,5));
//	A[4].push_back(make_pair(2,3));
//
//	A[5].push_back(make_pair(1,4));
//	A[5].push_back(make_pair(4,3));
//
//	A[6].push_back(make_pair(4,2));
//	A[6].push_back(make_pair(7,1));
//
//	dijkstra(1);
//
//	cout << "\n" << endl;
//	cout << "Node���� �ּҰŸ��� ������ �����ϴ�." << endl;
//	for (auto i = 1; i <= 6; ++i)
//	{
//		cout <<i<<"��Node : "<<Dist[i]<< endl;
//	}
//	vector<int> people;
//	sort(people.begin(), people.end(),less<int>());
//}
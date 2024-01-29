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
//		cout << current << "번Node검사를 시작합니다." << endl;
//		int distance = -pq.top().first; 
//		cout << current << "번Node까지의 현재 최소거리는"<<Dist[current] << "입니다." << endl;
//		pq.pop();
//		if (Dist[current] < distance)
//		{
//			cout <<"갱신된 "<< current << "번Node의 최소비용이 더 작으므로 다음Q값을 검사합니다." << endl;
//			continue;
//		}
//		for (auto i = 0; i < A[current].size(); ++i)
//		{
//			int Nextnode = A[current][i].second;
//			int Nextdistance = distance+A[current][i].first;
//			cout << current<<"번Node에서"<< Nextnode << "번Node까지의 최소거리를 검사합니다." << endl;
//			if (Nextdistance < Dist[Nextnode])
//			{
//				cout << current << "번Node에서 " << Nextnode << "번Node로 가는게 더 짧으므로"<< Nextnode <<" 의 최소거리를 갱신합니다." << endl;
//				Dist[Nextnode] = Nextdistance;
//				pq.push(make_pair(-Nextdistance,Nextnode));
//			}
//			else
//				cout << current << "번Node에서 " << Nextnode << "번Node까지의 거리가 "<<Nextnode<<"번Node의 최소거리인"<<Dist[Nextnode]<<" 보다 길어서 패스합니다." << endl;
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
//	cout << "Node들의 최소거리는 다음과 같습니다." << endl;
//	for (auto i = 1; i <= 6; ++i)
//	{
//		cout <<i<<"번Node : "<<Dist[i]<< endl;
//	}
//	vector<int> people;
//	sort(people.begin(), people.end(),less<int>());
//}
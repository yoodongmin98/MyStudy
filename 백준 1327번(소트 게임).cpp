#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <unordered_map>
using namespace std;

queue<pair<string,int>> Info;
int N, K;
string Compare;
int Count = 0;
unordered_map<string, bool> Visit;

void bfs()
{
	while (!Info.empty())
	{
		string Nums = Info.front().first;
		int Many = Info.front().second;
		Info.pop();
		if (Nums == Compare) {
			Count = Many;
			return;
		}
		if (!Visit.count(Nums))
		{
			Visit[Nums] = true;
			for (auto i = 0; i < Compare.size() - K + 1; ++i)
			{
				string Copy = Nums;
				reverse(Copy.begin() + i, Copy.begin() + i + K);
				Info.push(make_pair(Copy, Many + 1));
			}
		}
	}
	Count = -1;
}
int main()
{
	cin >> N >> K;
	for (auto i = 0; i < N; ++i)
	{
		string Num;
		cin >> Num;
		Compare += Num;
	}
	Info.push(make_pair(Compare,0));
	sort(Compare.begin(), Compare.end());
	bfs();
	cout << Count;
}
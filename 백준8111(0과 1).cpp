#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int T;
int N;
vector<int> R;
vector<string> R_char;
int Num[2];
string CNum[2];
string bfs(int I)
{
	bool Isvisited[20001] = { false };
	queue<pair<int, string>> Info;
	Info.push(make_pair(1, "1"));
	Isvisited[1] = true;
	while (true)
	{
		int Value = Info.front().first;
		string S_Num = Info.front().second;
		if (Value == 0) {
			return S_Num;
			break;
		}
		Info.pop();
		Num[0] = (Value * 10) % R[I];
		Num[1] = (Value * 10 + 1) % R[I];
		CNum[0] = S_Num + "0";
		CNum[1] = S_Num + "1";
		for (int i = 0; i < 2; ++i) {
			if (Isvisited[Num[i]]) continue;
			Isvisited[Num[i]] = true;
			Info.push({ Num[i], CNum[i] });
		}
	}
}
int main()
{
	cin >> T;
	for (auto i = 0; i < T; ++i) {
		cin >> N;
		R.push_back(N);
	}
	for (auto I = 0; I < R.size(); ++I)
	{
		R_char.push_back(bfs(I));
	}
	for (auto i = 0; i < R.size(); ++i)
	{
		cout << R_char[i] << "\n";
	}
}
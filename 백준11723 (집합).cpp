#include <iostream>
#include <string>
using namespace std;

int M;
int S = 0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> M;
	for (auto i = 0; i < M; ++i)
	{
		string Oper;
		int Num;
		cin >> Oper;
		if (Oper != "all" && Oper!="empty")
			cin >> Num;
		if (Oper == "add")
			S = S | (1 << Num);
		else if (Oper == "remove")
			S = S & ~(1 << Num);
		else if (Oper == "check")
		{
			if (S & (1 << Num))
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (Oper == "toggle")
			S = S ^ (1 << Num);
		else if (Oper == "all")
			S = 2147483647;
		else if (Oper == "empty")
			S = 0;
	}
}
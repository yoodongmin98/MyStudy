#include <iostream>
#include <vector>
using namespace std;
vector<string> WordVec;
int Index = 0;
void Solution()
{
	RE:
	for (auto i=0; i<WordVec.size(); ++i)
	{
		int Count = 0;
		for (Index = 0; Index < WordVec.size(); ++Index)
		{
			if (0 == WordVec[Index].find(WordVec[i]))
				Count++;
		}
		if (1 != Count)
		{
			WordVec.erase(WordVec.begin()+i);
			Index = 0;
			goto RE;
		}	
	}
	cout << WordVec.size();
}
int main() 
{
	int N;
	cin >> N;
	for (auto i = 0; i < N; ++i)
	{
		string W;
		cin >> W;
		WordVec.push_back(W);
	}
	Solution();
}
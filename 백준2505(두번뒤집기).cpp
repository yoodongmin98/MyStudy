#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int N;
vector<int> Nums;
vector<int> Compare;
vector<pair<int, int>> Result;
int Count=0;
void Solution()
{
	Set:
	vector<int> Copy = Nums;
	for (auto i = 0+Count; i < N; ++i)
	{
		Re:
		int Index = Copy[i];
		if (Index != Copy[Index-1]) {
			if (Index > i) {
				reverse(Copy.begin() + i, Copy.begin() + Index);
				Result.push_back(make_pair(i + 1, Index));
			}
			else {
				reverse(Copy.begin() + Index - 1, Copy.begin() + i + 1);
				Result.push_back(make_pair(Index, i+1));
			}
			if (Copy == Compare) {
				Result.push_back(make_pair(1, 1));
			}
			if (Result.size() == 2){
				if (Copy == Compare){
					return;
				}
				else{
					Result.clear();
					Count++;
					goto Set;
				}
			}
			if (Result.size() == 1) {
				i = 0;
				goto Re;
			}
		}
	}
}

int main()
{
	cin >> N;
	for (auto i = 0; i < N; ++i)
	{
		int Num;
		cin >> Num;
		Nums.push_back(Num);
		Compare.push_back(Num);
	}
	sort(Compare.begin(), Compare.end());
	if (Nums == Compare) {
		Result.push_back(make_pair(1,1));
		Result.push_back(make_pair(1,1));
	}
	else {
		Solution();
	}
	for(auto i=0; i<2; ++i)
		cout <<Result[i].first<<" "<<Result[i].second<<"\n";
}
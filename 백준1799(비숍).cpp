#include <iostream>
#include <vector>
using namespace std;



int N;
vector<vector<bool>> Map;
int Result = 0;
void Solution(int _Size)
{
	for (auto i = 0; i < Map.size()/2+1; ++i)//�ϴ� ���ݸ� ���� �˻�
	{
		for (auto j = 0; j < Map[i].size(); ++j)
		{
			if (Map[i][j] == true)
			{
				Result++;
				if ((N - j) & 1)//false�� �ٲ���� index�� Ȧ�������
				{
					// 1 2 3 2 1 ��Ģ�� ã��
				}
				else
				{
					//1 2 2 1 ��Ģ�� ã��
				}
				//??
			}
		}
	}
}

int main()
{
	cin >> N;
	int Size = N * 2 - 1;
	Map.resize(Size);
	for (auto i = Size/2; i >= 0; --i)
	{
		for (auto j = i; j < i+N; ++j)
		{
			bool Possible;
			cin >> Possible;
			Map[j].push_back(Possible);
		}
	}
	Solution(Size);
}
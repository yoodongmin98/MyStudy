#include <iostream>

using namespace std;
int Count = 1;
int Value = 1; //1=10(���ڸ�) 2=100(3�ڸ�) 3=1000(4�ڸ�)
int Result = 0;
int N;
void Solution()
{
	for (auto i = 1; i <= Value; ++i) //�ڸ�����ŭ �ݺ�
	{
		for (auto k = 1; k <= 9; ++k) //���ڸ� üũ
		{
			Value = k;
			Value == 1 ? Count = k : Count = (k * (k - 1)) / Value;
			if (N - Count > 0)
			{
				N -= Count;
			}
			else
			{
				Result = k;
				for (auto i = 0; i < Value; ++i)
				{
					Result *= 10;
				}
				Solution();
			}
		}
	}
}

int main()
{
	cin >> N;
	if (N <= 9) {
		cout << N;
	}

	N -= 9;
	Solution();
	cout << Result;
}
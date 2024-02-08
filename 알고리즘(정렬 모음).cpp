#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector<int> Array)
{
	cout << "-��������-" << endl;
	//Size-1���� �ι����ϱ� O(N^2)�� �ð����⵵�� ������.
	for (auto i = 0; i < Array.size() - 1; ++i)
	{
		for (auto i = 0; i < Array.size() - 1; ++i)
		{
			if (Array[i] > Array[i + 1]) {
				//Swap
				int Save = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = Save;
			}
		}
	}
	//Print
	for (auto i = 0; i < Array.size(); ++i) {
		cout << Array[i] << " ";
	}
	cout << endl;
}

void SelectionSort(vector<int> Array)
{
	cout << "-��������-" << endl;
	int Count = 0;
	int Index = -1;
	//bubble���� swapȽ���� ������ �ð����⵵�� O(N^2)�� ����
	for (auto k = 0; k < Array.size() - 1; ++k)
	{
		//�ּڰ� �ʱ�ȭ
		int Min = INT_MAX;
		//�ּڰ� ���� Ž��
		for (auto i = Count; i < Array.size(); ++i)
		{
			if (Array[i] < Min) {
				Min = Array[i];
				Index = i;
			}
		}
		//Swap
		int Save = Array[k];
		Array[k] = Min;
		Array[Index] = Save;
		Count++;
	}
	//Print
	for (auto i = 0; i < Array.size(); ++i) {
		cout << Array[i] << " ";
	}
	cout << endl;
}


int main()
{
	//Test�� �迭
	vector<int> Array = { 4,7,5,6,9,10,2,1,3,8 };
	BubbleSort(Array);
	vector<int> Array2 = { 4,7,5,6,9,10,2,1,3,8 };
	SelectionSort(Array2);

}
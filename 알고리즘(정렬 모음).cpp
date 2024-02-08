#include <iostream>

using namespace std;
void BubbleSort(int* Array, int Size)
{
	//Size-1���� �ι����ϱ� O(N^2)�� �ð����⵵�� ������.
	for (auto i = 0; i < Size - 1; ++i)
	{
		for (auto i = 0; i < Size - 1; ++i)
		{
			if (Array[i] > Array[i + 1]) {
				int Save = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = Save;
			}
		}
	}
	for (auto i = 0; i < Size; ++i) {
		cout << Array[i] << " ";
	}
}

void SelectionSort(int* Array,int Size)
{
	int Index = -1;
	//bubble���� swapȽ���� ������ �ð����⵵�� O(N^2)�� ����
	for (auto k = 0; k < Size-1; ++k)
	{
		int Min = INT_MAX;
		//�ּڰ� ���� Ž��
		for (auto i = 0; i < Size; ++i)
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
	}
	for (auto i = 0; i < Size; ++i) {
		cout << Array[i] << " ";
	}
}


int main()
{
	//Test�� �迭
	int Array[10] = { 4,7,5,6,9,10,2,1,3,8 };
	BubbleSort(Array, 10);
	SelectionSort(Array, 10);

}
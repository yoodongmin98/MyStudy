#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

//�и��� ���� �ð������� �ʿ���
//clock_t TimeCheckStart()
//{
//	clock_t StartTime = clock();
//	return StartTime;
//}
//double TimeCheckEnd()
//{
//	double EndTime=clock();
//	return EndTime;
//}
//void PrintTime(clock_t StartTime,double EndTime)
//{
//	cout<<(double)((EndTime - StartTime) / CLOCKS_PER_SEC)<<endl;
//}


void BubbleSort(vector<int> Array)
{
	cout << "-��������-" << endl;
	//Size-1���� �ι����ϱ� O(N^2)�� �ð����⵵�� ������.
	//clock_t S = TimeCheckStart();
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
	//double E = TimeCheckEnd();
	//PrintTime(S, E);
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

void InsertionSort(vector<int> Array)
{
	cout << "-��������-" << endl;
	int i, j, key;

	for (i = 1; i < Array.size(); i++) {
		//Key�� ����
		key = Array[i]; 
		//key���� �������� ��ĭ�� �ű�
		for (j = i - 1; j >= 0 && Array[j] > key; j--) {
			Array[j + 1] = Array[j]; 
		}
		Array[j + 1] = key;
	}
	//Print
	for (auto i = 0; i < Array.size(); ++i) {
		cout << Array[i] << " ";
	}
	cout << endl;
}

void QuickSort(vector<int> Array)
{
	cout << "-������-" << endl;


	//Print
	for (auto i = 0; i < Array.size(); ++i) {
		cout << Array[i] << " ";
	}
	cout << endl;
}
void MergeSort(vector<int> Array)
{
	cout << "-�պ�����-" << endl;


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
	cout << endl;
	vector<int> Array2 = { 4,7,5,6,9,10,2,1,3,8 };
	SelectionSort(Array2);
	cout << endl;
	vector<int> Array3 = { 4,7,5,6,9,10,2,1,3,8 };
	InsertionSort(Array3);
	cout << endl;
	vector<int> Array4 = { 4,7,5,6,9,10,2,1,3,8 };
	QuickSort(Array4);
	cout << endl;
	vector<int> Array5 = { 4,7,5,6,9,10,2,1,3,8 };
	MergeSort(Array5);
	cout << endl;
	
}
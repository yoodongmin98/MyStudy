//#include <iostream>
//#include <vector>
//#include <time.h>
//using namespace std;
//# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )
//
//void BubbleSort(vector<int> Array)
//{
//	cout << "-��������-" << endl;
//	//Size-1���� �ι����ϱ� O(N^2)�� �ð����⵵�� ������.
//	//clock_t S = TimeCheckStart();
//	for (auto i = 0; i < Array.size() - 1; ++i)
//	{
//		for (auto i = 0; i < Array.size() - 1; ++i)
//		{
//			if (Array[i] > Array[i + 1]) {
//				//Swap
//				int Save = Array[i];
//				Array[i] = Array[i + 1];
//				Array[i + 1] = Save;
//			}
//		}
//	}
//	//Print
//	for (auto i = 0; i < Array.size(); ++i) {
//		cout << Array[i] << " ";
//	}
//	cout << endl;
//}
//
//void SelectionSort(vector<int> Array)
//{
//	cout << "-��������-" << endl;
//	int Count = 0;
//	int Index = -1;
//	//bubble���� swapȽ���� ������ �ð����⵵�� O(N^2)�� ����
//	for (auto k = 0; k < Array.size() - 1; ++k)
//	{
//		//�ּڰ� �ʱ�ȭ
//		int Min = INT_MAX;
//		//�ּڰ� ���� Ž��
//		for (auto i = Count; i < Array.size(); ++i)
//		{
//			if (Array[i] < Min) {
//				Min = Array[i];
//				Index = i;
//			}
//		}
//		//Swap
//		int Save = Array[k];
//		Array[k] = Min;
//		Array[Index] = Save;
//		Count++;
//	}
//	//Print
//	for (auto i = 0; i < Array.size(); ++i) {
//		cout << Array[i] << " ";
//	}
//	cout << endl;
//}
//
//void InsertionSort(vector<int> Array)
//{
//	cout << "-��������-" << endl;
//	int i, j, key;
//
//	for (i = 1; i < Array.size(); i++) {
//		//Key�� ����
//		key = Array[i]; 
//		//key���� �������� ��ĭ�� �ű�
//		for (j = i - 1; j >= 0 && Array[j] > key; j--) {
//			Array[j + 1] = Array[j]; 
//		}
//		Array[j + 1] = key;
//	}
//	//Print
//	for (auto i = 0; i < Array.size(); ++i) {
//		cout << Array[i] << " ";
//	}
//	cout << endl;
//}
//
//int partition(vector<int>& Array, int left, int right) {
//	int pivot, temp;
//	int low, high;
//	low = left;
//	high = right + 1;
//	pivot = Array[left];
//	do {
//		do {
//			low++;
//		} while (low <= right && Array[low] < pivot);
//		do {
//			high--;
//		} while (high >= left && Array[high] > pivot);
//		if (low < high) {
//			SWAP(Array[low], Array[high], temp);
//		}
//	} while (low < high);
//	SWAP(Array[left], Array[high], temp);
//	return high;
//}
//void QuickSort(vector<int>& Array, int left, int right)
//{
//	if (left < right) {
//		int P_Pos = partition(Array, left, right);
//		QuickSort(Array, left, P_Pos - 1);
//		QuickSort(Array, P_Pos + 1, right);
//	}
//}
//
//int sorted[10]; //������ �迭 �ʿ�
//void Merge(vector<int>& Array, int left, int mid, int right) {
//	int i, j, k, l;
//	i = left;
//	j = mid + 1;
//	k = left;
//	while (i <= mid && j <= right) {
//		if (Array[i] <= Array[j])
//			sorted[k++] = Array[i++];
//		else
//			sorted[k++] = Array[j++];
//	}
//	if (i > mid) {
//		for (l = j; l <= right; l++)
//			sorted[k++] = Array[l];
//	}
//	else {
//		for (l = i; l <= mid; l++)
//			sorted[k++] = Array[l];
//	}
//	for (l = left; l <= right; l++) {
//		Array[l] = sorted[l];
//	}
//}
//void MergeSort(vector<int>& Array,int left,int right)
//{
//	int mid;
//	if (left < right) {
//		mid = (left + right) / 2; 
//		MergeSort(Array, left, mid); 
//		MergeSort(Array, mid + 1, right); 
//		Merge(Array, left, mid, right);
//	}
//}
//
//int main()
//{
//	//Test�� �迭
//	vector<int> Array = { 4,7,5,6,9,10,2,1,3,8 };
//	BubbleSort(Array);
//	cout << endl;
//
//	vector<int> Array2 = { 4,7,5,6,9,10,2,1,3,8 };
//	SelectionSort(Array2);
//	cout << endl;
//
//	vector<int> Array3 = { 4,7,5,6,9,10,2,1,3,8 };
//	InsertionSort(Array3);
//	cout << endl;
//
//	vector<int> Array4 = { 4,7,5,6,9,10,2,1,3,8 };
//	QuickSort(Array4,0,Array4.size()-1);
//	cout << "-������-" << endl;
//	//Print
//	for (auto i = 0; i < Array4.size(); ++i) {
//		cout << Array4[i] << " ";
//	}
//	cout << endl;
//
//	vector<int> Array5 = { 4,7,5,6,9,10,2,1,3,8 };
//	MergeSort(Array5,0,Array5.size()-1);
//	cout << endl;
//	cout << "-�պ�����-" << endl;
//	//Print
//	for (auto i = 0; i < Array5.size(); ++i) {
//		cout << Array5[i] << " ";
//	}
//	cout << endl;
//}
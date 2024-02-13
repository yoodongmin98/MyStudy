//#include <iostream>
//#include <vector>
//#include <time.h>
//using namespace std;
//# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )
//
//void BubbleSort(vector<int> Array)
//{
//	cout << "-버블정렬-" << endl;
//	//Size-1번씩 두번도니까 O(N^2)의 시간복잡도를 가진다.
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
//	cout << "-선택정렬-" << endl;
//	int Count = 0;
//	int Index = -1;
//	//bubble보다 swap횟수는 적지만 시간복잡도는 O(N^2)로 같음
//	for (auto k = 0; k < Array.size() - 1; ++k)
//	{
//		//최솟값 초기화
//		int Min = INT_MAX;
//		//최솟값 먼저 탐색
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
//	cout << "-삽입정렬-" << endl;
//	int i, j, key;
//
//	for (i = 1; i < Array.size(); i++) {
//		//Key값 지정
//		key = Array[i]; 
//		//key값을 기준으로 한칸씩 옮김
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
//int sorted[10]; //복사할 배열 필요
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
//	//Test할 배열
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
//	cout << "-퀵정렬-" << endl;
//	//Print
//	for (auto i = 0; i < Array4.size(); ++i) {
//		cout << Array4[i] << " ";
//	}
//	cout << endl;
//
//	vector<int> Array5 = { 4,7,5,6,9,10,2,1,3,8 };
//	MergeSort(Array5,0,Array5.size()-1);
//	cout << endl;
//	cout << "-합병정렬-" << endl;
//	//Print
//	for (auto i = 0; i < Array5.size(); ++i) {
//		cout << Array5[i] << " ";
//	}
//	cout << endl;
//}
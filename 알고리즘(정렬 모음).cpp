#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

//밀리초 단위 시간측정이 필요함
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
	cout << "-버블정렬-" << endl;
	//Size-1번씩 두번도니까 O(N^2)의 시간복잡도를 가진다.
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
	cout << "-선택정렬-" << endl;
	int Count = 0;
	int Index = -1;
	//bubble보다 swap횟수는 적지만 시간복잡도는 O(N^2)로 같음
	for (auto k = 0; k < Array.size() - 1; ++k)
	{
		//최솟값 초기화
		int Min = INT_MAX;
		//최솟값 먼저 탐색
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
	cout << "-삽입정렬-" << endl;
	int i, j, key;

	for (i = 1; i < Array.size(); i++) {
		//Key값 지정
		key = Array[i]; 
		//key값을 기준으로 한칸씩 옮김
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
	cout << "-퀵정렬-" << endl;


	//Print
	for (auto i = 0; i < Array.size(); ++i) {
		cout << Array[i] << " ";
	}
	cout << endl;
}
void MergeSort(vector<int> Array)
{
	cout << "-합병정렬-" << endl;


	//Print
	for (auto i = 0; i < Array.size(); ++i) {
		cout << Array[i] << " ";
	}
	cout << endl;
}

int main()
{
	//Test할 배열
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
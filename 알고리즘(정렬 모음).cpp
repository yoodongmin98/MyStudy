#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector<int> Array)
{
	cout << "-버블정렬-" << endl;
	//Size-1번씩 두번도니까 O(N^2)의 시간복잡도를 가진다.
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


int main()
{
	//Test할 배열
	vector<int> Array = { 4,7,5,6,9,10,2,1,3,8 };
	BubbleSort(Array);
	vector<int> Array2 = { 4,7,5,6,9,10,2,1,3,8 };
	SelectionSort(Array2);

}
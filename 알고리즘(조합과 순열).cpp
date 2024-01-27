//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//#define Depth 5
//
//int n = 5, r = 3; //5C3
//vector<int> ComArray = {1,2,3,4,5};
//bool Isvisited[Depth+1] = { false };
//int PrintArray[Depth+1] = { 0, };
//void print()
//{
//	for (int i = 1; i <= r; i++) {
//		cout << PrintArray[i] << ' ';
//	}
//	cout << '\n';
//}
//void Permutation(int _depth)
//{
//	if (_depth == r + 1)
//	{
//		print();
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++) {
//			PrintArray[_depth] = ComArray[i - 1];
//			Permutation(_depth + 1);
//		}
//	} 
//}
//int main()
//{
//	Permutation(1);
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//int main()
//{
//	vector<int> BinaryTest = { 5,99,44,25,89,14,59,65,70,84,33,36,52 };
//	int Left = 0;
//	int Right = BinaryTest.size() - 1;
//	int FindValue = 36; //36를 찾아보겠다.
//	sort(BinaryTest.begin(), BinaryTest.end());
//	int Count = 0;
//	while (true)
//	{
//		Count++;
//		int Mid = (Left + Right) / 2;
//		if (BinaryTest[Mid] > FindValue)
//		{
//			Right = Mid;
//		}
//		else if(BinaryTest[Mid]< FindValue)
//		{
//			Left = Mid;
//		}
//		else
//		{
//			break;
//		}
//	}
//	cout << "몇번만에 값을 찾았니 : " << Count << endl;
//}
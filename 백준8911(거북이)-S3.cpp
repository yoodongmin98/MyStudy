//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//vector<string> Info;
//vector<int> Result;
//int Dir[4][2] = { {0,1} ,{1,0} ,{0,-1} ,{-1,0} };
//int MyPos[1][2] = { 0,0 };
//
//void ValueCheck(int& PX,int& MX, int& PY,int&MY)
//{
//	if (MyPos[0][1] > 0){
//		if (MyPos[0][1] > PY)
//			PY = MyPos[0][1];
//	}
//	else{
//		if (MyPos[0][1] < MY)
//			MY = MyPos[0][1];
//	}
//	if (MyPos[0][0] > 0){
//		if (MyPos[0][0] > PX)
//			PX = MyPos[0][0];
//	}
//	else {
//		if (MyPos[0][0] < MX)
//			MX = MyPos[0][0];
//	}
//}
//void Solution(int _Start)
//{
//	int DirV = 0;
//	int P_X = 0,M_X=0;
//	int P_Y = 0,M_Y=0;
//	for (auto i = 0; i < Info[_Start].size(); ++i)
//	{
//		switch (Info[_Start][i])
//		{
//		case 'F':
//		{
//			if (DirV == 1 || DirV == 3)
//			{
//				MyPos[0][0] += Dir[DirV][0];
//			}
//			else
//			{
//				MyPos[0][1] += Dir[DirV][1];
//			}
//			ValueCheck(P_X, M_X, P_Y, M_Y);
//			break;
//		}
//		case 'B':
//		{
//			if (DirV == 1 || DirV == 3)
//			{
//				MyPos[0][0] -= Dir[DirV][0];
//			}
//			else
//			{
//				MyPos[0][1] -= Dir[DirV][1];
//			}
//			ValueCheck(P_X, M_X, P_Y, M_Y);
//			break;
//		}
//		case 'R':
//		{
//			DirV = (DirV + 1) % 4; break;
//		}
//		case 'L':
//		{
//			DirV = (DirV - 1) % 4;
//			DirV < 0 ? DirV += 4 : DirV;
//			break;
//		}
//		}
//	}
//	Result.push_back(abs((P_X-M_X)*(P_Y-M_Y)));
//}
//int main()
//{
//	int N;
//	cin >> N;
//	for (auto i = 0; i < N; ++i)
//	{
//		string K;
//		cin >> K;
//		Info.push_back(K);
//		Solution(i);
//		MyPos[0][0] = 0; MyPos[0][1] = 0;
//	}
//	for (auto i = 0; i < N; ++i)
//	{
//		cout << Result[i] << endl;
//	}
//}
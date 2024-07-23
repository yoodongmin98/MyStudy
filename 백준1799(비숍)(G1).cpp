//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <queue>
//using namespace std;
//int N;
//vector<vector<bool>> Map;
//int Set = 0;
//priority_queue<int> MaxValue;
//int S1(vector<vector<bool>> _Map, int _Size)
//{
//	int Result = 0;
//	for (auto i = 0; i < _Size / 2 + 1; ++i) {
//		bool LC = false;
//		for (auto j = 0; j < _Size; ++j) {
//			if (_Map[i][j] == true && false == LC) {
//				LC = true;
//				Result++;
//				for (auto k = i; k < _Size; ++k) {
//					if (_Map[k][j] == true)
//						_Map[k][j] = false;
//				}
//			}
//		}
//	}
//	for (auto i = _Size - 1; i > _Size / 2; --i) {
//		bool LC = false;
//		for (auto j = _Size - 1; j >= 0; --j) {
//			if (_Map[i][j] == true && false == LC) {
//				LC = true;
//				Result++;
//				for (auto k = i; k > _Size / 2; --k) {
//					if (_Map[k][j] == true)
//						_Map[k][j] = false;
//				}
//			}
//		}
//	}
//	return Result;
//}
//int S3(vector<vector<bool>> _Map, int _Size)
//{
//	int Result = 0;
//	for (auto i = 0; i < _Size / 2 + 1; ++i) {
//		bool LC = false;
//		for (auto j = 0; j < _Size; ++j) {
//			if (_Map[i][j] == true && false == LC) {
//				LC = true;
//				Result++;
//				for (auto k = i; k < _Size; ++k) {
//					if (_Map[k][j] == true)
//						_Map[k][j] = false;
//				}
//			}
//		}
//	}
//	for (auto i = _Size - 1; i > _Size / 2; --i) {
//		bool LC = false;
//		for (auto j = 0; j <= _Size - 1; ++j) {
//			if (_Map[i][j] == true && false == LC) {
//				LC = true;
//				Result++;
//				for (auto k = i; k > _Size / 2; --k) {
//					if (_Map[k][j] == true)
//						_Map[k][j] = false;
//				}
//			}
//		}
//	}
//	return Result;
//}
//int S2(vector<vector<bool>> _Map, int _Size)
//{
//	int Result = 0;
//	for (auto i = _Size - 1; i > _Size / 2; --i) {
//		bool LC = false;
//		for (auto j = 0; j < _Size; ++j) {
//			if (_Map[i][j] == true && false == LC) {
//				LC = true;
//				Result++;
//				for (auto k = i; k >= 0; --k) {
//					if (_Map[k][j] == true)
//						_Map[k][j] = false;
//				}
//			}
//		}
//	}
//	for (auto i = 0; i < _Size / 2 + 1; ++i) {
//		bool LC = false;
//		for (auto j = _Size - 1; j >= 0; --j) {
//			if (_Map[i][j] == true && false == LC) {
//				LC = true;
//				Result++;
//				for (auto k = i; k <= _Size / 2; ++k) {
//					if (_Map[k][j] == true)
//						_Map[k][j] = false;
//				}
//			}
//		}
//	}
//	return Result;
//}
//int S4(vector<vector<bool>> _Map, int _Size)
//{
//	int Result = 0;
//	for (auto i = _Size - 1; i > _Size / 2; --i) {
//		bool LC = false;
//		for (auto j = 0; j < _Size; ++j) {
//			if (_Map[i][j] == true && false == LC) {
//				LC = true;
//				Result++;
//				for (auto k = i; k >= 0; --k) {
//					if (_Map[k][j] == true)
//						_Map[k][j] = false;
//				}
//			}
//		}
//	}
//	for (auto i = 0; i < _Size / 2 + 1; ++i) {
//		bool LC = false;
//		for (auto j = 0; j <= _Size - 1; ++j) {
//			if (_Map[i][j] == true && false == LC) {
//				LC = true;
//				Result++;
//				for (auto k = i; k <= _Size / 2; ++k) {
//					if (_Map[k][j] == true)
//						_Map[k][j] = false;
//				}
//			}
//		}
//	}
//	return Result;
//}
//int main()
//{
//	cin >> N;
//	int Size = N * 2 - 1;
//	Map.resize(Size);
//	for (auto p = 0; p < Size; ++p)
//	{
//		Map[p].resize(Size);
//	}
//	for (auto i = Size / 2; i >= 0; --i)
//	{
//		int Count = Set;
//		for (auto j = i; j < i + N; ++j)
//		{
//			bool Possible;
//			cin >> Possible;
//			Map[j][Count] = Possible;
//			Count++;
//		}
//		Set++;
//	}
//	MaxValue.push(S1(Map, Size));
//	MaxValue.push(S2(Map, Size));
//	MaxValue.push(S3(Map, Size));
//	MaxValue.push(S4(Map, Size));
//	cout << MaxValue.top();
//}
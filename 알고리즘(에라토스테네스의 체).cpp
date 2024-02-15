//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//
//
////false인 애들은 소수로 간주
//int Prime[1001] = { false };
//
//int main()
//{
//	//0과 1은 소수에서 제외
//	Prime[0] = true; Prime[1] = true;
//	//소수의 제곱근이 범위를 넘어갈 때 까지 2부터 시작.
//	for (auto i = 2; i < sqrt(1000); ++i) 
//	{
//		if (Prime[i] == false) //제일 작은수가 방문이 안되어있다면
//		{
//			//i의 배수를 지워나간다.
//			for (int j = i+i; j < 1000; j+=i)
//			{
//				Prime[j] = true;
//			}
//		}
//	}
//	//출력
//	for (auto i = 0; i < 1000; ++i) {
//		if (Prime[i] == false)
//			cout << i << " 은(는) 소수입니다." << endl;
//	}
//}
//#include <string>
//#include <vector>
//using namespace std;
//int gcd(int a, int b)
//{
//	int c;
//	while (b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	return a;
//}
//int lcm(int a, int b)
//{
//	return a * b / gcd(a, b);
//}
//int solution(vector<int> arr) {
//	int i = 0;
//	while (i + 1 != arr.size())
//	{
//		arr[i+1]=arr[i] * arr[i+1] / gcd(arr[i], arr[i + 1]);
//		++i;
//	}
//	return arr[i];
//}
//int main()
//{
//    vector<int> Test= { 5,10,15,20,25 };
//    int Answer = solution(Test);
//}
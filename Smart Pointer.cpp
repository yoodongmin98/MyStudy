//#include <iostream>
//
//
//using namespace std;
//
//class Test
//{
//public:
//	Test()
//	{
//		cout << "생성자 호출" << endl;
//	};
//	~Test() 
//	{
//
//		cout << "소멸자 호출" << endl; 
//	};
//	weak_ptr<Test> T; //weakptr로 변경
//	void Set(shared_ptr<Test> _T)
//	{
//		T = _T;
//	}
//private:
//
//};
//int main()
//{
//	shared_ptr<Test> T0 = make_shared<Test>();
//	shared_ptr<Test> T1 = make_shared<Test>();
//	T0->Set(T1);
//	T1->Set(T0);
//}
//
//
//

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
//		cout << "������ ȣ��" << endl;
//	};
//	~Test() 
//	{
//
//		cout << "�Ҹ��� ȣ��" << endl; 
//	};
//	weak_ptr<Test> T; //weakptr�� ����
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

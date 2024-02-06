//#include <iostream>
//
//
//
//class TestClass
//{
//public:
//	int TestValue = 0;
//	void Fun1(int a = TestValue) {}; //비정적 멤버는 불가능
//	void Fun2(int a = Statics) {}; //정적 멤버는 가능
//
//private:
//	static int Statics;
//};
//
//void Test(int x);
//void Test(int x, int y = 20);
//
//
//class Test
//{
//	int operator()(int x = 0) {};
//	int operator[](int i = 0) {};
//};
//
//class Parents
//{
//public:
//	virtual void Tests(Parents* a = this)
//	{
//		std::cout << "Parent의 a값=" << a << std::endl;
//	};
//};
//
//class Parent
//{
//public:
//	virtual void Tests(int a = 1000)
//	{
//		std::cout << "Parent의 a값=" << a << std::endl;
//	};
//};
//
//class Child : public Parent
//{
//public:
//	void Tests(int a) override
//	{
//		std::cout << "Child의a값=" << a << std::endl;
//	}
//};
//
//
//void FunctionTest(int x, int y)
//{
//	std::cout << x << " , " << y;
//}
//
//
//int Function(int n = 0, ...)
//{
//
//}
//
//template<class ...T>
//void Function(int n = 0, T...)
//{
//
//}
//int Function(int n = 0, ...);
//
//void FunctionTest(int x, int y = 10)
//{
//	std::cout << x << " , " << y;
//}
//
//
//
//int main()
//{
//	
//}
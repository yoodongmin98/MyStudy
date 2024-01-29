//#include <iostream>
//
//
//
//
//class MainClass
//{
//	class Innerclass
//	{
//	public:
//		Innerclass& Getthis()
//		{
//			return *this;
//		}
//	};
//public:
//	MainClass()
//	{
//		Inner = new Innerclass;
//	};
//	~MainClass(){};
//	MainClass& Getthis()
//	{
//		return *this;
//	}
//	
//	Innerclass* Inner;
//};
//
//int main()
//{
//	MainClass* Test=new MainClass;
//	std::cout << std::addressof(Test->Getthis()) << std::endl;
//	std::cout << std::addressof(Test->Inner->Getthis())<< std::endl;
//	
//}
//

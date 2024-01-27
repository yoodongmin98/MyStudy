//#include <iostream>
//
//class Minus
//{
//public:
//	const char* MinusTestFunction()
//	{
//		return "Minus를 호출했구나\n";
//	}
//};
//class Plus
//{
//public:
//	const char* PlusTestFunction()
//	{
//		throw "Plus를 호출했구나\n";
//	}
//};
//void Func(int _What) noexcept
//{
//
//	if (_What == 1) { throw Minus(); };
//	if (_What == 2) { throw Plus(); };
//	throw _What;
//}
//using namespace std;
//int main()
//{
//	int a, b;
//	cout << "숫자 한번 입력해봐라" << endl;
//	cin >> a >> b;
//	while (1)
//	{
//		int What;
//		cout << "이 숫자로 뭘 할거니" << endl;
//		cin >> What;
//		try
//		{
//			Func(What);
//		}
//		catch (Minus& _M)
//		{
//			cout << "답은 이거란다 : " << a - b << endl;
//		}
//		catch (Plus& _P)
//		{
//			cout << "답은 이거란다 : " << a + b << endl;
//		}
//		catch (...)
//		{
//			cout << "뭘 입력한거니?" << endl;
//		}
//	}
//	return 0;
//}
//
//
////int main()
////{
////	int Data;
////	cin >> Data;
////	try
////	{
////		if(Data!=0)
////			throw Data;
////	}
////	catch(int _Data) //처리할 데이터
////	{
////		if (Data != 1)
////			cout << "1이 아니넹" << endl;
////			throw _Data;
////	}
////	catch (float _Data)
////	{
////		if(Data!=2)
////			cout << "2도 아니넹" << endl;
////			throw _Data;
////	}
//
////}
//#include <iostream>
//#include <filesystem>
//
//int main() {
//    std::filesystem::path sourceFile("path/to/source.txt");
//    std::filesystem::path destinationFile("path/to/destination.txt");
//
//    try {
//        std::filesystem::rename(sourceFile, destinationFile);
//        std::cout << "File moved successfully." << std::endl;
//    }
//    catch (const std::filesystem::filesystem_error& e) {
//        std::cout << "Failed to move file: " << e.what() << std::endl;
//    }
//    catch (const std::exception& e) {
//        std::cout << "exception : " << e.what() << std::endl;
//    }
//
//    return 0;
//}   
//#include <iostream>
//
//class Minus
//{
//public:
//	const char* MinusTestFunction()
//	{
//		return "Minus�� ȣ���߱���\n";
//	}
//};
//class Plus
//{
//public:
//	const char* PlusTestFunction()
//	{
//		throw "Plus�� ȣ���߱���\n";
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
//	cout << "���� �ѹ� �Է��غ���" << endl;
//	cin >> a >> b;
//	while (1)
//	{
//		int What;
//		cout << "�� ���ڷ� �� �ҰŴ�" << endl;
//		cin >> What;
//		try
//		{
//			Func(What);
//		}
//		catch (Minus& _M)
//		{
//			cout << "���� �̰Ŷ��� : " << a - b << endl;
//		}
//		catch (Plus& _P)
//		{
//			cout << "���� �̰Ŷ��� : " << a + b << endl;
//		}
//		catch (...)
//		{
//			cout << "�� �Է��ѰŴ�?" << endl;
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
////	catch(int _Data) //ó���� ������
////	{
////		if (Data != 1)
////			cout << "1�� �ƴϳ�" << endl;
////			throw _Data;
////	}
////	catch (float _Data)
////	{
////		if(Data!=2)
////			cout << "2�� �ƴϳ�" << endl;
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
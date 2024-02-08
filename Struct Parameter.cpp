#include <iostream>

using namespace std;
struct Parameter
{
	string Name = "";
	int Age = 20;
	int Height=180;
	bool IsMan = true;
};

void Test(const Parameter& _Index)
{
	cout << "Test1 : " << _Index.Name << endl;
	cout << "Test1 : " << _Index.Age << endl;
	cout << "Test1 : " << _Index.Height << endl;
	cout << "Test1 : " << _Index.IsMan << endl;
}

int main()
{
	Test({.Name="À¯µ¿¹Î",.Age = 25});
}



//void Function(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, ...)
//{
//	//¾îÂ¼±¸ ÀúÂ¼±¸
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//
//
////false�� �ֵ��� �Ҽ��� ����
//int Prime[1001] = { false };
//
//int main()
//{
//	//0�� 1�� �Ҽ����� ����
//	Prime[0] = true; Prime[1] = true;
//	//�Ҽ��� �������� ������ �Ѿ �� ���� 2���� ����.
//	for (auto i = 2; i < sqrt(1000); ++i) 
//	{
//		if (Prime[i] == false) //���� �������� �湮�� �ȵǾ��ִٸ�
//		{
//			//i�� ����� ����������.
//			for (int j = i+i; j < 1000; j+=i)
//			{
//				Prime[j] = true;
//			}
//		}
//	}
//	//���
//	for (auto i = 0; i < 1000; ++i) {
//		if (Prime[i] == false)
//			cout << i << " ��(��) �Ҽ��Դϴ�." << endl;
//	}
//}
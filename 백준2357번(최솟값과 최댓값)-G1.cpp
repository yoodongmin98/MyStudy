//#include <iostream>
//#include <vector>
//#include <cmath>
//#define Max 1000000001
//using namespace std;
//
////���׸�Ʈ Ʈ����
////-������ �����ϱ����� ����Ʈ������
////-�������(���ܳ��)�� �迭�� ���� �״�� �����ְ�
////-������ ������ �ش� �ڽĵ��� ���� �����ϰ�����
////-Ʈ���� ũ�����ϱ�
////���迭�� ũ�Ⱑ 9���
////���ٻ��� �������� ���ϰ� �װ��� �ø��Ѵ�.(10�̸� 3.xx->4) -> �̰� Ʈ���� ����
////��Ʈ���� ũ�� = 2^(Ʈ������+1)
////�����ǻ� �迭ũ��x4�� �Ҵ��ϰ� ����ϴ°�쵵 ����
////
////���׸�Ʈ Ʈ�� ����
////����
////1.�־��� ������ ������ ������.
////2.������ �� ���������� �������ȣ��,������ ���ȣ���� �Ѵ�.
////3.�� ������ �ݺ��Ѵ�.
////4.�����ϴ¹���=�����¹��� �϶� ��͸� �����.
//
//int N, M;
//vector<int> Arr;
//vector<int> MaxTree; //������ �ִ밪�� ������ ���׸�Ʈ Ʈ��
//vector<int> MinTree; //������ �ּҰ��� ������ ���׸�Ʈ Ʈ��
//vector<int> Result; //����� ����vector
//pair<int,int> FindValue(int Node, int Start, int End, int Left, int Right)
//{
//	//������ ���� ��ġ�� ���� ��
//	if (Left > End || Right < Start) 
//	{ 
//		return make_pair(0,Max); //�ּҰ��� ���ϱ����� ū ���� ����
//	}
//	//������ ��ĥ �� ex) 3~6������ ���ϰ��ִٸ� 3~4���� ���� ����
//	if (Left <= Start && End <= Right) 
//	{ 
//		return make_pair(MaxTree[Node],MinTree[Node]); 
//	}
//	//Ʈ�� ������ �Ȱ��� ������ �ɰ��鼭 ����
//	int Mid = (Start + End) / 2;
//	//��� ����
//	 /*           ��
//				��
//			  ��
//			��    <-�̷������� left���� ä�����鼭 ��͸���            */
//	pair L = FindValue(Node * 2, Start, Mid, Left, Right);
//	pair R = FindValue(Node * 2+1, Mid+1, End, Left, Right);
//	//L��R(�ڽĳ��)�� ���ذ��鼭 ū���� �������� return
//	return make_pair(max(L.first,R.first),min(L.second,R.second));
//}
//void CreateTree(int Node, int Start, int End)
//{
//	//������ �ɰ��ٰ� ���̻� �ɰ� ������ ������(��������϶�)
//	if (Start == End) {
//		//������忡 �迭�� ���� ����
//		MaxTree[Node] = Arr[End]; //start��end�� �Ȱ��Ƽ� �ƹ��ų� �־��
//		MinTree[Node] = Arr[End];
//		return;
//	}
//	//�ɰ� ������ �ִٸ�
//	int Mid = (Start + End) / 2;
//	CreateTree(Node * 2, Start, Mid); //����,������ ������ ����
//	CreateTree(Node * 2+1, Mid+1, End); //ex) 0~9��� mid�� 4�̹Ƿ� 0~4�� 5~9 �������� ����
//	//�� �� ����(���� ������)�߿� ū���� max tree �������� min tree�� ����
//	MaxTree[Node] = max(MaxTree[Node * 2], MaxTree[(Node * 2) + 1]);
//	MinTree[Node] = min(MinTree[Node * 2], MinTree[(Node * 2) + 1]);
//}
//int main()
//{
//	cin >> N;
//	cin >> M;
//	MaxTree.resize(N*4);//
//	MinTree.resize(N*4);
//	for (auto i = 0; i < N; ++i)
//	{
//		int Num;
//		cin >> Num;
//		Arr.push_back(Num);
//	}
//	//Arr�迭 �������� ���׸�Ʈ Ʈ�� ����
//	CreateTree(1, 0, Arr.size() - 1);
//	for (auto k = 0; k <M; ++k)
//	{
//		int L, R;
//		cin >> L >> R;
//		//���������� �ִ밪 �ּҰ� �� pair�� �����ͼ�
//		pair p = FindValue(1, 1, Arr.size() , L, R);
//		//�����vector�� ��� 
//		Result.push_back(p.second);
//		Result.push_back(p.first);
//	}
//	for (auto j = 0; j < Result.size(); j+=2)
//	{
//		//���⼭ ���
//		cout << Result[j] << " " << Result[j + 1] << "\n";
//	}
//}
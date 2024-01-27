//#include <string>
//#include <vector>
//#include <queue>
//#include <tuple>
//using namespace std;
//
//vector<string> solution(vector<string> files) {
//    priority_queue<tuple<string,int,int>> Test; //Head,Number,index
//    vector<string> Result; //¹ÝÈ¯°ª
//    for (auto i = 0; i < files.size(); ++i)
//    {
//       string Head,Num;
//       bool TailCheck = false;
//       for(auto k=0; k<files[i].size(); ++k)
//       {
//           if (TailCheck == true && (files[i][k] < 48 || files[i][k] > 57))
//           {
//               break;
//           }
//           if (files[i][k] >= 48 && files[i][k] <= 57)
//           {
//               TailCheck = true;
//               Num += files[i][k];
//           }
//           else
//           {
//               Head += tolower(files[i][k]);
//           }
//       }
//       Test.push(make_tuple(Head,stoi(Num),i));
//    }
//    int Size =Test.size();
//    Result.resize(Size);
//    while(Size--)
//    {
//        Result[Size]=(files[get<2>(Test.top())]);
//        Test.pop();
//    }
//    return Result;
//}
//
//int main()
//{
//    vector<string> Test = { "F-5 Freedom Fighter", "B-50 Superfortress","AF-07 Thunderbolt II" ,"A-10 Thunderbolt II", "F-14 Tomcat" };
//   
//    solution(Test);
//}
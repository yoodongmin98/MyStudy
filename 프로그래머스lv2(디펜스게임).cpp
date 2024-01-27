//#include <string>
//#include <vector>
//#include <queue>
//#include <iostream>
//using namespace std;
//
//int solution(int n, int k, vector<int> enemy) {
//    priority_queue<int> DeathEnemy;
//    int Round = 0;
//    for (auto i = 0; i < enemy.size(); ++i)
//    {
//        n -= enemy[i];
//        DeathEnemy.push(enemy[i]);
//        if(n < 0 && k!=0)
//        {
//            n +=DeathEnemy.top();
//            DeathEnemy.pop();
//            --k; 
//        }
//        if (n >= 0)
//        {
//            Round++;
//        }
//        else if (n < 0 && k == 0)
//        {
//            break;
//        }
//    }
//    return Round;
//}
//
//int main()
//{
//    vector<int> enemy = { 12,11,4,2,1,5,8,6,7};
//    int result = solution(10,13, enemy);
//    cout << result << endl;
//}
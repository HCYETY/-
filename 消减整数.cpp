题目描述：
给出一个正整数H，从1开始减，第一次必须减1，每次减的数字都必须和上一次相同或者是上一次的两倍，请问最少需要几次能把H恰好减到0。

输入描述:
第一行给出一个正整数T，1<=T<=10的4次方
接下来T行每行一个H,1<=H<=10的9次方

输出描述:
每行一个正整数代表最少的次数

输入：
3
3
5
7
输出：
2
3
3

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int H, count=0, minus=1;
        cin>>H;
        while(H) {
            H -= minus;
            count++;
            if(H%(minus*2)==0) {
                minus *= 2;
            }
        }
        cout<<count<<endl;
    }
}

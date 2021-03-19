/*
题目描述：
有n个果冻排成一排。第i个果冻的美味度是 ai 。
天使非常喜欢吃果冻，但她想把最好吃的果冻留到最后收藏。天使想知道前x个果冻中，美味度第二大的果冻有多少美味度？
一共有q次询问。
注：如果最大的数有两个以上，默认第二大的等于最大的。例如，[2,3,4,2,4]这个序列，第二大的数是4。

输入描述:
第一行一个正整数n。
第二行n个正整数ai，用空格隔开。
第三行一个正整数q。
接下来的q行，每行一个正整数x，代表一次询问。

输出描述:
输出q行，每行一个正整数，代表一次询问，输出前x个果冻中美味度第二大的值。

输入:
5
1 2 5 3 5
4
2
3
4
5
输出:
1
2
3
5

说明:
前2个数，第二大的是1。
前3个数，第二大的是2。
前4个数，第二大的是3。
前5个数，第二大的是5。
*/
#include <iostream>
using namespace std;

int main()
{
    long int n, num[100010], max=0, second_max=0, sign[100010];
    cin>>n;  // 表示n个果冻
    for(int i=1; i<=n; i++) {
        cin>>num[i]; // 输入果冻的美味度
        if(num[i]>=max){
            second_max = max;
            max = num[i];
        } else if(num[i]>=second_max){
            second_max = num[i];
        }
        sign[i] = second_max; // 标记美味度第二大的果冻有多少美味度
    }
    int q; // 表示q次询问
    cin>>q;
    while(q--) {
    	  int x; // 表示前x个果冻
        cin>>x;
        cout<<sign[x]<<endl;
    }
}

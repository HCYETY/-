/*
题目描述:
在一个竖直的洞里有 n 个有重量的球，需要进行 m 次操作，每次操作需要将其中一个球拿出来然后放在最上面 。
取出一个小球放在最上面需要消耗的体力为它上面的小球的重量之和 。
现在给定每次操作需要取的小球的编号，要求出一种初始的放球方案使得消耗的总体力最少 。

输入描述:
第一行两个正整数 n 和 m，意义如题所示 。
第二行 n 个正整数，分别表示 n 个球的重量 。
第三行 m 个正整数，分别表示 m 次操作取出小球的编号 。
输出描述:
一个整数表示消耗的总体力的最小值 。

输入:
3 3
1 2 3
3 2 1
输出:
8

备注:
n,m <= 2000,1 <= 每个小球的重量 <= 100 。
*/
#include<bits/stdc++.h>
using namespace std;

int weight[2005]; // 存放小球的重量
int cnt[2005];
long long ans=0;

int main()
{
    int n,m; // n个小球， m次操作
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
       cin>>weight[i];
    }
	long long count=0; //
	for(int i=1; i<=m; i++) {
		int now; // 小球的编号
		cin>>now;
		for(int j=1; j<=n; j++) {
			if(cnt[j]>cnt[now]) {
                ans += weight[j];
            }
		}
		cnt[now]=++count;
	}
	cout<<ans<<endl;
	return 0;
}

/*链接：https://ac.nowcoder.com/acm/contest/11231/A
来源：牛客网

题目描述
给定两个十进制整数 : AA,BB

你需要把它们的二进制形式以十进制的运算法则相加输出结果。

例如：

A = 3 , B = 2A=3,B=2 的时候，AA 的二进制表示是 : 1111 , BB 的二进制表示是 1010 ，你需要输出答案为 : 2121


输入描述:
一行两个十进制整数: AA,BB
输出描述:
一行一个整数，表示相加的结果。
示例1
输入
复制
2 3
输出
复制
21
示例2
输入
复制
5 4
输出
复制
201
备注:


对于 100100 % 的数据:

1 <= A,B <= 327681<=A,B<=32768

关于一个十进制数如何转化为二进制：

将十进制数每次除以 22 ，取余数，直到这个数变为0，最后将得到的余数反向记录就是原十进制数的二进制形式。

例子:

1
2
3
4
10-----> 5余下 0
5------> 2余下 1
2------> 1余下 0
1------> 0余下 1
最后得到 1010 的二进制表示就是 10101010 */


#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int a, b, x[32], y[32], i=0, j=0, count=0, count2=0;
    cin>>a>>b;
    string sign, sign2;
    while(a/2!=0) {
        x[++i] = a % 2;
        count++;
    }
    for(i=count; i>=0; i++) {
        sign += x[i];
    }
    int num = stoi(sign, 0, 10);
    while(b/2!=0) {
        y[++j] = b % 2;
        count2++;
    }
    for(j=count2; j>=0; j++) {
        sign2 += y[j];
    }
    int num2 = stoi(sign2, 0, 10);
    int sum=0;
    sum = num + num2;
    cout<<sum;
}

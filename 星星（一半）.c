/*
题目描述：
牛牛带着他的小伙伴跑去天上摘星星了。
每一只牛都摘了一堆星星，由于他们去的区域不同，所以所摘的星星数量也不同，但是他们是相亲相爱的一家人，所以他们围成一个圈
他们想办法将星星数量均分，但是牛牛们的手很短，每次只能跟相邻的一个人进行交易， 现在问最少需要交易多少次，每个人才能获得相等的星星，题目保证有解。

输入：
4
0 2 8 6
输出：
8

说明 ：
4给1两个，3给2四个，2给1两个，2+4+2=8
*/

#include <stdio.h>
int main()
{
    int num, add[100], sum=0, avg=0, count, cut;
    scanf("%d\n", &num);
    for(int i=1; i<=num; i++) {
        scanf("%d", &add[i]);
        sum += add[i];
        avg = sum / num;
    }
    for(int i=1; i<=num; i++) {
        if(add[i]<avg) {
            break;
        } else{
            if(add[i]>add[i+1] && add[i]>avg) {
                cut = add[i] - avg;
                add[i] -= cut;
                count = cut;
                add[i+1] += cut;
                count = cut;
            }
        }
    }
    printf("%d", count);
}

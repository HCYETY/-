/*
��Ŀ������
ţţ��������С�����ȥ����ժ�����ˡ�
ÿһֻţ��ժ��һ�����ǣ���������ȥ������ͬ��������ժ����������Ҳ��ͬ�����������������మ��һ���ˣ���������Χ��һ��Ȧ
������취�������������֣�����ţţ�ǵ��ֺ̣ܶ�ÿ��ֻ�ܸ����ڵ�һ���˽��н��ף� ������������Ҫ���׶��ٴΣ�ÿ���˲��ܻ����ȵ����ǣ���Ŀ��֤�н⡣

���룺
4
0 2 8 6
�����
8

˵�� ��
4��1������3��2�ĸ���2��1������2+4+2=8
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

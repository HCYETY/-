/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 返回牛牛获得的快乐指数
 * @param n int整型 题单里的题目数量
 * @return int整型
 */
int doQuestion(int n ) {
    int sum, sum2;
    int i, j;
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            if(i%j==0) {
                sum += j; /* sum为所有因子之和 */
            }
            if(sum/i<2) {
                sum2 += i;
            }
        }
        return sum2;
    }
    return 0;
}

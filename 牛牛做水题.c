/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 * ����ţţ��õĿ���ָ��
 * @param n int���� �ⵥ�����Ŀ����
 * @return int����
 */
int doQuestion(int n ) {
    int sum, sum2;
    int i, j;
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            if(i%j==0) {
                sum += j; /* sumΪ��������֮�� */
            }
            if(sum/i<2) {
                sum2 += i;
            }
        }
        return sum2;
    }
    return 0;
}

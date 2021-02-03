/*
若一个数的首位和末位相等，则定义这个数为“好数”。
例如：1231、4512394是好数，而12345、768740则不是好数。
请你编写一个函数，判断是不是好数。如果是好数则返回true，否则返回false。

输入：1231
返回值：true
说明：首位和末位都是1，相等。

输入：4
返回值：true
说明：首位和末位都是4，相等。
*/

#include <stdbool.h>
bool judge(int x ) {
    // write code here
        int a=x%10;
        while(x > 9)
        {
            x=x/10;
        }
        if(a==x) {
            return true;
        } else {
            return false;
        }
}

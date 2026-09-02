/*
【202109211307】已知k阶裴波那契序列的定义为f(0)=0,f(1)=0,...,f(k-2)=0,f(k-1)=1;f(n)=f(n-1)+f(n-2)+...+f(n-k),n=k,k+1,.试编写求k阶裴波那契序列的第m项值的函数算法，k和m均以值调用的形式在函数参数表中出现。
要求实现下列函数:
Status Fibonacci(int k, int m, int &f);如果能求得k阶斐波那契序列的第m项的值，则返回oK;否则(比如，参数k和m不合理)返回ERROR
*/

#include "allinclude.h"  //DO NOT edit this line
Status Fibonacci(int k, int m, int &f) { 
    // Add your code here
    
    if (k <= 1 || m < 0) {
        return ERROR;
    }
    else {

        if (m < k) {
            int arr[k] = {0};
            arr[k-1] = 1;
            f = arr[m];
        }
        else {
            int arr[m+1] = {0};
            arr[k-1] = 1;
            for (int i = k; i <= m; i++) {
                int sum = 0;

                for (int j = i-1; j >= i-k; j--) {
                    sum += arr[j];
                }
                arr[i] = sum;
                
            }
            f = arr[m];

        }

        return OK;
    }
    
}

/*************************************************************************
	> File Name: 线性筛.c
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2019年03月23日 星期六 09时46分29秒
 ************************************************************************/

#include <stdio.h>

#define MAX_N 100

int main() {
    int prime[MAX_N] = {0};
    for(int i = 2; i < MAX_N; i++) {
        if(!prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j < prime[0] && i * prime[j] <= MAX_N; j++) {
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) {
                break;
            }
        }
    }
    for(int i = 1; i <= prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    return 0;
}

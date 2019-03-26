/*************************************************************************
	> File Name: 机器人.c
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2019年03月23日 星期六 15时32分48秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>


int main() {
    int y = 1; //面向x轴 正1 负3 y轴 正4 负2
    char* str;
    int n, x;
    int x1 = 0, y1 = 0;
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++) {
        scanf("%s %d", str, &x);
        if(!strcmp (str, "forward")){
            if(y > 4) y %= 4;
            if(y == 1) x1 += x;
            else if(y == 2) y1 -= x;
            else if(y == 3) x1 -= x;
            else y1 += x;
        } else if(!strcmp(str, "back")) {
            y += 2;
            if(y > 4) y %= 4;
            if(y == 1) x1 += x;
            else if(y == 2) y1 -= x;
            else if(y == 3) x1 -= x;
            else y1 += x;
        } else if(!strcmp(str, "left")) {
            y += 3;
            if(y > 4) y %= 4;
            if(y == 1) x1 += x;
            else if(y == 2) y1 -= x;
            else if(y == 3) x1 -= x;
            else y1 += x;
        } else {
            y += 1;
            if(y > 4) y %= 4;
            if(y == 1) x1 += x;
            else if(y == 2) y1 -= x;
            else if(y == 3) x1 -= x;
            else y1 += x;
        }
        //printf("%d", y);
    }
    printf("%d %d\n", x1, y1);
    return 0;
}

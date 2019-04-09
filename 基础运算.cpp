#include <stdio.h>

int main() {
	int a = 2;
	int b = 3;
	int c;
	c = a + b;
	printf("%d\n", c);
	c = b - a;
	printf("%d\n", c);
	c = a * b;
	printf("%d\n", c);
	c = b / a;
	printf("%d\n", c);	//如果接收值为整形就会保留整数位会舍弃小数点之后的数字  3 / 2 = 1.5会显示为1 
	return 0;
} 

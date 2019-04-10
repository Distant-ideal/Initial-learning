#include <stdio.h>

struct {
	int a;
	int b;
	int c;
} add[2];

struct cell {
	struct cell *pnext = NULL;
};

int main() {
	for(int i = 0; i < 2; i++) {
		scanf("%d %d", &add[i].a, &add[i].b);
	}
	for(int i = 0; i < 2; i++) {
		printf("%d %d", add[i].a, add[i].b);
	}
	return 0;
} 

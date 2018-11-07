/* @JUDGE_ID:  841985  10970 C "Big Chocolate" */
#include<stdio.h>
#include<stdlib.h>

int main() {
	unsigned long m, n;

	while(scanf("%d %d",&m, &n) == 2) {
		printf("%d\n", (m*n-1));
	}

	return 0;
}

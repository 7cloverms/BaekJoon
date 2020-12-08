#include<stdio.h>

int main()
{
//a=몇번째 b=숫자합 i=줄
	int a, i;
	scanf("%d", &a);
	for (i = 1; a > i; a -= i++);
	(i % 2 == 1) ? printf("%d/%d", i + 1 - a, a) : printf("%d/%d", a, i + 1 - a);
}
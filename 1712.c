#include<stdio.h>

int main()
{
	int a, b, c, i;
	scanf("%d %d %d", &a, &b, &c);
    if (b >= c){
		printf("-1");
		return 0;
	}
	i = a / (c - b);
	if (a + b*i >= c*i){
		i += 1;
	}

	
	printf("%d", i);
    return 0;
}
#include <stdio.h>
int f(int n)
{
	if(n>0)
	{
		if (n==1)
		{
			return 1;
		}
		if(n==2)
		{
			return 2;
		}
		else 
		{
			return f(n-1)+f(n-2);
		}
	}
	else 
	return 0; 
}
int main()
{
	int n;
	printf("请输入个台阶：\n");
	scanf("%d",&n);
	printf("走法有：\n");
	printf("%d",f(n));
	return 0;
}

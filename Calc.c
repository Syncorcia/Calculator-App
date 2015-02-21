#include<stdio.h>

int diff(int a,int b)
{
	return a-b;
}

int add(int a,int b)
{
	return a+b;
}

int divide(int a,int b)
{
	return a/b;
}

int multiply(int a,int b)
{
	return a*b;
}

int main()
{
	int x, y;
	printf("Enter two values: ");
	scanf("%d %d", &x, &y);
	printf("%d, %d, %d, %d", add(x, y), diff(x, y), divide(x, y), multiply(x, y));
	return 0;
}

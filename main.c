#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int get_integer(void);
int combination(int,int);
int factorial(int);


int main(void)
{
	int a,b;
	
	a = get_integer();
	b = get_integer();
	
	printf("C(%d,%d)= %d\n",a,b,combination(a,b));
	return 0;
}

int combination(int n, int r)
{
	return(factorial(n)/(factorial(r)*factorial(n-r)));
}
	
int get_integer(void)
{
	int n;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	return n;
}

int factorial(int n)
{
	int i;
	long result = 1;
	
	for(i=1;i<=n;i++)
		result*=i; 
	return result;
}


#include<stdio.h>
int main()
{
	int m,n,a,b,temp;
	printf("输入两个正整数m和n: ");
	scanf("%d%d",&m,&n);
	a=m;
	b=n;//碾转相除法求最大公约数
	while(b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	 } 
	int gcd=a;
	int lcm=m*n/gcd;//最小公倍数=两数乘积/最大公约数
	printf("最大公约数：%d\n",gcd);
	printf("最小公倍数：%d\n",lcm);
	return 0; 
}

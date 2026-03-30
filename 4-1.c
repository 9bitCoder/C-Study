#include<stdio.h>
#include<math.h>
int main()//调用求平方根函数sqrt 
{
	double a,b,c,disc,x1,x2,p,q;//disc是判别式 
	scanf("%lf%lf%lf",&a,&b,&c);//输入双精度浮点型变量的值要用%lf 
	disc=b*b-4*a*c;
	if(disc<0) 
	 printf("This eqution hasn't real roots\n");
	else
	{
		p=-b/(2.0*a);
		q=sqrt(disc)/(2.0*a);
		x1=p+q;x2=p-q;
		printf("real roots:\nxl=%7.2f\nx2=%7.2f\n",x1,x2);
	}
	return 0;
}

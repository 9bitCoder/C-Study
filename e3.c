#include<stdio.h>
#include<math.h>
int main()
{
	double r1=0.015,r2=0.021,r3=0.0275,r5=0.03,r6=0.0035,p0=1000;
	//一次存五年 
	double p1=p0*(5*r5);
	printf("%f\n",p1);
	//先存两年，到期将本息再存两年
	double p2=p0*(1+2*r2);
	double p3=p2*(3*r3);
	printf("%f\n",p3);
	//先存三年，到期将本息再存一年，连续存五次
	double p4=p0*(1+3*r3);
	double p5=p4*pow((1+r1),5);
	double p6=p5-p0;
	printf("%f\n",p6);
	//先存3年，到期再将本息再存2年
	double p7=p0*(1+3*r3);
	double p8=p6*(1+2*r2);
	double p81=p8-p0;
	printf("%f\n",p8);
	//活期，每季度结算一次
	double p9=p0*pow((1+r5/4),4*5);
	double p10=p9-p0;
	printf("%f\n",p10);
	return 0;
}

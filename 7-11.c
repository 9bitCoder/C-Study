#include <stdio.h>
int main()
{
    float average(float array[], int n);
    float score1[5] = {98.5, 97, 91.5, 60, 55};  // 定义长度为5的数组
    float score2[10] = {67.5, 89.5, 99, 69.5, 77, 89.5, 76.5, 54, 60, 99.5};  // 定义长度为10的数组
    printf("The average of class A is %6.2f\n", average(score1, 5));  // 用数组名score1和5作实参
    printf("The average of class B is %6.2f\n", average(score2, 10));  // 用数组名score2和10作实参
    return 0;
}

// 定义average函数，未指定形参数组长度
float average(float array[], int n)
{
    int i;
    float aver, sum = array[0];
    for (i = 1; i < n; i++)  // 累加n个学生成绩
        sum = sum + array[i];
    aver = sum / n;
    return (aver);
}

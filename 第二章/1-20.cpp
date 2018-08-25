/*
	1.20 编写程序，求用户指定范围内数的和，省略设置上界和下界的if测试。假定输入的数是7和3，按照这个顺序，预测程序
	运行的结果。然后按照给定的数是7和3运行程序，看结果是否与你预测的相符。如果不相符，反复研究关于for和while循环的
	讨论知道弄清楚其中的原因。
*/

#include<stdio.h>
#include<iostream>


void print_sum()
{
	int num1 = 0, num2 = 0;
	printf("请两个整数，使用空格键隔开:\n");
	scanf_s("%d %d", &num1, &num2);//这里使用scanf_s 是因为启动了安全检查，不然使用scanf 编译时会报C4996: 'scanf': This function or variable may be unsafe的安全检查错误
	int tmp = 0;
	int sum = 0;
	if (num1 > num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	
	{
		for (; num1 <= num2; num1++)
		{
			sum += num1;
			
		}

	}
	printf("sum = %d\n",sum);
}


int main()
{
	print_sum();
	return 0;
}



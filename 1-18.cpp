/*
1.18 编写程序，提示用户输入两个数并将两个数的范围内的每个数写到标准输出。

*/

#include<iostream>
#include<stdio.h>

void print_num_between_num()
{
	int num1 = 0, num2 = 0;
	printf("请两个整数，使用空格键隔开:\n");
	scanf_s("%d %d",&num1, &num2);//这里使用scanf_s 是因为启动了安全检查，不然使用scanf 编译时会报C4996: 'scanf': This function or variable may be unsafe的安全检查错误
	int tmp =0;
	if (num1 > num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	else
	{
		for (; num1 <= num2; num1++)
		{
			printf("%d ",num1);
		}

	}



}


int main()
{

	print_num_between_num();
	return 0;
}




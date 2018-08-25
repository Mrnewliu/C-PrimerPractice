/*
	1.19 如果上题给定数1000和2000，程序将产生什么样的结果？修改程序，使用每行输出不超过10个数字
*/



#include<iostream>
#include<stdio.h>
void print_num_between_num()
{
	int num1 = 0, num2 = 0;
	printf("请两个整数，使用空格键隔开:\n");
	scanf_s("%d %d", &num1, &num2);//这里使用scanf_s 是因为启动了安全检查，不然使用scanf 编译时会报C4996: 'scanf': This function or variable may be unsafe的安全检查错误
	int tmp = 0;
	int count = 0;
	if (num1 > num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	//else
	{
		for (; num1 <= num2; num1++)
		{	
			
			if (count <= 10)
			{
				count++;
				printf("%d ", num1);
			}
			else
			{
				printf("\n");
				count = 0;
			}
			
		}
	}
}


int main()
{
	print_num_between_num();
	return 0;
}

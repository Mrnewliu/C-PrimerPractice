/*
1.18 ��д������ʾ�û����������������������ķ�Χ�ڵ�ÿ����д����׼�����

*/

#include<iostream>
#include<stdio.h>

void print_num_between_num()
{
	int num1 = 0, num2 = 0;
	printf("������������ʹ�ÿո������:\n");
	scanf_s("%d %d",&num1, &num2);//����ʹ��scanf_s ����Ϊ�����˰�ȫ��飬��Ȼʹ��scanf ����ʱ�ᱨC4996: 'scanf': This function or variable may be unsafe�İ�ȫ������
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




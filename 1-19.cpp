/*
	1.19 ������������1000��2000�����򽫲���ʲô���Ľ�����޸ĳ���ʹ��ÿ�����������10������
*/



#include<iostream>
#include<stdio.h>
void print_num_between_num()
{
	int num1 = 0, num2 = 0;
	printf("������������ʹ�ÿո������:\n");
	scanf_s("%d %d", &num1, &num2);//����ʹ��scanf_s ����Ϊ�����˰�ȫ��飬��Ȼʹ��scanf ����ʱ�ᱨC4996: 'scanf': This function or variable may be unsafe�İ�ȫ������
	int tmp = 0;
	int count = 0;
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
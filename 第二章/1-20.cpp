/*
	1.20 ��д�������û�ָ����Χ�����ĺͣ�ʡ�������Ͻ���½��if���ԡ��ٶ����������7��3���������˳��Ԥ�����
	���еĽ����Ȼ���ո���������7��3���г��򣬿�����Ƿ�����Ԥ�����������������������о�����for��whileѭ����
	����֪��Ū������е�ԭ��
*/

#include<stdio.h>
#include<iostream>


void print_sum()
{
	int num1 = 0, num2 = 0;
	printf("������������ʹ�ÿո������:\n");
	scanf_s("%d %d", &num1, &num2);//����ʹ��scanf_s ����Ϊ�����˰�ȫ��飬��Ȼʹ��scanf ����ʱ�ᱨC4996: 'scanf': This function or variable may be unsafe�İ�ȫ������
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



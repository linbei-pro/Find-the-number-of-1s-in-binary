//��һ���������ڴ�洢�еĶ�������1�ĸ���

//���������еĶ�������1�ĸ���
#include<stdio.h>

int main()
{
	int n = 0, m = 0;
	int i = 0;
	scanf_s("%d", &n);

	int count = 0;
	for (i = 32; i > 0; i--)
	{
		m = n & 1;
		if (m == 1)
		{
			count++;
		}
		n = n >> 1;
		m = 0;
	}
	printf("%d", count);
	return 0;
}
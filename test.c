//求一个整数在内存存储中的二进制中1的个数

//就是求补码中的二进制中1的个数
#include<stdio.h>

int main()
{
	int n = 0, m = 0;
	int i = 0;
	scanf_s("%d", &n);

	int count = 0;
	for (i = 32; i > 0; i--)//一个整数是4个字节，也就是32个比特位
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

#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int nmsl(int arr[], int num, int n);

int main(void)
{
	int arrA[5], arrB[8], num, minPosA, minPosB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	minPosA = nmsl(arrA, num, 5);  /* userCode(<50字符): 调用函数查找在arrA中大于num的最小数所在的下标 */
	if (-1 == minPosA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nminPos(arrA) = %d", minPosA);
	}

	minPosB = nmsl(arrB, num, 8);   /* userCode(<50字符): 调用函数查找在arrB中大于num的最小数所在的下标 */
	if (-1 == minPosB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nminPos(arrB) = %d\n", minPosB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int nmsl(int arr[], int num, int n)
{
	int i, cha = 999999, xiabiao, cishu = 0;

	for ( i = 0; i < n; i++)
	{
		if (arr[i] > num)
		{
			cishu++;
			if ((arr[i] - num) < cha)
			{
				cha = arr[i] - num;
				xiabiao = i;
			}
		}
		
	}
	
	if (cishu != 0)
	{
		return xiabiao;
	}
	else
	{
		return -1;
	}
	

}



#include <stdio.h>

int main(void)
{
	int arr[20][20], mnum, nnum, i, j, n, sum = 0;

	printf("请输入 m 和 n: ");
	scanf("%d %d", &mnum, &nnum);
	printf("请输入 %d 行, 每行 %d 列整数:\n", mnum, nnum);
	for ( i = 0; i < mnum; i++)
	{
		for ( j = 0; j < nnum; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
    printf("请输入要计算和之列的列号: ");
    scanf("%d", &n);
	for ( i = 0; i < mnum; i++)
	{
		sum = sum + arr[i][n];
	}
		
	printf("\n该列上各元素之和为:%d", sum);

	return 0;
	
	
}
#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
void nmsl(float *arr, float *sum, int *gt, int gesu);

int main(void)
{
	float arr1[6], arr2[8], arr3[12], sumA, sumB, sumC;
	int gt70A, gt70B, gt70C;
	
	nmsl(arr1, &sumA, &gt70A, 6);  /* userCode(<80�ַ�): ���ú����� 6������arr1�У�������ͼ�>70�ĸ��� */
	nmsl(arr2, &sumB, &gt70B, 8);  /* userCode(<80�ַ�): ���ú����� 8������arr2�У�������ͼ�>70�ĸ��� */
	nmsl(arr3, &sumC, &gt70C, 12);  /* userCode(<80�ַ�): ���ú�����12������arr3�У�������ͼ�>70�ĸ��� */

	printf("\narr1[ 5]=%4.1f, sum(arr1)=%5.1f, cnt(arr1)=%d",   arr1[5],  sumA, gt70A);
	printf("\narr2[ 7]=%4.1f, sum(arr2)=%5.1f, cnt(arr2)=%d",   arr2[7],  sumB, gt70B);
	printf("\narr3[11]=%4.1f, sum(arr3)=%5.1f, cnt(arr3)=%d\n", arr3[11], sumC, gt70C);
	
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void nmsl(float *arr, float *sum, int *gt, int gesu)
{
	int i;

	*sum = 0;
	*gt = 0;
	printf("������%2d����: ", gesu);
	for (i = 0; i < gesu; i++)
	{
		scanf("%f", &arr[i]);
	}
	for (i = 0; i < gesu; i++)
	{
		*sum += *arr;
		if (*arr > 70)
		{
			(*gt)++;
		}
		arr++;
	}
	/*for (i = 0; i < gesu; i++)
	{
		*sum += arr[i];
		if (arr[i] > 70)
		{
			*gt++;
		}
	}*/
}
#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int nmsl(int arr[], int searchVal, int n);

int main(void)
{
	int arrA[5], arrB[8], searchVal, positionA, positionB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("������һ�������ҵ�����");
	scanf("%d", &searchVal);

	positionA = nmsl(arrA, searchVal, 5);  /* userCode(<50�ַ�): ���ú�������searchVal��arrA�е��±� */
	if (-1 == positionA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\narrA: position = %d", positionA);
	}

	positionB = nmsl(arrB, searchVal, 8);  /* userCode(<50�ַ�): ���ú�������searchVal��arrB�е��±� */
	if (-1 == positionB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\narrB: position = %d\n", positionB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int nmsl(int arr[], int searchVal, int n)
{
	int i = 0, jisu = 0;

	for ( i = 0; i < n; i++)
	{
		if (arr[i] == searchVal)
		{
			return i;
		}
		
	}

	return -1;
	

}


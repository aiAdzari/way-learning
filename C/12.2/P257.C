#include<stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void nmsl(float *numa, float *numb);

int main(void)
{
	float numA, numB;

	printf("please input numA, numB: ");
	scanf("%f,%f", &numA, &numB);

	nmsl(&numA, &numB);  /* userCode(<40�ַ�): ���ú���ʵ��numA��numBֵ�Ľ��� */
	printf("\nnumA=%.3f, numB=%.3f\n", numA, numB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void nmsl(float *numa, float *numb)
{
	float tem;

	tem = *numa;
	*numa = *numb;
	*numb = tem;

}
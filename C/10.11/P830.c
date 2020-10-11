#include <stdio.h>

int main(void)
{
	int nnum=1, mnum, sum=1;

	printf("please input m: ");
	scanf("%d", &mnum);
	while (sum <= mnum)
	{
		nnum++;
		sum = sum + nnum;
		
	}
	printf("\nResult: n=%d, sum=%d", nnum -1, sum - nnum);

	return 0; 

}
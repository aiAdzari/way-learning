#include <stdio.h>

int main(void)
{
	int arr[20][20], mnum, i, j, inum, jnum;

	printf("Please input m: ");
	scanf("%d", &mnum);
	printf("\nPlease input array:\n");
	for ( i = 0; i < mnum; i++)
	{
		for ( j = 0; j < mnum; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		
	}
	inum = mnum - 1;
	jnum = mnum - 1;
	for ( i = mnum - 1; i >= 0; i--)
	{
		for ( j = mnum - 1; j >= 0; j--)
		{
			if (arr[inum][jnum] < arr[i][j])
			{
				inum = i;
				jnum = j;
			}
			
		}
		
	}
	printf("\nmax=%d,i=%d,j=%d\n", arr[inum][jnum], inum, jnum);

	return 0;
	
	
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("    usage: P119  num1 num2 num3\n");
		exit(8);
	}
	else
	{
		printf("    %d + (%.3f + %.3f) / 2   =  %.3f\n",
			atoi(argv[1]), atof(argv[2]), atof(argv[3]), atof(argv[1]) + ( atof(argv[2]) + atof(argv[3]) ) / 2);
	}
	
	return 0;

	
}
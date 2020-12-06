#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("    usage: P117  num1 num2\n");
		exit(76);
	}
	else
	{
		printf("    (%.3f - %.3f) * 3   =  %.3f\n", atof(argv[1]),
			atof(argv[2]), ( atof(argv[1]) - atof(argv[2]) ) * 3);
	}

	return 0;
	
	
}

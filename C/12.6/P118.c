#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("    usage: P118  num1 num2\n");
		exit(103);
	}
	else
	{
		printf("    (%.3f*%.3f - %.3f*%.3f) / 6   =  %.3f\n",
			atof(argv[1]), atof(argv[1]), atof(argv[2]), atof(argv[2]),
				( atof(argv[1]) * atof(argv[1]) - atof(argv[2]) * atof(argv[2]) ) / 6);
	}
	
	return 0;

	
}
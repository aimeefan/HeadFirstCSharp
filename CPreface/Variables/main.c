#include <stdio.h>
main()
{
	int celsius, fahr;
	int lower = 0;
	int upper = 300;
	int step = 20; 
	fahr = upper;
	while (fahr >= lower)
	{
		celsius = (5.0 / 9.0)*(fahr - 32);
		printf("%3d\t%3d\n", fahr, celsius);
		fahr = fahr - step;
	}
	getchar();
}
#include <stdio.h>
main()
{
	int c = getchar();
	while (c != EOF)
	{
		if (c == '\t') {
			printf("\\t");
		}
		else if (c == '\\') {
			printf("\\\\");
		}
		else {
			putchar(c);
		}

		c = getchar();
	}
}
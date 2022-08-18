#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int i;
	for (i = 100; i < 201; i++)
	{
		for ( a = 2; a < i; a++)
		{
			if (i % a == 0)
				
			break;
			
		}

		if (i == a)
		{
			printf("%d\n", i);

		}
	}
	



	return 0;
}



		

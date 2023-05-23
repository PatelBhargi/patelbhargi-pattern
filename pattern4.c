#include<stdio.h>

main()
{

	int k,l;
	
	
	for(k=5;k>=1;k--)
	{
		for (l=5;l>=k;l--)
		{
			printf("%d",l);
		}
		printf("\n");
		
	}
}

#include<stdio.h>

void nonfact(int ino)
{
	int icnt=0;
	int mult=1;
	
	for(icnt=1;icnt<=ino;icnt++)
	{
		if (ino%icnt!=0)
		{
			printf("%d\n",icnt);
		}
	}		
}
int main()
{
	int value=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	
	nonfact(value);

    return 0;
}
	
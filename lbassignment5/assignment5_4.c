#include<stdio.h>

int sumnonfact(int ino)
{
	int icnt=0;
	int sum=0;
	
	for(icnt=1;icnt<=ino;icnt++)
	{
		if (ino%icnt!=0)
		{
			
			sum=sum+icnt;
		}
	}
return sum;	
}
int main()
{
	int value=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	
	ret=sumnonfact(value);
	printf("summetion is:%d",ret);

    return 0;
}
	
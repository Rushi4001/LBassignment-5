#include<stdio.h>

int factdiff(int ino)
{
	int icnt=0;
	int sum1=0;
	int sum2=0;
	
	for(icnt=1;icnt<ino;icnt++)
	{
		if (ino%icnt!=0)
		{
			
			sum1=sum1+icnt;
		}
		
		else if (ino%icnt==0)
		{
			
			sum2=sum2+icnt;
		}
	}
return sum1-sum2;	
}
int main()
{
	int value=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	
	ret=factdiff(value);
	printf("summetion difference is:%d",ret);

    return 0;
}
	
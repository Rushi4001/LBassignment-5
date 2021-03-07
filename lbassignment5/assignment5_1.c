#include<stdio.h>

int multfact(int ino)
{
	int icnt=0;
	int mult=1;
	
	for(icnt=1;icnt<=ino/2;icnt++)
	{
		
			if(ino%icnt==0)
			{
				mult=mult*icnt;
		
			}
			
	}
	
return mult;

}
int main()
{
	int value=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	
	ret=multfact(value);
	printf(" multiplication is %d",ret);

    return 0;
}
	
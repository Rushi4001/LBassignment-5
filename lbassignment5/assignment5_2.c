#include<stdio.h>

void factrev(int ino)
{
	int icnt=0;
	
	for(icnt=ino/2;icnt<=ino;icnt--)
	{
		
			if(ino%icnt==0)
			{
				printf("%d\n",icnt);
		
			}
			
	}
	


}
int main()
{
	int value=0;
	
	printf("enter the number\n");
	scanf("%d",&value);
	
	factrev(value);
	

    return 0;
}
	
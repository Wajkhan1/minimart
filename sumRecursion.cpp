#include<stdio.h>
int sum(int x,int y)
{
	static int res=0;
	if(x>=y){
	
	    res=res+x;
	    sum(x-1,y);
		return res;
		
	}
}
main()
{
	int x,y,res;
	printf("enter any number\t");
	scanf("%d",&x);
	printf("\nenter any number\t");
	scanf("%d",&y);
	res=sum(x,y);
	printf("%d",res);
}
	
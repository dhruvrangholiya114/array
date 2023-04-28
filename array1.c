#include<stdio.h>

main()
{
	int a[100],n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	
	
	printf("enter array value:\n");
	
	for (i=0;i<n;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
    }
    
    printf("-------------------------------------------------------------\n");
    
    
	for(i=0;i<n;i++)
    {

	printf("%d ",a[i]);
    }
}

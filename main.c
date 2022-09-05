#include <stdio.h>

#include "array.h"

int main(void)
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	
	
	int x;
	x=array_Bfind(arr,10,12);
	printf("%d",x);
 	
	array_insert(arr,6,3,0);
	for(int i=0;i<=5;i++)
	{
		printf("%d\n",arr[i]);
		
	}	
	array_delete(arr,6,0);
		for(int i=0;i<=5;i++)
	{
		printf("%d\n",arr[i]);
		
	}	 
	
}

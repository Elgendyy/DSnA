//array.c
#include <stdio.h>


int array_Bfind(int array[],int size , int key)
{
	//binary search algorithm
	int start=0; 
	int end=size-1 ;
	int mid ; 
	int found_index = -1;
	while(start<=end) 
	{
		mid=(start+end)/2;
		
	   if (array[mid]==key)
	   {
		    
		  // printf("number is exist %d",key);
		   found_index = mid;
		   break;
	   }
		   else if (array[mid]<key)
		   {
			   start=mid+1;
		   }
		   else if (array[mid]>key)
		   {
			   end =mid-1;
			   
		   }
		   else if (key > array[size]) 
		   {
			   return -1;
		   }
	}
	
}

	void array_bubble(arr[],int size)
	{
		for (int i=0 ; i <size-1 ; i++ )
	{
		for (int j=0 ; j<size-i-1 ; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]= temp;
				
			}
			
		}
	}
	
		
		
	}
	
	


void array_insert(int array[],int size,int value , int index)
{
	if (index<size)
	{
	for(int i=size-2 ; i>=index ;i--)
	{
	array[i+1]=array[i];
		
	}
	array[index]=value;
	
	}
}
void array_delete(int array[],int size, int index)
{
		if (index<size)
	{
	for(int i=index ; i<size-1 ;i++)
	{
	array[i]=array[i+1];
		
	}

	
	}
	
	
	
}
void array_print(int array[],int size)
{
	
			for(int i=0;i<size;i++)
	{
		printf("%d\n",array[i]);
		
	}	
	
}

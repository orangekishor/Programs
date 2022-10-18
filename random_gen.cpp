#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <time.h>

using namespace std;

void random_gen(int arr[],int n, int nl,int max) 
{
	srand(time(0));	
	long val=0;
	
	for(int i=1;i<=n; i++)
	{
		val=rand()%max+1;
		
		int j=0;
		for(;j<n; j++)
		{
			if(arr[j] == val)
			{
				break;
			}
		}
		
		if(j<n)
		{
			i--;
			continue;
		}
		
		printf("%d\t",val);
		arr[i]=val;
				
		if(i%nl == 0)
		{
			printf("\n");
		}
	}
}

int main()
{
	int n=9; //size of array
	int arr[n+1] = {};
	int nl = 3; //newline required at which array index;
	int max = 9; // maximum value to be filled in the array
	s
	random_gen(arr,n,nl,max);
	return 0;
}

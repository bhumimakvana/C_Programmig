#include<stdio.h>
/*
Q-1: Write a Program to find the length of a 1D array.
     For example,
  
    Input:
    Enter array size: 5
    Enter array elements:
    a[0] = 3
    a[1] = 7
    a[2] = 1
    a[3] = 8
    a[4] = 6

   Output:
   Length of an Array: 5
*/

main (){
	
	int m, n;
	
	printf("Enter array size: ");
	scanf("%d", &n);
	
	printf("Enter array elements: \n");
	
	int arr[n];
	for (m=0; m<n; m++){
	  printf("arr[%d] ",m);
	  scanf("%d", &arr[m]);
    }
		printf("Length of an Array %d", m);
	
}

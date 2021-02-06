#include <stdio.h>


int main() 
{ 
	int n = 5, i, j, min; 

	for (i = 1; i <= n; i++) { 
		for (j = 1; j <= n; j++) { 
			if(i < j){
			    min = i;
			    }else{
			        min=j;
			        }
			printf("%d",N-min+1);
		} 
		printf("\n");
	} 
	return 0; 
} 

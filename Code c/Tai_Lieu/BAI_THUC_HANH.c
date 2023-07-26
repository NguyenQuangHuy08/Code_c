

//


#include <stdio.h>



int main(){
	
	int i,n;
	
	printf("Moi ban nhap n : ");
	scanf("%d",&n);
	
	int arr[n];
	
	
	for(i=0;i<n;i++){
		
		printf("arr[%d]=",i);
		scanf("%d",arr[i]);
		
	}
	
	int min= arr[0];
	
	for(i=0;i<n;i++){
		
		if(arr[i] < min ){
			
			min = arr[i];
			
		}
		
	}
	
	
}

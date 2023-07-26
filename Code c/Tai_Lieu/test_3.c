



#include <stdio.h>



int main(){
	
	int n;
	int i;
	
	printf("Moi ban nhap n : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		
		printf("Moi ban nhap kich co ti vi arr[%d] = ",i);
		scanf("%d",&arr[i]);
		
	}
	
	
	for(i=0;i<n;i++){
		
		printf("Kich co ti vi arr[%d] = %d\n",i, arr[i]);
		
	}
	
	
	//vi tri nho nhat trong co vi tri 
	int min=arr[0];
	for(i=0;i<n;i++){
		if(min > arr[i]){
			min=arr[i];
		}
	}

    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    for (i = 0; i < n; i++)
    {
        if(arr[i] == min){
            printf("Min o vi tri %d:%d\n",i,min);
	     
        }
        if(arr[i] == max){
             printf("Max o vi tri %d:%d\n",i,max);
        }
    }
	
	return 0;
	
	
}

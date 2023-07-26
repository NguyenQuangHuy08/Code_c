



//nhap vao mang voi n phan tu xuat ra ngoai vi tri cua so be nhat trong mang 



#include <stdio.h>


int main(){
	
	int i,n ;
	printf("Moi ban nhap n: ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		
		printf("Moi ban nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<n;i++){
		
		printf("Gia tri arr[%d] = %d \n",i,arr[i]);
		
	}
	
	int min = arr[0];
	int max = arr[0];
	
	for(i=0;i<n;i++){
		
		if(arr[i] > max){
			
			max = arr[i];
			
		}
		
		if(arr[i] < min ){
			
			min = arr[i];
			
		}
		
	}
	
	for(i=0;i<n;i++){
		
		if(arr[i] == min){
			
			printf("Min nam o vi tri %d : %d\n",i, min );
			
		}
		
		if(arr[i] == max){
			
			printf("Max nam o vi tri %d : %d\n",i,max);
			
		}
		
		
	}
	
	
	
	return 0;
	
}

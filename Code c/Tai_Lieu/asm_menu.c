
//xay dung so nguyen to trong mang va xuat ra ngoai 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//ham nhap cac gia tri phan tu mang 
//xay dung ham nhap va ham xuat cua mang 


void nhap(int arr[] , int n){
	
	int i;
	
	//nhap mang 
	
	for(i=0;i<n;i++){
		
		printf("Moi ban nhap gia tri arr[%d] = ",i);
		scanf("%d",&arr[i]);
		
	}
	
		
} 


void xuat(int arr[] , int n){
	
	int i;
	
	//xuat mang 
	printf("\n");
	
	for(i=0;i<n;i++){
		
		printf("Mang ban vua nhap la arr[%d] = %d \n",i,arr[i]);
		
	}
	
}

void KT(int arr[] , int n){
	
	int i,bienDem=0;
	int sum=0;
	printf("\n");
	printf("Mang co cac so nguyen to !\n");
	
	for(i=0;i<n;i++){
		
	 if(check(arr[i]) == 0){
	 		
	 	printf("%d\t",arr[i]);
        bienDem++;
		sum+=arr[i];
			 	
	 }
			
  }
	
	printf("\n");
	printf("\n");
	printf("Co %d so nguyen to trong mang ! \n",bienDem);
	printf("Tong cua cac so nguyen to trong mang la : %d",sum);
		
}

int check(unsigned int x){
	
	int i;
	int cout = 0;	
		
	for(i=1 ; i<=x; i++){
		
		if(x % i == 0){
			
			cout++;
			
		}		
	}
	
	if(cout == 2){
		
	   return 0;//la so nguyen to 
				
	}else {
		
	   return 1;//khong la so nguyen to 
		
	}
	
}


int main(){
	
	int n,i;
	
	do{
	
	printf("Moi ban nhap n : ");
	scanf("%d",&n);

   }while(n <=0 || n>20);
   
	int arr[n];
    
    nhap(arr,n);
    xuat(arr,n);
    KT(arr,n);
    
	return ;
	
}

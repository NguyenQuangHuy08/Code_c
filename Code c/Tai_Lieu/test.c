


//tim uoc chung lon nhat va boi chung nho nhat cua hai so 


#include <stdio.h>

int main(){

    int a;
    int i;
  
    printf("Moi ban nhap so : ");
    scanf("%d",&a);
    
	for(i=1;i<=a;i++){
		 
		 if(a%i==0){
		 	
		 	printf("%d\t",i);
		 	
		 }	
	}
	
	
	return 0;
	
}

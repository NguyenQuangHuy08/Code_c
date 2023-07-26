


#include <stdio.h>
#include <string.h>
#include <conio.h>


int main(){
	
	int i=0;
	
	char nhap[50];
	char tim[50];
	
	
	printf("Moi ban nhap chuoi : ");
	gets(nhap);
	
	printf("Moi ban nhap tim : ");
	gets(tim);
	
	//dieu kien 
	for(i=0; i <= strchr(nhap,tim) ; i++){
	
	//neu ma 
		if(nhap[i++] !='\0'){
			
		  printf("Ki tu do co trong chuoi !\n");
		  printf("Vi tri cua thu tu do co trong chuoi la: %d\n",i+1);
		  
		  	
		}else{
			
		  printf("Ki tu do khong co trong chuoi !");	
			
		 }
		
	   }
	   
   
   return 0;
   
   
}



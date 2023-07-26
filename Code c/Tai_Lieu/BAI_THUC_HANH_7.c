



#include <stdio.h>
#include <string.h>


int main(){
	
	char str[5][20];
	char ss[50];
	int i=0;
    int j;
	int temp;
	
	printf("Moi ban nhap chuoi !\n");
	//nhap chuoi 
	for(i=0;i<5;i++){
		
		printf("Chuoi [%d] =",i);
		scanf("%s",&str[i]);
		
	}
	
	
	// thuat toan 
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			
			if(strcmp(str[j-1],str[j]) > 0){
				
		   	    strcpy(ss,str[j-1]);
				strcpy(str[j-1],str[j]);
				strcpy(str[j],ss);
		   
			}				
		}	
	}
	
	
	//xuat 
	printf("\n");
		
		
	for(i=0;i<5;i++){
		
		printf(" sap xep : %s\n",str[i]);
		
	}
	
	
	return 0;
	
	
}

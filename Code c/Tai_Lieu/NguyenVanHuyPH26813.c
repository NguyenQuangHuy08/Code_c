
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


char str[20] = "no";
char ss[20];

























































void bai1(){
	
	
	do{
		
		
		
		
		
		printf("\n");
		printf("Ban co muon thoat khoi chuc nang tren hay khong !\n");
		printf("yes\n");
		printf("no\n");
		printf("\n");
		scanf("%s",&ss);
		printf("\n");
		
	}while(strcmp(str,ss)==0);
	
}




















void menu(){
	
	system ("color 3");
	printf("+-----------------------Menu--------------------+\n");
	printf("1.  \n");
	printf("2.   \n");
	printf("3.    \n");
	printf("0.Thoat  \n");
	printf("+-----------------------------------------------+\n");
	printf("\n");
	
	int so;
	
	printf("Moi ban nhap so de thuc hien chuong trinh : ");
	scanf("%d",&so);
	
	switch(so){
		
		case 1:
			
			bai1();
			break;
			
		case 2:
		
		    break;
			
		case 3:
		   
		   break;
		   
		case 0:
		   
		   exit(0);
		   break;   		
		
		default :
			
			
			printf("Muc ban chon khong co  !\n");
			printf("Vui long chon lai ! \n");
			printf("\n");
			
	}
		
}


int main(){
	
	while(1){
		
		menu();
		
	}
	
	
	return 0;
	
}







//DE BAI : nhap va xem co bao nhieu chu cai thuong va bao nhieu chu so




#include <stdio.h>
#include <string.h>


int main(){
	
	//khai bao 
	
	char str[50];
	int i=0;
	int a=0;//la dem so
	int b=0;//la dem ki tu hoa
	int c=0;//la den ki tu thuong 
	
	printf("Moi ban nhap chuoi :");
	gets(str);
	
	//duyet mang 
     for(i=0 ;i < strlen(str) ;i++ ){
	 
		
		if('a' <= str[i] && str[i] <= 'z' ){
			
			c++;
		
		}if( 'A' <= str[i] && str[i] <= 'Z'){
			
			b++;
			
		}if('0' <= str[i] && str[i] <= '9'){
			
		   a++;
			
		}
		
	
	}
	

	
	printf("%s co chuoi ki tu thuong la: %d\n",str,c);
	printf("%s co chuoi ki tu hoa la: %d\n",str,b);
	printf("%s co chuoi ki tu dem so la: %d\n",str,a);
	
	
	return 0;
	
}

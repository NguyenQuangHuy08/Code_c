


//BAI 1 : DEM SO NGUYEN AM VA PHU AM CUA CHUOI 




#include <stdio.h>
#include <string.h>



int main(){
	
	char str[50];
	
	int i=0;
	int n=0;//dem so nguyen am 
	int p=0;//dem so phu am 
	
	
	printf("Moi ban nhap chuoi : ");
	gets(str);
	
	while(str[i++] !='\0'){
		
		if(str[i] == 'a' || str[i] == 'o' || str[i] == 'e' || str[i] == 'u' || str[i] =='i'){
			
			n++;
			
		}else{
			
			p++;
			
		}
			
	}
	
    printf("\n");
	printf("Chuoi ban vua nhap la: %s\n",str);
	printf("\n");
	printf("%s co so nguyen am la: %d\n",str,n);
	printf("%s co so phu am la: %d\n",str,p);
	

	return 0;
	
	
}

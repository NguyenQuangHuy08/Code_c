

                                                   LAP : 7 : CHUOI 
                                                
                                                
                                                
                                                
BAI 1: XAY DUNG CHUONG TRINH NGUYEN AM 1 VA PHU AM CUA MOT CHUOI 
khong dung duoc ham strlen vì nó chi la ham dem so ki tu


CACH 1: LAM NHU BINH THUONG TUAN TU 


#include <stdio.h>

char str[50]; 
//khai bao toan cuc
//chuoi co 50 ki tu

int main(){
		
	int i=0;//con 
	int n=0;//dem so nguyen am 
	int p=0;//dem so phu am 
	
	printf("Xin moi ban nhap chuoi : ");
	gets(str);//la ham nhap 
	
	
	while(str[i++] !='\0'){
	//duoc goi la null duoc dung cuoi cung va se khong duoc dem 
	   if(str[i] =='a' || str[i] =='e' || str[i] == 'u' || str[i] == 'i' || str[i] == 'o'){
	   	
	   	n++;//cua nguyen am 
	   	
	   }else{
	   	
	   	p++;//cua phu am 
	   	
	   }
	   
   	   
   }
   
   printf("\n");
   
   printf("Chuoi ban vua nhap la: %s\n",str);
   printf("\n");
   
   printf("So nguyen am trong chuoi la: %d\n",n);
   printf("So phu am trong chuoi la : %d",p);
   

	return 0;
	
} 


CACH 2: XAY DUNG THEO HAM 


#include <stdio.h>
#include <string.h>

    char s[100];//nhap mang
	int i=0;//con
	int n=0;//bien dem so nguyen am 
	int p=0;//bien dem so phu am 

void check(){
	
	//day duoc doi la null
	while(s[i++] !='\0'){
		
		if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o'){
			
			n++;//day la dem 
			
		}else{
			
			p++;
			
		}	
	}
		
}


int main(){
	
	printf("Output ==> Go to import : ");
	gets(s);
	
	check();
	
	printf("Vowel : %d\n",n);
	printf("Consonant : %d",p);
		
	
	return 0;
	
}





BAI 2 : XAY DUNG CHUONG TRINH DANG NHAP BANG USER NAME VA PASSWORD 


CACH 1: XAY DUNG BAI TOAN THEO DANG BINH THUONG 


#include <stdio.h>

int main(){
	//khai bao 
	char user1[] = "admin";
	char pass1[20] = "12345";
	char user[20];
	char pass[20];
	
	
	printf("Moi ban nhap userneme : ");
	gets(user);
	printf("Moi ban nhap password : ");
	gets(pass);
	printf("\n");
	
	
	if(strcmp(user,user1)==0 && strcmp(pass,pass1)==0){
		
		printf("Dang nhap thanh cong ! ");
		
	}else{
		
		printf("Dang nhap that bai !");
		
	}
	
	
	return 0;
	
	
}



CACH 2: XAY DUNG BAI TOAN THEO DANG HAM 


//xay dung bai nay ham 



#include <stdio.h>
#include <string.h>

char user[100];
char pass[100];

void check(){
	
	char user1[] ="huyyeuloan";
	char pass1[] ="110804";
	
	if(strcmp(user,user1)==0 && strcmp(pass,pass1)==0){
		
	    printf("Output : You are welcome !");
		
	}else{
		
		printf("Output : Please, You login again !");
		
	}
	
		
}

int main(){

	printf("Input ==> username : ");
	gets(user);
	printf("Input ==> password : ");
    gets(pass);
    
	check();
	
	return 0;
	
}



BAI 3: XAY DUNG CHUONG TRINH SAP XEP CHUOI THEO CHU CAI 


//su dung mang hai chieu 
///su dung hai vong lap for

#include <stdio.h>
#include <string.h>

 char str[5][20];
	//hang va cot 
 
int main(){
	
	//khi bao 
	int a,b//la cai bien dem 
	
	
	
	
	
	
	
	
}





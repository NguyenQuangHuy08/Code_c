
  												LAP 5:
	

	
BAI 1:SAY DUNG CHUONH TRINH TIM 3 SO LON NHAT 

CACH 1 : NHAP XUAT DU LIEU 


#include <stdio.h>

//xay dung ham
int max(int a, int b,int c){
     //khai bao du lieu 
     int max;
     
     if(a>b && a>c){
	  
	    max=a;
	    
	 }if(b>c && b>a){
	 
	 
	    max=b;
	 
	 }if(c>a && c>b){
	 
	    max=c;
	 
	 }
	 	 
	 return max;
     
}


//xuat ham
int main(){
     //khai bao du lieu cua chuong trinh 
     
     int a,b,c;
     int d;
     
     printf("Tim so lon nhat trong cac so tren !\n");
     printf("\n");
     
     printf("Moi ban nhap du lieu vao a : ");
     scanf("%d",&a);
     
     printf("Moi ban nhap du lieu vao b : ");
     scanf("%d",&b);
     
     printf("Moi ban nhap du lieu vao c : ");
     scanf("%d",&c);
     
     //goi ham ve
     
     d=max(a,b,c);
     
     printf("\n");
     printf("So lon nhat la: %d",d);
     
     
}


CACH 2 :GAN GIA TRI VAO

//khai bao mang 
#include <stdio.h>

int min(int a,int b,int c){
    
    int min;
    
    if(a<b && a<c){
	  
	   min = a;
	
	}if(b<a && b<<c){
	
	   min=b;
	 
	}if(c<a && c<b){
	
	   min=c;
	
	}

    
    return min;
}


//xuat mang 

int main(){
    
     //khai bao du lieu 
     int a,b,c,d;
     
     printf("Tim so nho nhat trong cac so tren !\n");
     
     a=7;
     b=9;
     c=4;
     
     d=min(7,9,4);
     
     printf("Gia tri nho nhat cua cac so tren la: %d",d);
     
    
}




BAI 2: TIM SO NHO NHAT TRONG BA SO 


#include <stdio.h>


//khai bao mang 
int min(int a,int b,int c){
	 //co du lieu dau vao va co du lieu dau ra len ta su dung ham int 
	 
	 //khai bao du lieu 
	 int min;
	 
	 if(a<b && a<c){
	 
	   min=a;
	   
	 }if(b<a && b<c){
	 
	   min=b;
	 	 
	 }if(c<a && c<b){
	 
	   min=c;
	   
	 }
	 
	//xuay du lieu 
	return min;
}

//xuat mang 

int main(){
   //khai bao du lieu 
   int a,b,c;
   int d;
   
   printf("Tim gia tri nho nhat trong cac so con lai !\n");
   printf("\n");
   
   printf("Moi ban nhap du lieu vao a : ");
   scanf("%d",&a);
   
   printf("Moi ban nhap du lieu vao b : ");
   scanf("%d",&b);
   
   printf("Moi ban nhap du lieu vao c : ");
   scanf("%d",&c);
   
   d=min(a,b,c);
   
   printf("\n");
   printf("So be nhat trong cac so la : %d",d);
   

}




BAI 3:XAY DUNG HAM TINH NAM NHUAN

#include <stdio.h>


//xay dung ham 
//co doi so truyen ra len khong dung duoc ham void 

int checkYear(int a){
   
     //khai bao du lieu 
     int flag=0;
     
     
     if(a % 4==0 && a % 100!=0){
	 
	   flag = 1;
    }
    
   return flag;//co so ket thuc len su dung ham main 

}

//xuat ham
int main(){
	
    //khai bao du lieu 
    int a;
    int d;
    
    printf("Xac dinh nam nhuan !\n");
    printf("\n");
    
    printf("Moi ban nhap du lieu vao nam :");
    scanf("%d",&a);
    
    d=checkYear(a);
    
   if(d==1){
   	
   	printf("Nam do la nam nhuan !");
   	
   }else{
   	
   	printf("Nam do la nam khong nhuan !");
   	
   }
    
}




BAI 4:XAY DUNG CHUONG TRINH HOAN VI CUA HAM SO THEO DIA CHI THAM SO 


#include <stdio.h>


//xay dung ham 
void bien(int *a,int *b){

    int temp;
    
    temp=*a;
    *a=*b;
    *b=temp;
    
    
}

//goi ham 

int main(){
   
     int so1,so2;
     
     printf("Moi ban nhap du lieu vao so1 :");
     scanf("%d",&so1);
     printf("\n");
     printf("Moi ban nhap du lieu vao so2 : ");
     scanf("%d",&so2);
     
     bien(&so1,&so2);
     
     printf("Gia tri cua so 1 la: %d\n",so1);
     printf("Gia tri cua so 2 la: %d\n",so2);
     
     
    return 0;
}




xay dung bai bien dem 
dem xem co bao nheu so trong mot bai toan 




BAI 5: XAY DUNG HAM KIEM TRA XEM 1 SO CO LA SO CHAN HAY KHONG 



#include <stdio.h>


int check(int so){
	

	if(so%2==0){
		
	    return 1;
		
	}else{
		
	    return 0;
		
		
	}
	
}


int main(){
	
	int dem,i;
	
	for(i=1;i<=100;i++){
		
		if(check(i)==1) dem++;
		
		
	}
	
	 printf("%Dem : %d",dem);
   return 0;	
	
}



BAI 6 :TIM UOC CHUNG LON NHAT VA BOI CHUNG NHO NHAT CUA HAI SO



#include <stdio.h>


int main(){
	
	//khai bao 
	int a,b;
    do{
		
	printf("Moi ban nhap a : ");
	scanf("%d",&a);
	printf("Moi ban nhap b : ");
	scanf("%d",&b);
    }while(a<=0 || b<=0);
    
		int bc=a*b;
		
		while(a!=b){
			
			if(a>b){
				
				a=a-b;
				
			}else{
				
				b=b-a;
			
			}
				
		}	
			printf("UCLN : %d\n",a);
			printf("BCNN : %d",bc/a);
		
	
	
	return 0;
}


CACH 2: 



#include <stdio.h>


void timUoc(int a, int b){
	
  // vi du 
  
  
  
	int bc=a*b;
		
		while(a!=b){
			
			if(a>b){
				
				a=a-b;
				
			}else{
				
				b=b-a;
			
			}
				
		}
		
			printf("UCLN : %d\n",a);
			printf("BCNN : %d",bc/a);
			
	
}



int main(){
	
	int a,b;
	
	do{
	
	
	printf("Moi ban nhap a :");
	scanf("%d",&a);
	printf("Moi ban nhap b :");
	scanf("%d",&b);
	
   }while(a<=0 || b<=0);
	
	timUoc(a,b);
	
	return 0;
}



BAI 6: XAY DUNG BAI TOAN BIEN UOC 


#include <stdio.h>


void uoc(int a){
	
	int i;
	int bienDem=0;
	
	for(i=1;i<=a;i++){              
		
		if(a%i==0){
		  
		  printf("\n");
		  printf("Cac uoc cua %d la : %d\n",a,i);
		  bienDem++;
		  
		}
	   
	}
	   
	  printf("\n"); 
	  printf("%d co tong so uoc la : %d",a,bienDem);
	
}

int main(){
	
	int a;
	
	do{
	
	printf("Moi ban nhap so :");
	scanf("%d",&a);
	
  }while(a<0);
	uoc(a);
	
	return 0;
	
}





//LAP 2: POLY


	
	
	
	
//BAI 1: XAY DUNG CHUONG TRINH NHAP XUAT DU LIEU 
     : CONG TRU NHAN CHIA CAC SO SU DUNG PHEP GAN
	 
	 
#include <stdio.h>
int main(){
    int a,b;
    printf("Moi ban nhap du lieu vao a :");
    scanf("%d",&a);
    printf("Moi ban nhap du lieu vao b :");
    scanf("%d",&b);   
    
    int tong= a + b;
    int hieu= a - b;    
	 
    printf("Tong co gia tri la: %d",tong);
    printf("\nHieu cua gia tri la: %d",hieu);
    
    return 0;

}	 	


//BAI 2: MOI BAN XAY DUNG CHUONG RINH TINH TICH VA THUONG 


#include <stdio.h>
int main(){
     double a,b;
     
     printf("Moi ban nhap du lieu vao a: ");
     scanf("%lf",&a);
     printf("Moi ban nhap du lieu vao b: ");
     scanf("%lf",&b);
     
     double tich=a*b;
     double thuong=a/b;
     
     printf("Gia tri cua thuong la: %lf",thuong);
     printf("Gia tri cua tich la: %lf",tich);
     
     return 0;

}

//BAI 3: XAY DUNG CHUONG TRINH TINH CHU VI VA DIEN TICH CUA HINH CHU NHAT


#include <stdio.h>

int main(){
    double chieuDai,chieuRong;
    
    printf("Moi ban nhap du lieu vao chieu dai: ");
    scanf("%lf",&chieuDai);
    printf("Moi ban nhap du lieu vao chieu rong: ");
    scanf("%lf",&chieuRong);
    
    double chuVi=(chieuDai + chieuRong)*2;
    double dienTich=chieuDai * chieuRong;
    
    printf("Chu vi co gia tri la : %lf",chuVi);
    printf("\nDien tich co gia tri la : %lf",dienTich);
 
 return 0;

}
	

//BAI 4:XAY DUNG CHUONG TRINH TINH CHU VI VA DIEN TICH CUA HINH TRON 


#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
      float banKinh;
      printf("Moi ban nhap du lieu vao ban kinh :");
      scanf("%f",&banKinh);
      
      float chuVi=2*PI*banKinh;
      float dienTich=PI*pow(banKinh,2);
      
      printf("Chu vi co gia tri la : %f",chuVi);
      printf("\nDien tich co gia tri la : %f",dienTich);
      
      return 0;

}



//BAI 5:XAY DUNG CHUONG TRINH TINH DIEM TRUNG BINH 



#include <stdio.h>


int main(){
    float toan,ly,hoa ;
	printf("MOi ban nhap du lieu vao diem toan : ");
	scanf("%f",&toan);
	printf("Moi ban nhap du lieu vao diem ly :");
	scanf("%f",&ly);
	printf("MOi ban nhap du lieu vao diem hoa :");
	scanf("%f",&hoa);
	
	float diemTrungBinh=(toan*3 + ly*2 + hoa )/6;
	
	printf("Diem trung binh la: %d",diemTrungBinh);
	
	return 0;    

}



BAI 6: XAY DUNG BAI TOAN MENU CHUA CAC BAI TOAN TREN 



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14


void tongHieu(){
      int a,b;
    printf("Moi ban nhap du lieu vao a :");
    scanf("%d",&a);
    printf("Moi ban nhap du lieu vao b :");
    scanf("%d",&b);   
    
    int tong= a + b;
    int hieu= a - b;    
	 
    printf("Tong co gia tri la: %d",tong);
    printf("\nHieu cua gia tri la: %d",hieu);

}

void tichThuong(){
    double a,b;
     
     printf("Moi ban nhap du lieu vao a: ");
     scanf("%lf",&a);
     printf("Moi ban nhap du lieu vao b: ");
     scanf("%lf",&b);
     
     double tich=a*b;
     double thuong=a/b;
     
     printf("Gia tri cua thuong la: %lf",thuong);
     printf("Gia tri cua tich la: %lf",tich);

}


void hCN(){
     double chieuDai,chieuRong;
    
    printf("Moi ban nhap du lieu vao chieu dai: ");
    scanf("%lf",&chieuDai);
    printf("Moi ban nhap du lieu vao chieu rong: ");
    scanf("%lf",&chieuRong);
    
    double chuVi=(chieuDai + chieuRong)*2;
    double dienTich=chieuDai * chieuRong;
    
    printf("Chu vi co gia tri la : %lf",chuVi);
    printf("\nDien tich co gia tri la : %lf",dienTich);
 
}


void hT(){
    float banKinh;
      printf("Moi ban nhap du lieu vao ban kinh :");
      scanf("%f",&banKinh);
      
      float chuVi=2*PI*banKinh;
      float dienTich=PI*pow(banKinh,2);
      
      printf("Chu vi co gia tri la : %f",chuVi);
      printf("\nDien tich co gia tri la : %f",dienTich);

}


void menu(){
      printf("|==================NGUYEN QUANG HUY=====================|\n");
      printf("|________________________IT17329________________________|\n");
      printf("|........................PH26813........................|\n");
      printf("|                         Menu                          |\n");
      printf("|           1.Chuc nang tinh tong va hieu               |\n");
      printf("|          2.Chuc nang tinh tich va thuong              |\n");
      printf("|      3.Chuc nang chu vi va dien tich cua hinh chu nhat|\n");
      printf("|     4.Chuc nang tinh chu vi va dien tich cua hinh tron|\n");
      printf("|     0.Ban chon thoat khoi chuong trinh                |\n");
      printf("|.......................................................|\n");
      
      int so;
      printf("Moi ban chon so de thuc hien chuong trinh chay :\n");
      scanf("%d",&so);
      
      switch(so){
      	 case 1: tongHieu();
      	 break;
      	 
      	 case 2: tichThuong();
      	 break;
      	 
      	 case 3:hCN();
      	 break;
      	 
      	 case 4:hT();
      	 break;
      	 
      	 case 0:
      	 	exit(0);
      	 	break;
      	
      	default:
      		
      		printf("Moi ban nhap so de chay chuong trinh :\n");
      		break ;
      	
      	}
      
      
}


int main(){
   while(1){
   menu(); 
   
   }

  return 0;

}

                                              CHAO MUNG BAN DEN VOI NGON NGU LAP TRINH C CAN BAN :

	 


                                                    TONG HOP KIEN THUC QUAN TRONG CAC HAM !
									  
									    
                                     
                                                         
&& #chú thích^                                 
    //chuoi dinh dang ki tu            
                                     
     %c kieu char < mot kí tu >
     %d kieu int     //gom so nguyen trong do co nguyen duong va nguyen am dung dc hau het cho moi bai va la so khong co thap phan
     %u kieu unsigned int
     %f kieu float //so thuc //diem trung binh khong co am ,phan so//la so thuc
     %lf kieu double ////la so thuc //nhung khai bao rong hon//co thap phan 
     %s chuoi ki tu
     
     sqrt : la can 
     pow : la mu 
     sum : tinh tong
     avg : la tinh trung binh cong 
     cout : la bien dem 
     abs : la lay gia tri tuyet doi
     ceil : la lay gia tri so nguyen tren  : vi du la 3.5 ==> 4
     round : la ham lam tron 
	 floor : la lay gia tri so nguyen duoi : vi du la 3.4 ==> 3
	 
	 
	 
//CAC LOAI HAM TRONG LAP TRINH 
    ví du : a =3 ;b =5
    
    cú pháp:
    	
      math.min(a,b) ==> 3 (a)  
      math.max(a,b) ==> 5 (b)
      math.abs(-5)  ==> 5   
      math.floor(3.4) ==> 3
      math.ceil(3.5) ==> 4
      
      
      
//CAC LOAI HAM CHUA DU LIEU 
 
    THU VIEN :graphic.h                                  io.h                                                conio.h 
              
			  initgraph()                                open()                                               clrscrl()
              line()                                     read()                                               getch()
              putpixe()                                  close()                                              cputs()
              getpixe()                                  creat()                                              putch()
              setcolor()                                 filelength()                                         clreol()
        
     liên quan den do hoa                            doc ghi cac file                               thay doi mau sac tet va cac phim
                                     
%      DA GAN ROI THI DUNG KHAI BAO GOP MA HAY KHAI BAO TUNG THANH PHAN                               
       
	   
	   
                                              
	                                              
//CAC THUAT TOAN CO BAN TRONG SAP XEP :	      
                                        
	  
	bubble sort
	quick sort
	simple selection sort 
	heap sort 
	simple insertion sort 
	shell sort 
	merge sort 
	radix sort 
	
	
	
	
		   
	   
	   
	   
	   
_______________________________________________________________________________________________________________________________________	   
	   
	   
	   
	   
	                                                 BAI 1 : GIOI THIEU CO BAN :
	                                                 	
	   
	   	   
	                                                                                                                                                                                                
GIOI THIEU: 
                                    
CAU 1: GIOI THIEU 
 
 
#include <stdio.h>


int main(){
	printf("hello chao moi nguoi");
	/*
	du lieu cua chuong trinh 1
	du lieu cua chuong trinh 2
	*/
	return 0;
}


CAU 2:KIEM TRA DU LIEU CUA CAC O


#include <stdio.h>


int main(){
	//du lieu cua o long la
	//du lieu cua o char la
	//du lieu cua o int la
	//du lieu cua short la
	//du lieu cua o float la
	//du lieu cua o double la
  printf("du lieu cua o long la: %d",sizeof(long));
  printf("du lieu cua o char la: %d",sizeof(char));
  printf("du lieu cua o int la: %d",sizeof(int));
  printf("du lieu cua o float la: %d",sizeof(float));
  printf("du lieu cua o short la: %d",sizeof(short));
  printf("du lieu cua o double la: %d",sizeof(double));
  
  return 0;

}



_________________________________________________________________________________________________________________________________________
                        
                                                       
													   
													   
													   BAI 2: DAI CUONG LAP TRINH BIEN VA HANG SO :
													   	
													   	
                      
======CAC CAU HOI LA

^^PHAN 1: KHAI BAO HAM HANG VA BIEN SO  

CAU 1:SU DUNG PHEP GAN DO LA PHEP GAN BIEN VA CAC KIEU DU LIEU
CAU 2:SU DUNG PHEP GAN KHAI BAO HANG SO KHONG THE THAY DOI 
CAU 3: GIOI THIEU VE NHAP XUAT DU LIEU VE ^= TUOI =^
CAU 4: NHAP XUAT DU LIEU ^= DIEM TRUNG BINH =^
CAU 5: NHAP XUAT DU LIEU VE ^= SO NGUYEN =^ 
CAU 6: NHAP XUAT DU LIEU BAI TOAN VE DIEN TICH CUA ^= HINH CHU NHAT =^
CAU 7: NHAP XUAT DU LIEU BAI TOAN VE DIEN TICH CUA ^= HINH TRON =^
CAU 8: NHAP XUAT DU LIEU TINH DIEM TRUNG BINH ^= TOAN ,LY ,HOA =^

^^PHAN 2: TOAN TU VA BIEU THUC TOAN HOC

CAU 9:
        P1: TOAN TU SO HOC TOAN TU HAI NGOI TINH TOAN VE TONG , TICH , THUONG ,HIEU 
        P2: TOAN TU SO HOC TOAN TU MOT NGOI VE ++A VA A++
        
CAU 10 ; 




                                                    PHAN 1 :KHAI BAO HAM HANG VA BIEN SO




CAU 1: BIEN CO THE THAY DOI TUY TUNG TRUONG HOP CUA BAI TOAN 
	
#include <stdio.h>

double x;//khao bao bien toan cuc 
int main(){
     a = 30;//gan gia tri a 
     b = 40;//#include <stdio.h>
	int a,b;//kieu du lieu tenBien
     //khai bao ham 
     //khaibaobien nhap gia tri cua bien 
     //%d\n la thuoc bien cua int
     int a,b;gan gia tri b 
     //a va b trong ham main la bien cuc bo/////////////////////////////khai bao bien
     x = 44;
     printf("gia tri cua a la: %d\n",a);
     printf("gia tri cua b la: %d\n",b);
     a = 25;
     b = 15;
     printf("gia tri cua a la: %d\n",a);
     printf("gia tri cua b la: %d\n",b);
     
     
     return 0;
}	
	
	
CAU 2:KHAI BAO HANG SO:
      HANG SO KHONG THAY DOI THEO TUNG BAI TOAN LA HAM CO DINH


#include <stdio.h>
#define PI 3.14 //kieu khao bao define khong can dau cham phay va da la hang co dinh khong co dau =
const double kichThuoc = 50;//khai bao vung du lieu ,ham toan bo
int main (){
  
  double x = 30; //gan gia tri
  double y = PI*x; //tinh gia tri 
  printf("gia tri cua y la: %f",y); //khai bao co hang su dung %f 

  return 0;

} 


CAU 3 :NHAP XUAT DU LIEU 


    /*
      chú thích :
      chú thích 1 : hàm printf là hàm xuát du lieu 
      chú thích 2 : hàm scanf là hàm nhap du lieu tu ban phim và luu gia tri vao mot bien thi dung ham 
    scanf
    */
    
#include <stdio.h>

int main(){
	printf("Nhap gia tri tuoi");
	//Khai bao gia tri cua tuoi
	int tuoi = 0;
	scanf("%d",&tuoi);//nhap gia tri tu ngoài ban phim scanf va %d
	printf("Tuoi cua ban la: %d",tuoi);

  return 0;
  
}


CAU 4 :nhap xuat du lieu

MOI BAN NHAP DIEM TRUNG BINH:


#include <stdio.h>

int main(){ 

  printf("nhap diem trung binh");
  float diemTrungBinh;
  scanf("%f",&diemTrungBinh);
  printf("diem trung binh cua ban la: %f",diemTrungBinh);
  return 0;
  
}


CAU 5: NHAP XUAT DU LIEU 

NHAP SO NGUYEN:

#include <stdio.h>
int main(){ 
    int soNguyen;//khai bao du lieu 
    printf("Moi ban nhap gia tri so nguyen vao");
    scanf("%d",&soNguyen);
    printf ("Binh phuong %d la: %d",soNguyen,soNguyen * soNguyen );
    return 0;

}
	

CAU 6 :NHAP XUAT DU LIEU 

TINH DIEN TICH CUA HINH CHU NHAT:


#include <stdio.h>
int main (){
	 double chieuDai,chieuRong;
	 printf("Nhap gia tri vao chieuDai");
	 scanf("%lf",&chieuDai);
     printf("Nhap gia tri vao chieuRong");
	 scanf("%lf",&chieuRong);
     double dienTich = chieuDai*chieuRong;
     double chuVi =(chieuDai + chiêuRong)*2; 
	 printf("HCN co chieuDai la: %lf,chieuRong: %lf,dienTich= %lf",chieuDai,chieuRong,dienTich);
	 printf("HCN co chieuDai la: %lf,chieuRong: %lf,chuVi= %lf",chieuDai,chieuRong,chuVi);

  return 0;
//chú thich kieu double ra nhieu so thap phan thì ta dung cac rut gon nhu sau trc % ta thêm %.2lf la ra
} 


CAU 7: NHAP XUAT DU LIEU 

CHU VI VA DIEN TICH CUA HINH TRON 


#include <stdio.h>
#define PI 3.14
int main (){
        int banKinh;
        printf("Moi ban nhap du lieu vao ban kinh :");
        scanf("%d",&banKinh);
        int chuVi = 2*PI*banKinh;
        int dienTich = PI*banKinh*2;
        printf("Chu vi hinh tron la: %d",chuVi);
        printf("\nDien tich cua hinh tron la : %d",dienTich);
        return 0;
         
}

%%%%%%%%%%%%CAU 8: NHAP XUAT DU LIEU

CHUONG TRINH TINH DIEM TRUNG BINH GOM MON TOAN LY thread_local


#include <stdio.h>
int main (){
        //khai bao kieu du lieu 
        double toan,ly,hoa;
        printf("Hay nhap du lieu tu ban phim vao toan ,ly ,hoa");
        printf("\nMoi ban nhap diem mon toan :");
        scanf("%lf",&toan);
        printf("\nMoi ban nhap diem mon ly :");
        scanf("%lf",&ly);
        printf("\nMoi ban nhap diem mon hoa :");
        scanf("%lf",&hoa);
        double diemTrungBinh = (toan*3+ly*2+hoa)/6;
        printf("diemTrungBinh cua ban la: %lf",diemTrungBinh);
        return 0;
        
}



                                                                 PHAN 2: TOAN TU VA BIEU THUC TOAN HOC 


DANG 1: TOAN TU SO HOC
#CHU Y 
   TOAN TU LA CAC PHEP + - * /
   TOAN HANG LA CAC HANG SO NHU PI ,BIEN DUOC GOI LA HAM 
   TOAN TU DONG DU LA PHAI TRA VE SO NGUYEN 
   
   
   
CAU 9 :TOAN TU 2 NGOI TOAN TU SO HOC

P1 : TOAN TU 2 NGOI


#include <stdio.h>
int main(){
	//TOAN TU SO HOC
	//TOAN TU 2 NGOI , CAN 2 TOAN HANG MOI THUC HIEN DUOC GOM % . * + . - 
	
	int a = 40;
	int b = 30;
	int tong = a+b*2; 
	int hieu = a-b+3;
	int tich = a*b-6;
	float thuong = a/b-2+3;
	int soDu = a%b+4*3;
	printf("Gia tri tong la: %d\n",tong);
	printf("Gia tri hieu la: %d\n",hieu);
	printf("Gia tri thuong la: %f\n",thuong);
	printf("gia tri cua tich la: %d\n",tich);
	printf("Gia tri cua soDu la: %d\n",soDu);
	return 0;	
}


P2 : TOAN TU 1 NGOI:


#include <stdio.h>
int main(){
  //TOAN TU 1 NGOI 
   
  int x = 10;
  int y = 12;
  int z = x++ + ++y;//chu thich uu tien ++ trc nó se cong so do dau tien 
  printf("Gia tri cu x la: %d\n",x);
  printf("Gia tri cua y la: %d\n",y);
  printf("Gia tri cua z la: %d\n",z);
  
//hoac vidu 
/*
 int so1 = 40;
 int so2 =++so1;
 printf ("Gia tri cua so2 la: %d\n",so2);
 return 0;===========> xuy ra gia tri cua so2 se la 41
*/
  return 0;
  
}


DANG 2 :TOAN TU SO SANH



//CHU Y 
//GOM CAC HAM TOAN 
// == la bang bang
// != la so sanh khac
// %= la chia lay du 


CAU 10 : 


VD1

#include <stdio.h>
int main(){
//toan tu so sanh 
// toan tu so sanh ra TRUE : 1
//toan tu so sanh ra FALSE : 0
 int a = 10;
 int b = 12;
 int c = a<b;
 printf("c =  %d",c);
 
 return 0;
 
}

VD2

#include <stdio.h>
int main (){
  //toan tu so sanh gom cac ==, !=, >= ,<=
  
  
  int a =10; 
  int b =5;
  int c =a>b;
  printf("c =%d",c);
       return 0;
}

VD3

#include <stdio.h>
int main (){
  //toan tu so sanh gom cac ==, !=, >= ,<=
  double diem =8;
  if(diem >=8){
          printf("Chúc mung ban da duoc hoc bong");
  }
       return 0;
}



DANG 3: TOAN TU LOGIC


//CHU THICH 
//gom cac thuat toan la != , || , &&


VD1

#include <stdio.h>
int main (){
 int x= 5>4;
 printf("x =%d",x);
       return 0;
}

VD2

#include <stdio.h>
int main (){
 double diemTA =8.3;
 double diemKyNang =9;
 double tinHoc = 9;
 double diemTrungBinh =(diemTA+diemKyNang+tinHoc)/3;
 if(diemTrungBinh >=8 && diemTA>=8){
         printf("Chuc mung ban , ban da duoc hoc bong");
 }
 return 0;
 
}



DANG 4: TOAN TU GAN 



//CHU Y 
//TOAN TU GAN GOM CAC DANG 
// += LA PHEP CONG
// -= LA PHEP TRU
// /= LA PHEP CHIA
// *= LA PHEP NHAN
// %= LA PHEP LAY DU

VD1

#include <stdio.h>
int main (){
 int a = 5;//gan 5 cho a 
 int b = 10;
 a+=b;
 printf("a= %d",a);
 return 0;
 
}

________________________________________________________________________________________________________________________________________

                                              
											  
											  
											                     BAI 3: LENH RE NHANH 
                                                                IF VA LUU DO THUAT TOAN
                                             
                                             
                                       
LUU DO THUAT TOAN


//CHU THICH 
//HINH TRON LA BAT DAU VA KET THUC BAI TOAN
//HINH THOI LA LENH RE NHANH 
//HINH BINH HANH LA NHAP XUAT DU LIEU
//HINH VUONG LA TINH TOAN 
//HINH MUI TEN LA LUONG XU LY DU LIEU 
//co the su dung lenh if nong if
//ket thuc nhieu lenh if thi else phai dung cuoi cung
//IF VA ELSE IF DOI LAP NHAU RIENG BIET NHAU DUNG HAI LENH KHAC NHAU 
//IF CHONG IF NONG TRONG NHAU


VD1: DIEU KIEN NHAP DU LIEU DIEM TRUNG BINH 


#include <stdio.h>

int main(){
        double diemTrungBinh;
        printf("Xin moi ban nhap diem trung binh");
        scanf("%lf",&diemTrungBinh);
        if(diemTrungBinh>=8){
                printf("Gioi");
        }else if(diemTrungBinh>=7){
                printf("Kha");
        }
        
        
        return 0;
}                                       


VD2 :


#include <stdio.h>

int main(){
        double diemTrungBinh;
        printf("Xin moi ban nhap diem trung binh");
        scanf("%lf",&diemTrungBinh);
        if(diemTrungBinh>=8){
                printf("Gioi");
        }else{
                printf("Kha");//da la ham else o cuoi thi khong can dieu kien nua
        }
        
        
        return 0;
        
}


VD3 : TIM SO CHAN HOAC LE



#include <stdio.h>

int main(){
	
        int soTuNhien;
        printf("Moi ban nhap so tu nhien ");
        scanf("%d",&soTuNhien);
        if(soTuNhien%2==0){
        	
                printf("La so chan");///CO THE DUNG HAM LOGIC
                
        }
        if(soTuNhien%3==0){
        	
                printf("\nLa so le");
                
        }
        
        
        return 0;
        
        
}


VD3


#include <stdio.h>


int main(){
      double diemTrungBinh;
      printf("Moi ban nhap diem trung binh");
      scanf("%lf",&diemTrungBinh);
      if(diemTrungBinh>=8){
              printf("Gioi");
      }else if(diemTrungBinh>=7){
              printf("\nKha");
      }else if(diemTrungBinh>=5){
              printf("\nTrung binh");
      }else if(diemTrungBinh>=3){
              printf("\nYeu");
      }else{
              printf("\nKem");
      }
      
      
      
        return 0;
}


VD5 :GIAI PGUONG TRINH BAC NHAT AX + B = 0 



#include <stdio.h>


int main(){
        double a,b,x;
     //BIEN LUAN DE GIAI PHUONG TRINH AX +B =0
     printf("Moi ban nhap du lieu vao a");
     scanf("%lf",&a);
     printf("\nMoi ban nhap du lieu vao b");
     scanf("%lf",&b);
     
     if(a==0){
             //b bang 0
             //b khac o !=0
             if(b==0){
                     printf("Phuong trinh vo so nghiem");
             }else{
                     printf("phuong trinh vo nghiem");
             }
        }else{
                x =-b/a;
                
                printf("\nPhuong trinh co nghiem x=%lf",x);
        }
     return 0;
     }



                                                         PHAN 2 :LENH RE NHANH SWITCH CASE 
                                         
LENH NAY PHO BIEN HON NHUNG CHI DUOC DUNG CHO CAC DANG CHU KHONG DUNG DUOC TRONG CAC DANG SO
CHU YEU SU DUNG TRONG CAC BAI CHUA MENU


CACH 1: 

#include <stdio.h> 


int main (){
	
      //lenh re nhanh switch case
      //xet vidu Vn co bao nhieu dan toc anh em
      //su dung ham switch case 
      //dua ra 4 dap an a , b, c,d
      printf("Huy co may nguoi yeu ");
      printf("\na : 1");
      printf("\nb : 3");
      printf("\nc : 2");
      printf("\nd : 4");
      printf("\nXin moi ban chon dap an :");
      
      char dapAn;
      
      scanf("%s",&dapAn);
      
      if(dapAn== 'a'){
              printf("Ban da chon dap an sai ");
      }else if(dapAn== 'b'){
              printf("Ban da chon dap an sai");
      }else if(dapAn== 'c'){
              printf("Ban da chon dap an sai");
      }else if(dapAn== 'd'){
              printf("Ban da chon dap an sai");
      }else{
              printf("Ban phai nhap cac dap an a , b , c , d tren man hinh hien thi");
      }

       return 0;
}


CACH 2


#include <stdio.h>


int main (){
      //lenh re nhanh switch case
      //xet vidu Vn co bao nhieu dan toc anh em
      //su dung ham switch case 
      //dua ra 4 dap an a , b, c,d
      printf("Huy co may nguoi yeu ");
      printf("\na : 1");
      printf("\nb : 3");
      printf("\nc : 2");
      printf("\nd : 4");
      printf("\nXin moi ban chon dap an :");
      char dapAn;
      scanf("%s",&dapAn);
      if(dapAn== 'a'||dapAn=='b'||dapAn=='c'||dapAn=='d'){
              printf("Ban da chon dap an sai ");
      }else{
              printf("Ban phai nhap cac dap an a , b , c , d tren man hinh hien thi");
      }

       return 0;
}


HAI CACH TREN LA DUNG DUNG IF VA CACH DUOI DUNG HAM SWITCH CASE


#include <stdio.h>

int main (){
	
      //lenh re nhanh switch case
      //su dung ham switch case 
      //dua ra 4 dap an a , b, c,d
      printf("Huy co may nguoi yeu ");
      printf("\na : 1");
      printf("\nb : 3");
      printf("\nc : 2");
      printf("\nd : 4");
      printf("\nXin moi ban chon dap an :");
      char dapAn;
      scanf("%s",&dapAn);
      switch (dapAn){
      	
         case 'a':
         printf ("sai");
         break;
         
         case 'b':
         printf("sai");
         break;
         
         case 'c':
         printf("sai");
         break;
         
         case 'd':
         printf("sai");
         break;
         
         default://ket thuc chuong trinh da cho 
         
         printf("Ban phai nhap dung dap an co tren man hinh");
         
		 }
       return 0;

}


QUAN TRONG


HUONG DAN LA ASSIGNMENT 


GOM BA GIAI DOAN 
 
#giai doan 1 .MENU CUA CHUONG TRINH


#include <stdio.h>

int main (){
    //XAY DUNG MOT CHUONG TRINH MENU
    printf("Chao mung ban den voi ASSIGNMENT mon lap trinh C");
    printf("\n1. Kiem tra so");
    printf("\n2. Tim uoc chung ,boi chung");
    printf("\n3. Chuong trinh tinh tien KARAOKE");
    printf("\n4. Tinh tien dien");
    printf("\n5. Chuc nang doi tien");
    printf("\n6. Vay lai xuat ngan hang");
    printf("\n7. Vay mua xe");
    printf("\n8. Sap xep thong tin sinh vien");
    printf("\n9. Game FPT -lott");
    printf("\n10. Lam viec voi phan so");
    printf("\n11. Thoat khoi chuong trinh");
    printf("Xin moi chon chuc nang");
   int so;
   scanf("%d",&so);
   switch(so){
           case 1:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 1");
           break;
            case 2:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 2");
           break;
            case 3:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 3");
           break;
            case 4:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 4");
           break;
            case 5:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 5");
           break;
            case 6:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 6");
           break;
            case 7:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 7");
           break;
            case 8:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 8");
           break;
            case 9:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 9");
           break;
            case 10:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 10");
           break;
            case 11:
           //di chuyen den cuc nang
           printf("Chao mung ban den voi chuc nang so 11");
           break;
   }
       return 0;

}

   

________________________________________________________________________________________________________________________________________

					
					                                        BAI 4 : VONG LAP CAU TRUC                        
					                                  GOM CAC VONG LAP : WHILE , DO WHILE ,FOR 
					                                  CAC LENH NGAT : BREAK , COUNTINE , GOTO 


                        						  PHAN 1 : CAU TRUC LAP GOM WHILE VA DO ....WHILE 

CAU 1 :GI0I THIEU SU DUNG LENH WHILE NHU NAO 
chu thich voi i nho hon 20 thi nó se in ra man hinh 19 lan 


#include <stdio.h>

int main (){
     int i = 1;//bat dau cho i chay tu 1
     while (i < 20) {
     printf("\nHello world");//se hien thi ra man hinh cau xin chao 19 lan
     i++;
	 }
     
     return 0;
}


CAU 2: TÍNH TONG CAC SO TU 1 DEN 20


#include<stdio.h>

int main (){
        //khai bao du lieu 
        int so = 1;//vi tu 1 den 20 thi chay den 20
        int tong = 0;
        while(so <=20){
        tong+=so;
        so++;
        }
        printf("Gia tri tong tu 1 den 20 la: %d",tong);
        return 0;
          
}


CAU 3: VONG LAP DO và WHILE


//VOI VONG LAP WHILE THI KIEM TRA DIEU KIEN TRC ROI MOI THUC HIEN
//COM DOI VOI VONG LAP DO WHILE CHAY XONG MOI KIEM TRA DIEU KIEN, VAY LEN IT NHAT SE DUOC CHAY MOT LAN 


BAI TOAN HAY NHAP DIEM TU 1 DEN 10 NEU NGOAI KHOANG THI HAY NHAP LAI 


#include <stdio.h>
int main (){
        float diem;
        //khai bao vung du lieu 
        do{
                printf("Moi ban nhap diem tu ban phim :");//neu cong viec
                scanf("%f",&diem);//thuc hien cac chuc nang 
        }while(diem<0 || diem>10);
        //ham while la ham doi lai chuong trinh 
        printf("Chuc mung ban ,ban da nhap dung du lieu!");
        return 0;

        
}


CAU 4: 


//CHÚ Ý HAM TRONG WHILE LA DOI LAP KHI DI VOI DO 

*/
//TINH MA TINH TONG SAO CHO CAC SO DUONG 

#include <stdio.h>
int main (){
        int so = 0;
        int tong = 0;
        do{
                printf("Moi ban nhap du lieu tu ban phim vao so :" );
                scanf("%d",&so);
                tong+=so;
                so++;
        }while(so < 0);
        printf("Ban da hoan thanh chuong trinh !");
        
    return 0;    
        
}


 
                               					  PHAN 2 VONG LAP : FOR , BREAK , CONTINUE , GOTO

=====> LENH LAP FOR

CHU Y: CO THE DUA DU LIEU CUA VONG LAP FOR RA NGOAI CUNG DUOC

//VOI N LA SO NGUYEN NHAP TU BAN PHIM 
//VONG LAP FOR CON GOI DUOC GOI LA BIEN DEM 


CAU 1:TINH TONG S = 1 + 2 + 3 + 4 + .......+ N 


#include <stdio.h>
int main (){
        int i,n;
        int s = 0;
        printf("Moi ban nhap so nguyen n : ");
        scanf("%d",&n);
        for(i=0; i<=n ;i++){
                //THAN VONG LAP 
                s+=i;
                
        }
        
        printf("S = %d",s);
        
}



CAU 2:TINH TONG CAC SO LE TU 1 ÐEN N 


#include <stdio.h>
int main(){
   //khai bao kieu du lieu 
   
   int i,n;
   int s=0;
   printf("Moi ban nhap so nguyen :");
   scanf("%d",&n);
   for(i=1;i<n;i++){
   if(i%2 !=0)
   s+=i;
   
   }	
	printf("S=%d",s);
	
    return 0;
}	



====> LENH LAP BREAK , COUNTINUE VA GOTO 	
	
CHU Y : LENH BREAK DUNG DE NGAT LENH 
      : LENH COUNTINUE DUNG DE THUC HIEN VONG LAP TIEP THEO NGAY LAP TUC 
	  
>>>>>>SO DO HAI LENH LAP BREAK VA COUNTINUE 

  < LENH LAP >                                                   < LENH LAP >
	 {                                                            {
	 	1                                                           1
	 .......                                                     .........
	 BREAK;                                                       COUNTINUE;
	 .......                                                     .........
	    0                                                            0
	 } 	                                                          }
//CHU THICH LENH LAP TU 1 VE O 		                          //CHU THICH TU 0 VE 1
	
	
	SU DUNG LENH LAP FOR VOI BREAK
	
DE BAI : kiem tra n co la so nguyen to hay khong 	
	so nguyen to la so chi chia het cho 1 va chinh no 
	7 va 13 ,.....
    
	
    
====HAY KET HOP LENH LAP FOR VOI LAI BREAK 
 
CACH 1: 

	

#include <stdio.h>
int main(){
   int i=2;int n=3000;//n la minh tu cho them de co the tim xem n co phai la so nguyen to hay khong
                      // co the thay doi n duoc luon trong bai 
   int check=0;
    for(i=2;i<n;i++){
	  if(n%i==0){
	  check =1;
	  break;
       }
     }
	     if(check==0){
		   printf("%d la so nguyen to :",n);
		}else{
		  printf("%d khong la so nguyen to:",n);
		}
	return 0;
	}
   
		
	
CACH 2:


#include <stdio.h>
int main(){
   int i=2;
   int n;
   printf("Moi ban nhap so nguyen n :");
   scanf("%d",&n);
   int check==0;
   for(i=2;i<n;i++){
       if(n%i==0){
	   check=1;
	   break;
	   }
	}
	   if(check==0){
	   printf("%d la so nguyen to:",n);
	   
	   }else{
	   printf("%d khong la so nguyen to",n);
	   }
	   
   return 0;

}	
	
	
	
====HAY KET HOP LENH LAP FOR VOI LAI COUNTINUE

CAU 1: 


#include <stdio.h>
int main(){
   //khai bao du lieu 
   int i,n;
   printf("Moi ban nhap so nguyen :");
   scanf("%d",&n);
   for(i=0;i<=n;i++){
      if(i%2 !=0){
	 continue;
	  }
	  printf("%d\n",i);
   }
   
   return 0;
}
	


_______________________________________________________________________________________________________________________________________

		
		                                                   BAI 5:FUNCTINON VA CAC HAM 
		                                               CUNG VOI DO LA DIA CHI THAM CHIEU 
		                                                
          PHAN 1: 
		  
		  
		                                        
                                                
//SU DUNG THANH  THAO LAI CAC VONG LAP FOR WHILE VA DO WHILE 
//VA CAC LENH NGAT : BREAK , GOTO VA CONTINUE



CAU 1:
	
	
VD1:SU DUNG LENH WHILE
	
#include <stdio.h>
int main(){
    int a=1;
    int b=10;
    
    while (a<b){
	
	   printf("Huy yeu loan :!");
	   a++;
	}
   return 0;
}	
	
//day la vong lap co thoi gian 


#include <stdio.h>
int main(){
    int a=1;
    int b=10;
    
    while(a<b){
	
	   printf("Anh yeu em !");
	}
 return 0;
}

//day la vong lap vinh vien


VD2 : DOI VOI VONG LAP DO WHILE IT NHAT DUOC CHAY MOT LAN ROI MOI XET DIEU KIEN 

//co thoi gian 

#include <stdio.h>
int main(){
	int a=2;
	int b=10;
    do{
    	printf("Anh yeu em !");
    	a++;
	}while(a<b);
     
  return 0;
}


//vong lap vo han 


#include <stdio.h>
int main(){
	int a=2;
	int b=10;
    do{
    	
    	printf("Anh yeu em !");
    
	}while(a<b);
     
  return 0;
}


VD3: SU DUNG VONG LAP FOR


#include <stdio.h>
int main(){
  int a=2;
  int b=10;
  
  for(a=2;a<=b;a++){
  
     printf("Anh yeu em !");
  }

    return 0;

}


CAU 2: IN RA DAY SO FIBONACCI



#include <stdio.h>


int main(){
     int f0=1;
     int f1=1;
     int last;
     int n;
     printf("Xin moi nhap vao n: ");
     scanf("%d",&n);
     printf("%d\n",f0);
     
     
     while (f1<n){
	    printf("%d\n",f1);
	    last =f0+f1;
	    f0=f1;
	    f1=last;
	 }

   return 0;
} 



CAU 3: KIEM TRA TUOI NHAP VAO BAN PHIM 


#include <stdio.h>
int main(){
    int tuoi;
    
    do{
    	
    	printf("Xin moi ban nhap tuoi :");
    	scanf("%d",&tuoi);
	}while(tuoi<1 && tuoi > 300);
		
	return 0;

}



CAU 4: BANG CUA CHUONG CUA 2


#include <stdio.h>
int main(){
    printf("Bang cuu chuong 2 !");
    int i;
    for(i=1;i<=10;i++){
	
	printf("%d * %d =%d ",2,i,2*i);
	}

     return 0;
}



CAU 5:BANG CUU CHUONG TU 1 DEN 10 




#include <stdio.h>
int main(){
    printf("Bang cuu chuong 2!\n");
    int i;
    int b;
    for(i=1;i<=10;i++){
	   for(b=1;b<=10;b++){
	   printf("%d x %d =%d\n ",b,i,b*i);
	   }
	    printf("\n");
	}

     return 0;
}




					                                              PHAN 2: BIET CACH SU DUNG HAM SO 
   
   
CAU 1:



VD 1: KHONG CO DAU VAO VA CUNG KHONG CO DAU RA 

/*

    void main(){
	
	   tinhTong1();
	
	}


*/

void tinhTong1(){
    int a,b,tong;
    
    printf("Moi ban nhap du lieu vao a :");
    scanf("%d",&a);
    printf("Moi ban nhap du lieu vao b :");
    scanf("%d",&b);
    
    tong=a+b;
    
    printf("Tong cua hai so a va b la: %d",tong);


}
   
   
VD 2: CO DAU VAO NHUNG KHONG CO DAU RA 

/*

  void main(){
       
      tinhTong2(10,19);
   
  }

*/

void tinhTong2(int a,int b){

    int tong;
    
    tong=a+b;
    
    printf("Tong cua ban la: %d",tong);

}
   
   
   
VD 3: KHONG CO GIA TRI DAU VAO NHUNG CO DAU RA 

/*
   void main(){
   
       int ketqua;
       ketqua=tinhTong3()
   
   
   }
*/


void tinhTong3(){

      int a,b,tong;
      printf("Moi ban nhap du lieu vao a: ");
      scanf("%d",&a);
      printf("Moi ban nhap du lieu vao b: ");
      scanf("%d",&b)
      
      
      tong=a+b;
      printf("Tong co gia tri la: %d",tong);

      return tong;
}
   
   
   
VD 4: CO CA DAU VAO VA CO CA DAU RA

/*
   void main(){
   
      int ketqua;
      ketqua=tinhTong4(10,4);
   
   
   }

*/

void tinhTong4(int a,int b){
        
        int tong ;
        
        tong= a+b;
        
     return tong;

}
   
   
   
CAU 2:   XAY DUNG HAM DON GIAN 



//khong co gai tri tra ve va doi so truyen vao



#include <stdio.h>
//xay dung ham 
void yeuLoan(){
    printf("Nguyen Thi Loan");
    printf("11/8/2004");
    
}
//goi ham 
int main(){
    
   yeuLoan();
    
   return 0;

} 
   
   
   
  
CAU 3:KIEM TRA MOT SO LA MOT SO NGUYEN TO SU DUNG HAM



#include <stdio.h>  

void soNguyenTo(int a){
     int i;
     int check=0;
     for(i=2;i<a;i++){
	    if(a%i==0){
	    	
	    check=1;
	    break;
			 
	    }
	 }if(check==0){
	 
	    printf("%d la so nguyen to !");
	 }else{
	 	
	 	printf("%d khong la so nguyen to !");
	 }
        
}  
   
   
int main(){

   soNguyenTo(13);
   
   return 0;

}  
   
   
   
                                         
										   									PHAN 3: 
										   
   
//XAY DUNG CAC LOAI HAM CO BAN   
   

CAU 1: SINH SO NGAU NHIEN RANDOM 
 
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


int main(){
    //SINH RA SO NGAU NHIEN TU 1-->15
    //NEU QUAY TRÚNG VOI SO RANDOM THI ÐC GIAI THUONG 
       
       time_t seconds;
	   seconds = time(NULL);
	  
	  srand((unsigned) seconds);
      int so;
      printf("Tro choi trung thuong !");
      printf("\nMoi ban nhap so ngau nhien :");
      scanf("%d",&so);
      printf("\n");
      
      int soNgauNhien;
       
       soNgauNhien = rand()%15 + 1;
       
       printf("So ban chon la : %d",so);
       printf("\nSo ngau nhien la: %d",soNgauNhien);
       if(so==soNgauNhien){
	      printf("\nChuc mung ban da trung thuong ");
	      printf("\nGiai thuong la mot can nha vinhouse !");
	      printf("\n");
	   
	   }else{
	       printf("\n");
	       printf("\nBan con dung cai nit buoc toc !");
	       printf("\nChuc ban may man lan sau !");
	   }



   return 0;
   
}  
   


CAU 2; KHAI BAO BIEN CUC BO VA TOAN CUC TRONG HAM 

VD 1:

#include <stdio.h>
void ham(){
    
   int x=15;
}
//day la bien cuc bo hai ham tach hoan toan nhau
int main(){

    int x = 5;
    printf("%d",x);
     x=10;
     printf("%d",x);
     
     
  return 0;
}

   
VD 2:


#include <stdio.h>
int y=5;
void ham(){
    
   int x=15;
   y=x+30;
}
//day la bien toan cuc
int main(){

    ham();
    printf("%d",y)
     
  return 0;
}

   
   
				                                           PHAN 4: GOI HAM THEO GIA TRI VA GOI HAM THEO THAM CHIEU
				                                           
   
C1 : CALL BY VALUE : GOI HAM THEO GIA TRI   
VD 1: GOI HAM THEO GIA TRI


#include <stdio.h>


void hoanVi(int x,int y){

     int temp;
     
     temp=x;
     
     x=y;
     
     y=temp;

}  
   
int main(){
	
   int so1=200;
   int so2=300; 
   printf("Gia tri cua so 1 truoc khi hoan vi : %d",so1);
   printf("Gia tri cua so 2 truoc khi hoan vi : %d",so2);
   
   hoanVi(so1,so2);
   
   printf("Gia tri cua so 1 sau khi hoan vi : %d",so1);
   printf("Gia tri cua so 2 truoc khi hoan vi : %d",so2);

   return 0;
} 
   
   
   
C2: CALL BY REFERENCE GOI HAM THEO THAM CHIEU   
 
#include <stdio.h>

void hoanVi(int *x,int *y){

     int temp;
     //bat buoc phai co dang nhu vay
     temp=*x;//temp = doi so day tien 
     *x=*y;
     *y=temp;//doi so cuoi cung se bang temp

}  
   
int main(){
   int so1=200;
   int so2=300; 
   printf("\nGia tri cua so 1 truoc khi hoan vi : %d",so1);
   printf("\nGia tri cua so 2 truoc khi hoan vi : %d",so2);
   hoanVi(&so1,&so2);
   
   printf("\nGia tri cua so 1 sau khi hoan vi : %d",so1);
   printf("\nGia tri cua so 2 truoc khi hoan vi : %d",so2);

   return 0;
} 
   
     


________________________________________________________________________________________________________________________________________   
   
   
    		                                   			           BAI 6: MANG 

       			                                     PHAN 1: GIOI THIEU VE MANG MOT CHIEU


PHAN LOAI:
	       gom co hai phan :  mang mot chieu 
	                          mang hai chieu 
                                          
                                          PHAN 1: MANG MOT CHIEU 
                                          
                                          
//khi khai bao du lieu cua mang thi bat dau bang 0 


CAC LOAI MANG :

int a[4] ={ 2,4,9,100 };           mang nay se co 4 phan tu va minh se gan so vao mang luon                       
        
        0	1	2	3              truy xuat mang la: a[3] :hop le
    a	2	4	9	100                               a[4] :khong hop le
   
int a[4] ={ 2 ,9 };                mang nay se co 4 phan tu nhung chi gan co 2 ,con lai may se de trong
   
        0	1	2	3
    a	2	9	0	0 
   
int a[0] ={ 0 };                   mang nay se co 4 phan tu bang nhau    

        0	1	2	3
    a	0	0	0	0    
    
int a[ ]  = { 3,4,8,12 };          mang nay may se tu dong la xem co bao nhieu phan tu   
 
        0	1	2	3
	a   3	4	8	12
    
    
CAU 1: NHAP XUAT DU LIEU CUA MANG 

VD1:gan mang cho tung gia tri
	
	
#include <stdio.h>

int main(){
	
    //khai bao mang cua chuong trinh
    
    int arr[6];  ///mang nay se co 6 phan tu 
    
     arr[0]=2;
     arr[1]=5;
     arr[2]=4;
     arr[3]=9;
     arr[4]=19;
     arr[5]=1;
    

   return 0;
}	



VD2:su dung vong lap for de nhap tung mang


#include <stdio.h>

int main(){

   //khai bao du lieu 
   int i,n;
   int arr[n];
   
   printf("Moi ban nhap ban nhap so phan tu cua mang:");
   scanf("%d",&n);
   
   for(i=0;i<n;i++){
      //i++ la cong sau 
      printf("Xin moi nhap gia tri vao vi tri thu arr[%d] :",i);
      scanf("%d",&arr[i]);
      
   
   }
   
   return 0;
   
}

	
VD3:XUAT DU LIEU CUA MANG RA NGOAI MAN HINH  
	
	

#include <stdio.h>


int main(){

   //khai bao du lieu 
    int i,n;
   int arr[n];
   
   printf("Moi ban nhap ban nhap so phan tu cua mang:");
   scanf("%d",&n);
   
   for(i=0;i<n;i++){
      
      printf("Xin moi nhap gia tri vao vi tri thu arr[%d] :",i);
      scanf("%d",&arr[i]);
        
   }
     
     //XUAT DU LIEU 
     
       printf("Toi muon lay vi tri thu 2 trong mang la: %d",arr[1]);
     
     
   return 0;
   
}
	
	
	

VD 4: LAY TAT CA DU LIEU 


#include <stdio.h>

int main(){

   //khai bao du lieu 
    int i,n;
   int arr[n];
   
   printf("Moi ban nhap ban nhap so phan tu cua mang:");
   scanf("%d",&n);
   
   for(i=0;i<n;i++){
   	
      //nhap mang 
      printf("Xin moi nhap gia tri vao vi tri thu arr[%d] :",i);
      scanf("%d",&arr[i]);
        
   }
     
     //XUAT DU LIEU 
      for(i=0;i<n;i++){
      	
       printf("Toi muon lay vi tri thu %d trong mang la : %d\n",i,arr[i]);
}
     
     
   return 0;
   
}
	
	
		
	
	                                                		PHAN 2: GIOI THIEU VE CAC THUAT TOAN SAP XEP 
	                                              
	  
	  
	                                              
CAC THUAT TOAN CO BAN TRONG SAP XEP :	                                              
	  
  bubble sort
	quick sort
	simple selection sort 
	heap sort 
	simple insertion sort 
	shell sort 
	merge sort 
	radix sort 
	
	====> su dung lenh sap xep bulle sort 
	
khong phu thuoc vao ngon ngu ,ngon ngu nao cung co the su dung duoc	
	
	
	
CAU 1:ANG
 XAY DUNG XEP SEP BAI TOAN MANG THEO THU TU TANG DAN CUA CAC MANG

	

#include <stdio.h>	

int main(){
   //khai bao mang 
   
   int a,b,n,temp;
   int arr[n];
   
   printf("Xin moi ban nhap so phan tu cua mang : ");
   scanf("%d",&n);
    
   //nhap vao gia tri cua mang 
   
  for(a=0;a<n;a++){
  
     printf("Xin moi nhap vao vi tri thu arr[%d]:",a);
     scanf("%d",&arr[a]);
     
  }
   
  
  //khoang dieu kien de co the sap xep theo thu tu tang dan 
  //xap sep bai toan theo dang bubble sort
  
  for(a=0;a<n-1;a++){
     for(b=a+1;b<n;b++){
	    if(arr[b] < arr[a]){
	    	
		   temp=arr[a];//phai cho vong for sau nho hon vong for truoc .tang 
		   arr[a]=arr[b];//dia chi tham chieu gan giong nhu ham su dung bien temp
		   arr[b]=temp;
		
		}
	 
	 }  
     
  }
  
   ///xuat mang 
     for(a=0;a<n;a++){
	   
	   printf("Vi tri thu arr[%d] : %d\n",a,arr[a]);
	 
	 }
   return 0;
}	
	
		
	
CAU 2: XAP SEP THU TU THEO DANG TU CAO XUONG THAP HAY NHO DAN



#include <stdio.h>	

int main(){
   //khai bao mang 
   
   int a,b,n,temp;
   int arr[n];
   
   printf("Xin moi ban nhap so phan tu cua mang : ");
   scanf("%d",&n);
   
   
   //nhap vao gia tri cua mang 
   
  for(a=0;a<n;a++){
  
     printf("Xin moi nhap vao vi tri thu arr[%d]:",a);
     scanf("%d",&arr[a]);
   
  }
  
  //khoang dieu kien de co the sap xep theo thu tu tang dan 
  //xap sep bai toan theo dang bubble sort
  
  for(a=0;a<n;a++){
     for(b=a+1;b<n;b++){
	    if(arr[b] > arr[a]){
		   temp=arr[a];
		   arr[a]=arr[b];
		   arr[b]=temp;
		
		}
	 
	 }  
     
  }
  
   ///xuat mang 
     for(a=0;a<n;a++){
	   
	   printf("Vi tri thu arr[%d] : %d\n",a,arr[a]);
	 
	 }
   return 0;
}	
	
		



//                                                  PHAN 3: MANG HAI CHIEU 


CU PHAP :
	
	int mangHaiChieu[3][5];



CAU 1: LAM HAI MANG 


#include <stdio.h>

int main(){
   //xay dung chuong trinh mang hai chieu 
   //khai bao du lieu 
   
   
   int a,b,c,d;
   
   printf("Moi ban nhap du lieu vao hang: ");
   scanf("%d",&c);
   
   printf("Moi ban nhap du lieu vao cot: ");
   scanf("%d",&d);
   
   int arr[c][d];
   
//nhap mang 

   for(a=0;a<c;a++){
      for(b=0;b<d;b++){
	      printf("Xin moi nhap vao mang vi tri thu arr[a][b] :",a,b);	  
	      scanf("%d",&arr[a][b]);
	  }   
   }
//xuat mang 
    for(a=0;a<c;a++){
	   for(b=0;b<d;b++){
	   	
	     printf("Vi tri thu arr[%d][%d] :",a,b,arr[a][b]);
	   
	   }	
	}
	
	
  return 0;
  
  
}




________________________________________________________________________________________________________________________________________



                                                         BAI 7: CHUOI 
                                                         

                                     PHAN 1: GIOI THIEU VE CAC HAM LA : STRLEN : DEM
                                                                      : STRCPY :GAN 
                                                                      : STRCAT : LA HAM NOI
                                                                      : GETS : NHAP 
                                                                      : PUTS : XUAT 
      																  	
																				                                    
																	STRCMP : la ham so sanh trong C 
																	 
																	STRREV : la chuoi dao nguoc 
																	
																	STRLWR : tra ve chuoi ki tu thuong 
																	 
																	STRUPR : tra ve cuoi ki tu viet hoa
																		
																	STRSTR : tim chuoi con ===> neu tim thay se hien NULL 			                                    
																	
																	STRCHR : LA HAM TIM KI TU CON 		
																			
		
                                                                      
char : thi chua mot ki tu 
char str[] : chua mot chuoi ki tu 


chuoi mot chieu : str[]
chuoi hai chieu : str[][]    


//xuat chuoi 
      ham : // printf("%s");
      hoac su dung ham xuat la  : // puts
    
    bo ham nhap /* scanf */ vì khi ta nhap ban phim chuoi ki tu thi nó ch? lay chu chu cai dau den khoang trang hoac cach 
    thay vao do la dung ham : // gets
    
    
 //MOT SO HAM VE THAO TAC CHUOI 
 //KHAI BAO THU VIEN   :  <string.h>
 
     strlen 
	 strcpy  
	 strcat 
    
    '\0' duoc goi la  : NULL
    

//TH1 :  SU DUNG HAM STRLEN 

ham strlen() trong C la ham tra ve do dai cua chuoi da cho , no khong tinh ky tu NULL - \'0'

char chuoi[20] = {'h','','','\0'};
printf("Do dai chuoi : %d",strlen(chuoi));
dem so ky tu 


//TH2 : SU DUNG HAM STRCPY 

ham strcpy duoc goi la ham copy de sao chep tu source toi target.

char soucre[20] = {'','',''};

char target[20];

strcpy(target,soucre);

printf("Chuoi target : %d",terget);


//TH3 : HAM STRCAT 

ham strcat la ham noi hai chuoi ky tu ngat ra noi lai voi nhau 

char chuoi[10] ={'','','','\0'};
char chuoi1[10] ={'','\0'};

strcat (chuoi,chuoi1);

printf("Chuoi sau khi ket noi la : %s",chuoi);



//BAI TAP 


BAI 1: 


#include <stdio.h>

int main(){
	
	//khai bao 
	//luon luon khai bao theo chuoi ki tu char : 
	
	char arr[] = "Nguyen Van Huy !";
	
	printf("Ten cua ban la : %s",arr);
	
	
	return 0;
	
}


BAI 2:// ham scanf : chi lay ki tu dau trc cach 
	
	
#include <stdio.h>

int main(){
	
	//khai bao 
    //nhap du lieu 
    
    
    char arr[50];//gioi han 
    printf("Moi ban nhap ten : ");
    scanf("%s",&arr);
    printf("%\s",arr);
     
    return 0;
   
}


BAI 3://su dung ham gets de lay het ca chuoi 
     //su dung ham get khong can cho them ham nhap ma chi khai bao ki tu ham
 
 
     
cach 1: 


#include <stdio.h>

int main(){
   //khai bao 
   
   char arr[10];
   
   printf("Moi ban nhap ten cua ban : ");
   gets(arr);
   printf("%s",arr);
   
   
   return 0;

}


cach 2: 


#include <stdio.h>

int main(){
	
	//khai bao 
	char arr[50];
	
	printf("Moi ban nhap ten : ");
    gets(arr);//ham nhap 
    puts(arr);//la ham xuat 
    
	return 0;
	

} 
		
		

BAI 4: SU DUNG CAC HAM TREN LA HAM STRLEN 

      
     strlen : dem 
	 strcpy : gan 
	 strcat : noi		
		




//HAM STRLEN 
//kiem tra do dai cua mot chuoi 



CACH 1: 


#include <stdio.h>
#include <string.h>


int main(){
	
	//khai bao 
	
	
	char a[] = "Anh yeu em !";
	
	printf("%s\n",a);
	
	
	
	printf("Chuoi ki tu tren co do dai la : %d",strlen(a));
	//se khai bao la dung ham va bien cua chuoi ki tu do 
	
	
	return 0;
	
}



CACH 2: 



#include <stdio.h>
#include <string.h>


int main(){
	
	//khai bao 
	
	char a[50];
	
	 START:printf("Moi ban nhap User name :");
	 gets(a) ;///la ham nhap vao 
	 
	 if(strlen(a) > 10){
	 	
	 	printf("Ten cua ban khong hop le !\n");
	 	printf("Moi ban nhap lai :");
	 	
	 	goto START; 
	 	//su dung goto thi khai bao xem no den dia chi nao 
		  	
	 }else{
	 	
	 	printf("Dang nhap ten thanh cong !\n");
	 	printf("\n");
	 	printf("THANKS YOU ");
	 	
	 	
	 }
	
		
	return 0;
	
}


CAU 5: SU DUNG HAM STRCPY VA HAM STRCAT 


//HAM STRCPY : GAN
//    STRCAT : NOI 
	 strcpy : gan 
	 strcat : noi	
		
		
#include <stdio.h>
#include <string.h>	


int main(){
	
	//khai bao 
	
	char a[50];//bien ban dau 
	char x[] = " FPT ";
	char dest[50];//bien moi co gia tri lon hon hoac bang bien ban dau 
	
    printf("Xin moi ban nhap user name :");
    gets(a);//la ham nhap vao ung voi hanh dong 
    strcpy(dest,a);// ham strcpy la ham gan gai tri voi gai tri truoc cho sau 
    printf("Username cua ban la: %s\n",a);
    printf("Ten cua game cua ban la : %s\n",strcat(dest,x));
    
    
	return 0;
		
}	
		
		
		
//GOP CA BA HAM TREN LAI TRONG MOT BAI TOAN 

  STRLEN : HAM DEM 
  STRCPY : HAM GAN 
  CTRCAT : HAM NOI 
  


  
#include <stdio.h>
#include <string.h>


int main(){
	
	//khai bao du lieu cua chuoi 
	
	char a[50];//bien ban dau 
	char x[] = " Hai Hau ";
	char dest[50];//bien moi lon hon hoac bang bien ban dau 
	
	
	
	START : printf("Moi ban nhap ten : ");
	gets(a);//nhap vao khoang a
	strcpy(dest,a);//gia tri cua a se truyen vao trong dest
	
	if(strlen (a) > 10 ){
		
		printf("Ten dang nhap cua ban khong hop le !\n");
		
		goto START;//vong lap quay ve nhap 
		
	}else {
		
		printf("Ten cua ban hop le !\n");
		printf("Dang nhap thanh cong !\n");
		
	}
	
	printf("Ten dang nhap Games cua ban la : %s\n",dest);
	printf("Ten Facebook cua ban la : %s\n",strcat(dest,x));
	
	
	
	return 0;
	
}  
	
			                                    
			                                    
			                                    PHAN 2 :GIOI THIEU CAC HAM TIEP THEO
			                                    
		
			                                    
STRCMP : la ham so sanh trong C vi du nhu so sanh mang 
 
STRREV : la chuoi dao nguoc 

STRLWR : tra ve chuoi ki tu thuong 
 
STRUPR : tra ve cuoi ki tu viet hoa
	
STRSTR : tim chuoi con ===> neu tim thay se hien NULL 			                                    
		
		
		

BAI 1 : SU DUNG HAM VIET THUONG TRA VE HAM VIET HOA DO LA HAM : STRUPR



#include <stdio.h>
#include <string.h>

int main(){
	
	//khai bao 
	char a[50];
	
	printf("Moi ban nhap ten : ");
	gets(a);
	
	printf("Ten cua ban la : %s",strupr(a));
	
	
	
	return 0;
	
}

 		

BAI 2 : SU DUNG HAM VIET HOA TRA VE THUONG  : STRLWR
		
		
#include <stdio.h>
#include <string.h>


int main(){
	
	//khai bao 
	
	char a[50];
	
	
	printf("Moi ban nhap ten :");
	gets(a);//la ham nhap 
	
	printf("Ten cua ban la :%s",strlwr(a));
	
	
	return 0;
	
}		
		
		

BAI 3 : HAM SO SANH TRONG CHUOI LA HAM STRCMP




#include <stdio.h>
#include <string.h>	

int main(){
	
    //khai bao 
    
    char a[50];
    char b[50];
    
    
    printf("Moi ban nhap a :");
    gets(a);
    
    printf("Moi ban nhap b :");
    gets(b);
    
    printf("Ten cua ban a la : %s\n",a);
    printf("Ten cua ban b la : %s\n",b);
    
    if(strcmp(a,b)==0){
    	
    	printf("Dang nhap thanh cong !\n");
    	
	}else{
		
		printf("Dang nhap that bai ! ");
		
	}

    
    return 0;
	

}	
		
		
		

BAI 4: KIEU TIM HAM CON TRONG C LA : STRSTR 




#include <stdio.h>
#include <string.h>


int main(){
	
	//KHAI BAO 
	
	char a[] = " Nguyen Van Huy ";
	char *b;  //su dung dia chi tham chieu de tim 
	
	
	b = strstr(a,"Nguyen");  // doi so 	
	
	printf("Thank you ! : %s",b);
	
	
	return 0;
	

}	



                                                     ASIHMENT GIAI DOAN 2: 
                                  
                                  
_______________________________________________________________________________________________________________________________________________                 
                                  
                                  
                                                    BAI 8:CAU TRUC TRONG LAP TRINH 
                                          
                                          
                                          
                                                     CAU TRUC : 
                                          
                                          
NOI DUNG : 

    LUU KIEU DU LIEU MOI CHO BAI TOAN KHAI BAO LA 


..//do lap trinh vien tu dinh nghia ra 

   struct sinhVien{
   	
   	int maSV;
   	char ten[50];
   	float diem;
   	
};	
	                                         

CO HAI CACH DINH NGHIA DANG CAU TRUC 


CACH 1: SU DUNG TU KHOA STRUCT TRONG HAM MAIN()
DUOC SU DUNG NHIEU HON


 struct sinhVien{
 	
 	int maSV;
 	char ten[50];
 	float diem;
 		
 };                                         
                                  
void main(){
	
	struct sinhVien sv1,sv2;
	
	
	return 0;
	
}	


CACH 2: SU DUNG SAU KHI DINH NGHIA LUON 


   struct sinhVien{
   	
   	int maSV;
   	int ten[50];
   	float diem;
   	
   		
}sv1,sv2;	
   
   
   
//GAN DU LIEU CHO KIEU CAU TRUC

CO HAI CACH GAN 


CACH 1: 


struct diem{
	
	int x,y;
		
}diem1(2001,2004),diem2;


diem2.x=1000;
diem2.y=300;   	


gan xong khong the nao truy xuat truc tiep duoc ma dua vao cac toan tu cau truc 


LAY DU LIEU RA KHOI CAU TRUC 



struct sinhVien{
	
	int MSV
	int ten[50];
	float diem;
	
}sv1;
		
    printf(" MSV=%d , ten=%s , diem=%f ",sv1.MSV,sv1.ten,sv1.diem);
	
	
	
	
CAU 1: XAY DUNG MOT KIEU DU LIEU STRUCT DON GIAN QUAN LY SACH 



#include <stdio.h>
#include <string.h>


struct sach{
	
	//khai bao 
	
	int maSach;
	int soLuong;
	char tenSach[50];
	double donGia;

};


int main(){
	
	//goi 
	
	struct sach quyenSach1;
	quyenSach1.maSach=1;
	quyenSach1.soLuong=15;
	strcpy(quyenSach1.tenSach,"Nhap mon lap trinh !");//la chuoi gan 
	quyenSach1.donGia=5000;
	
	
	
	struct sach quyenSach2;
	
	
	//xuat du lieu ra
	
	
	printf("Thong tin sach !\n");
	printf("Ma sach : %d \n",quyenSach1.maSach);
	printf("So luong : %d\n",quyenSach1.soLuong);
	printf("Don gia : %lf.VND\n",quyenSach1.donGia);
	printf("Ten sach : %s\n",quyenSach1.tenSach);
	
	
	return 0;
	
	
}	
	                 
	                 
	                                                            MANG CAU TRUC  :
	                                          	
											  

GOM CO HAI PHAN LA	: LA MANG CAU TRUC RIENG BIET 
                    : CAU TRUC NHUNG 
					
					
VD 1: MANG CAU TRUC RIENG BIET 


struct date{
	
	int ngay;
	int thang;
	int nam;
	
};															  	

struct sinhVien{
	
	int maSV;
	char ten[50];
	struct date ngaysinh;
		
}sv1;										                            
	                                    
	

VD 2: CAU TRUNG NHUNG NAM NGAY BEN TRANG CAU TRUC CON LAI 



struct sinhVien{
	
	int maSV;
	char ten[50];
	struct date{
		
		int ngay;
		int thang;
		int nam;
		
	}ngaySinh;
		
}sv1;       




BAI 2: XAY DUNG MOT BIEN MANG CAU TRUC 




#include <stdio.h>
#include <string.h>


struct sinhVien{
	
	int maSV;
	char ten[50];
	struct date{
		
		int ngay;
		int thang;
	    int nam;
	    	
	}ngaySinh;	
	
};


int main(){
	
	//goi ve da 
	
	struct sinhVien sv1;
	
    sv1.maSV = 001;
    strcpy(sv1.ten,"Nguyen Van Huy");
    sv1.ngaySinh.ngay = 8;
    sv1.ngaySinh.thang = 3;
    sv1.ngaySinh.nam = 2003;
	
	printf("Thong tin sinh vien !\n");
	printf("Ma sinh vien :%d\n",sv1.maSV);
	printf("Ten sinh vien : %s\n",sv1.ten);
	printf("Ngay sinh :%d/%d/%d\n",sv1.ngaySinh.ngay,sv1.ngaySinh.thang,sv1.ngaySinh.nam);
	

	return 0;
	
}
        
		
		
		                                                PHAN 2: UNION 
														
DINH NGHIA : DE CHUA CAC PHAN TU GIONG NHAU 
   
PHAN BIET SU DUNG UNION VA STRUCT 





#include <stdio.h>
#include <string.h>


struct sinhVien{
	
	char maSv[50];
	char ten[100];
	float hocPhi;
	
}sv1;


union sach{
	
	int soSach;
	char tenSach[100];
	float giaSach;
		
}sach1;


int main(){
	
	printf("So sanh kieu du lieu cua hai kieu !\n");
	printf("\n");
	printf("Du lieu cua kieu sinh vien : %d\n",sizeof(sv1));
	printf("Du lieu cua kieu sach : %d\n",sizeof(sach1));
	
	printf("\n");
	
	strcpy(sv1.maSv,"PH26813");
    strcpy(sv1.ten,"Nguyen Van Huy");
	sv1.hocPhi = 8000000000;	
	
	printf("Thong tin sinh vien !\n");
	printf("\n");
	
	printf("Ma sinh vien : %s\n",sv1.maSv);
	printf("Ten sinh vien : %s\n",sv1.ten);
	printf("Hoc phi : %.0f\n",sv1.hocPhi);
	
	printf("\n");
	
	printf("Thong tin sach !\n");
	
	printf("\n");
	
    sach1.soSach = 12;
    printf("So sach la :%d\n",sach1.soSach);
    
	strcpy(sach1.tenSach,"Nhap mon lap trinh !");
	printf("Ten sach la :%s\n",sach1.tenSach);
	
	sach1.giaSach = 50000;	
	printf("Gia sach la: %.0f",sach1.giaSach);
	
	
	return 0;
	
}

        														
														
														                                     					                                 

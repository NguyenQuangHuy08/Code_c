
          					                       	//BAI ASM : NGUYEN VAN HUY 
          						
          						
          						
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>


const float b1=1.678,b2=1.734,b3=2.014,b4=2.536,b5=2.834,b6=2.927;


//BAI 1: XAY DUNG CHUONG TRINH KIEM TRA SO 

//1.1 : XAY DUNG CHUONG TRINH KIEM TRA SO NGUYEN !

void check(float so){
	
	
	if(so==(int)so){
		
		printf("%g la so nguyen !\n",so);
		
	}else{
		
		printf("%g khong la so nguyen !\n",so);
		
	}
	
	printf("\n");
	
	
	
}

void soNguyen(){
	
	system("color 2");
	char str[10]= "no";
	char ss[5];
	float so;
	
	do{
	
	printf("Moi ban nhap so :");
	scanf("%f",&so);
	
	check(so);
	
	printf("Ban co muon thoat khoi chuong trinh kiem tra so nguyen khong de den voi so nguyen to va so chinh phuong\n");
	
	printf("yes\n");
	printf("no\n");
    printf("\n");
    scanf("%s",&ss);
    printf("\n");
	
   }while(strcmp(str,ss) == 0);
   
    printf("Tiep tuc kiem tra so nguyen to va so chinh phuong \n");
    printf("\n");
    
}


//1.2 XAY DUNG CHUONG TRINH SO NGUYEN TO 

void soNguyenTo(int so){
	
	 int i;
	 int bienDem=0;
	 
	 if(so==1){
	 	
	 	bienDem=1;
	 	
	}else{
	 
	 for(i=2;i<so;i++){
	 	if(so%i==0){
	 		
	 		bienDem=1;
	 		break;
	  		
    	}	
    }
       
	}if(bienDem==0){
	 	
	 	printf("%d la so nguyen to !\n",so);
	 	
	 }else{
	 	
	 	printf("%d khong la so nguyen to !\n",so);
	 	
	 }
		
}


//1.3 : XAY DUNG CHUONG TRINH SO CHINH PHUONG 

void soChinhPhuong(int so){
	

	int i=1;
	int bienDem=0;
		
		for(i=0;i<=so;i++){
			
			if(i * i == so ){
				
				bienDem=1;
					
			}			
		}		
	if(bienDem==1){
		
		printf("%d la so chinh phuong !\n",so);
		
	}else{
		
		printf("%d khong la so chinh phuong !\n",so);
		
	}
	
}	
	

//KIEM TRA :

void check1(){
	
	
	system("color 1");
	
	int so;
	char str[50]= "no";
	char ss[5];
	
	do{
		
		do{
		
		printf("Moi ban nhap so :");
		scanf("%d",&so);
		
	    }while(so<1);
		
		printf("\n");
		soNguyenTo(so);
		soChinhPhuong(so);
		
		printf("Ban co muon thoat khoi chuong trinh nay khong !\n");
		printf("yes\n");
		printf("no\n");
		scanf("%s",ss);
		printf("\n");
		
  }while(strcmp(str,ss) == 0);
  
  
  
}


//BAI 2 : XAY DUNG UOC SO CHUNG VA BOI CHUNG CUA HAI SO   


void check2(int a ,int b){
	
	//xay dung chuong trinh 
	
	int boiChung =a*b;
	
	while(a != b){
		
		if(a > b){
			
			a=a-b;
			
		}else{
			
			b=b-a;
			
		}
		
	}
	
	printf("UCLN la : %d\n",a);
	printf("BCNN la : %d\n",boiChung/a);
	
		
}


void uocBoi(){
	
	system("color 2");
	
	int a,b;
	char str[10] = "no";
	char ss[5];
	
	do{
		
		do{
		
   	      printf("Moi ban nhap a :");
   	      scanf("%d",&a);
   	      printf("Moi ban nhap b :");
   	      scanf("%d",&b);
		
	   }while(a<=0 || b <=0);
	     
	      check2(a,b);
	      
	      printf("Ban co muon thoat khoi chuong trinh tren hay khong !\n");
	      printf("yes\n");
	      printf("no\n");
	      scanf("%s",ss);
	      printf("\n"); 
	   
   }while(strcmp(str,ss) == 0);
   
   
}


//BAI 3 :
//CHUONG TRINH TINH TIEN CHO QUAN KARAOKE


 void bai3(int batDau , int ketThuc){
 	
	int soGio;
	float tien=0;
	
		soGio = ketThuc - batDau + 1;
		
		if(soGio<=3){
			
			tien = 150000;
			
		}else{
			
			tien = 150000 +( soGio - 3 ) * 50000 * 0.7;
			
		}if(batDau >= 14 && batDau <= 17){
			
			tien=tien*0.9;
			
		}
		
		printf("tien thanh toan :%.1f\n",tien);
		
}

void karaoke(){
	
	system ("color 6");
	
	int batDau,ketThuc;
	
	char str[10]="no";
	char ss[5];
	
	do{
	
	  do{
	
	
		printf("Moi ban nhap so gio bat dau : ");
		scanf("%d",&batDau);
		printf("Moi ban nhap so gio ket thuc : ");
		scanf("%d",&ketThuc);
		printf("\n");
		
	
        }while(batDau < 12 || batDau > 23 || ketThuc < 12 || ketThuc > 23 || batDau > ketThuc);
	
	
	bai3(batDau,ketThuc);
	
	printf("Ban co muon thoat khoi chuong trinh tren hay khong !\n");
	printf("yes\n");
	printf("no\n");
	printf("\n");
	scanf("%s",&ss);
	printf("\n");
	
   }while(strcmp(str,ss) ==0);
	
	
}

//BAI 4: CHUC NANG TINH TIEN DIEN 


void check4(soDien){
	
   float tong;
	
	if( 0 <=soDien && soDien<=50){
		
		tong = soDien * b1;
		
	}else if(51 <= soDien && soDien <= 100){
		
		tong = 50 * b1 + ( soDien - 50 ) * b2;
		
	}else if(101 <= soDien && soDien <= 200){
		
		tong = 50 * b1 + 50 * b2 + ( soDien - 100 )*b3;  
		
	}else if(201 <= soDien && soDien <= 300 ){
		
		tong = 50 * b1 + 50 * b2 + 100 * b3 + ( soDien - 200 )*b4;
		
	}else if(301 <= soDien && soDien <= 400){
		
		tong = 50 * b1 + 50 * b2 + 100 * b3 + 100 * b4 + (soDien - 300 ) * b5;
		
	}else if(soDien >= 401){
		
		tong = 50 * b1 + 50 * b2 + 100 * b3 + 100 * b4 + 100 * b5 + (soDien - 400) * b6;
		
	}
	
	printf("Tong tien dien trong thang nay la : %.2f\n",tong);

}

void tienDien(){
	
	float tong;
	system("color 5");
	
	char str[10] = "no";
	char ss[5];
	int soDien;
	
	do{
	
	
	printf("Moi ban nhap so dien : ");
    scanf("%d",&soDien);
    printf("\n");
    check4(soDien);
    
    printf("Ban co muon thoat khoi chuong trinh tren hay khong ! \n");
    printf("yes\n");
    printf("no\n");
    scanf("%s",&ss);
    printf("\n");
  
  }while(strcmp(str,ss) == 0);
	
}


//BAI 5 : CHUC NANG DOI TIEN 


void check5(int tien){
	
	int loaiTien[9] = {500 , 200 , 100 , 50 , 20 , 10 , 5 , 2 , 1 };
	//mang
	int soToTien;
	int i=0;
	
        printf("Menh gia tien gom co : 500 , 200 , 100 , 50 , 20, 10 , 5 , 2 , 1 !\n");
		
		for(i=0 ; i < 9 ; i++){
			
			soToTien = tien / loaiTien[i];
			
		    if(soToTien !=0){
		    	
		    	printf("co %d  to %d\n",soToTien,loaiTien[i]);
		    	
			}
		
			tien = tien - soToTien * loaiTien[i];
			
		}
		
}


void doiTien(){
	
	int tien;
	char str[10]="no";
	char ss[5];
	
	do{
		
		do{
			
			
			printf("Moi ban nhap so tien can doi :");
			scanf("%d",&tien);
			
			
		}while(tien < 0);
		
		check5(tien);
		
		printf("\n");
		printf("Ban co muon thoat khoi chuong trinh tren hay khong !\n");
		printf("yes\n");
		printf("no\n");
		scanf("%s",&ss);
		printf("\n");
		
	}while(strcmp(str,ss) == 0);
	

}


//BAI 6 : LAI XUAT VAY NGAN HANG 

void bai6(int soTien){
	
	//xay dung chuong trinh 
    int i;
	int lai;
	int gocTra;
	int tienPhaiTra;
	int soTienConLai;
	
	
	gocTra = soTien / 12;
	   printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai\n");
	   
	for(i=1;i<=12;i++){
		
	
	   lai = soTien * 0.05;
	   tienPhaiTra = lai + gocTra;
	   soTien= soTien - gocTra;
	   printf("-------------------------------------------------------------------------\n");
	   printf("%6d |",i);
	   printf("%12d |",lai);
	   printf("%12d |",gocTra);
	   printf("%16d |",tienPhaiTra);
	   printf("%15d |",soTien);
	   printf("\n");
	   
	   
	}
	
}


void laiXuat(){
	
	system("color 5");
	
	int soTien;
	char str[10] = "no";
	char ss[5];
	
 	do{
   		
       do{
		 	
		printf("Moi ban nhap so tien vay : ");
		scanf("%d",&soTien);
		
    }while(soTien <0);
    
    bai6(soTien);
	
	printf("\n");
	printf("Ban co muon  thoat khoi chuong trinh tren hay khong : \n");
	printf("yes\n");
	printf("no\n");
	printf("\n");
	scanf("%s",&ss);
	printf("\n");
	
  }while(strcmp(str,ss) ==0);
	

	
}

//BAI 7 : XAY DUNG CHUONG TRINH VAY TIEN MUA XE 


void bai7(float ptrvay){
	
	ptrvay = ptrvay/100;
	float ptratruoc = 1.0 - ptrvay;
	float tiencodinh = 500000000;
	float lai = 0.072/12;
	float tientratruoc = tiencodinh * ptratruoc;
	float thoihan = 288; // 24 nam * 12 thang
		tiencodinh = tiencodinh - tientratruoc;
	float trahangthang = tiencodinh / thoihan;
	printf("\nSo tien tra truoc %.2f",tientratruoc);
	printf("\nSo tien con lai %.2f",tiencodinh);
	printf("\nSo tien tra hang thang %.2f",trahangthang);
	printf("\n---------------------------------------------------------------------------");
	printf("\nKy han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai | ");
	printf("\n---------------------------------------------------------------------------");
	int i;
	for(i = 1; i <= thoihan; i++){
		float tralai=tiencodinh* lai;
		float tienphaitra= tralai + trahangthang;
		tiencodinh = tiencodinh - trahangthang;
		if(tiencodinh<0){
			tiencodinh=0;
		}
		printf("\n%6d | %12.2f | %12.2f | %16.2f | %15.2f |",i,tralai,trahangthang,tienphaitra,tiencodinh);
		if( i % 12 == 0){
	   		printf("\n================================ Nam thuc %d nam  ===============================",i/12);
		}
	}
	
	
	
}

void vayTien(){
	
	float ptrvay;
	char str[50] = "no";
	char ss[5];
	
	do{
		
		    do{
				
				printf("Nhap phan tram vay: ");
				scanf("%f",&ptrvay);
				
		    }while(ptrvay <0);
						  	   
     	   bai7(ptrvay);
 	
		   printf("\n");
		   printf("Ban co muon thoat khoi chuc nang tren hay khong !\n");
		   printf("yes\n");
		   printf("no\n");
		   printf("\n");
		   scanf("%s",&ss);
	
   }while(strcmp(str,ss)==0);

}

//CAU 8 : SAP XEP THONG TIN SINH VIEN 


//nhap thong tin cua sinh vien 

struct SV{
	
	char ten[50];
	float diem;
    
};


void thongTinSV(){
	
	
	char str[10] = "no";
	char ss[5];
	
	do{
	
	
	struct SV thongTin[100];
	
	int i,n;
	

	do{
	
	printf("Moi ban nhap so luong sinh vien muon them : ");
	scanf("%d",&n);
	fflush(stdin);
	

   
	printf("\n");
	
	//nhap thong tin 
	
	for(i=0;i<n;i++){
		
		printf("Moi ban nhap ten sinh vien : ");
		gets(thongTin[i].ten);
		
	    fflush(stdin);
	    
	    printf("Moi ban nhap diem cua sinh vien : ");
	    scanf("%f",&thongTin[i].diem);
	    
	    fflush(stdin);
	    
	    printf("\n");
		
	}
		
	//sap xep diem theo thu tu giam dan cua thuat toan 
	
	struct SV temp;
	
	int j;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			
			if(thongTin[i].diem < thongTin[j].diem ){
				
				temp = thongTin[i];
				
				thongTin[i] = thongTin[j];
				
				thongTin[j] = temp;
					
			}		
		}	
	}
	
	
	//xuat dieu kien 
	    printf("Xuat thong tin va diem cua sinh vien va hoc luc theo thu tu giam dan \n");
	    printf("\n");
	    
    for(i=0;i<n;i++){
    	
    	printf("Ten cua ban la : %s\n",thongTin[i].ten);
		printf("Diem cua ban la : %f\n",thongTin[i].diem);
    	
    	if(thongTin[i].diem >=9 ){
    		
    		printf("Chuc mung : ban la hoc sinh xuat sac !\n");
    			
		}else if( thongTin[i].diem >=8 ){
			
			printf("Chuc mung : ban la hoc sinh gioi !\n");
					
		}else if(thongTin[i].diem >=6.5){
			
			printf("Ban la hoc sinh kha !\n");
			
		}else if(thongTin[i].diem >= 5){
			
			printf("Ban la hoc sinh trung binh !\n");
			
		}else{
			
			printf("Ban la hoc sinh yeu !\n");
			
		}
    	
            printf("\n");   	
    	
	}
	
	
	 }while(n<0);
	  
	  printf("Ban co muon thoat khoi chuc nang tren hay khong !\n");
	  printf("yes\n");
	  printf("no\n");
	  printf("\n");
	  
	  scanf("%s",&ss);
	  
	 
    }while(strcmp(str,ss) == 0);


}



//BAI 9 : XAY DUNG CHUC NANG GAME FPOLY 

void trungThuong(int a , int b){
	
	//xay dung thuat toan 
	
	int soNgauNhien;
	
	time_t seconds;
	
	srand((unsigned) seconds);
	
	int i;
	//su dung vong lap for de chay so ngau nhien 
	for(i=0 ; i< 2 ;i++){
		
		soNgauNhien = rand()%15 + 1;
	    
		printf("So ngau nhien la : %d\n",soNgauNhien);
			
	}
	
	//xay dung dieu kien 
	
	printf("\n");
	
	if(soNgauNhien == a && soNgauNhien==b){
		
		printf("Chuc mung ban !\n");
		printf("Ban da duoc giai nhat !\n");
		
	}else if(soNgauNhien == a || soNgauNhien ==b ){
		
		printf("Chuc mung ban !\n");
		printf("Ban da duoc giai nhi !\n");
		
	}else{
		
		printf("Chuc ban may man lan sau !\n");
	
	}
	
	
}


void game(){
	
	system("color 3");
	char str[20]="no";
	char ss[5];
	
	do{
	
	int a,b;
	    
	    printf("Quay so ngau nhien !\n");
	    printf("Game FPOLY - LOTT(2/15)\n");
	    
	    printf("\n");
	
		do{
			
			printf("Moi ban nhap so 1 : ");
			scanf("%d",&a);
			printf("Moi ban nhap so 2 : ");
			scanf("%d",&b);
			
		}while(a < 0 || b > 15);
	   
	   trungThuong(a,b);
	  
	  printf("Ban co muon thoat khoi chuc nang tren hay khong !\n");
	  printf("yes\n");
	  printf("no\n");
	  printf("\n");
	  scanf("%s",&ss);
	  printf("\n");
	
	
  }while(strcmp(str,ss)==0);
	
	
}


//BAI 10 : XAY DUNG CHUC NANG TINH TOAN PHAN SO 



struct phanSo{
	
	int tuSo;
	int mauSo;
	
	
};

void bai10(){
	
	struct phanSo so1;
	struct phanSo so2;
	struct phanSo tong;
	struct phanSo hieu;
	struct phanSo thuong;
	struct phanSo tich;
	
	
	printf("Tu so thu nhat : ");
	scanf("%d",&so1.tuSo);
	printf("Mau so thu nhat : ");
	scanf("%d",&so1.mauSo);
	printf("Tu so thu hai : ");
	scanf("%d",&so2.tuSo);
	printf("Mau so thu hai : ");
	scanf("%d",&so2.mauSo);
	
	
	tich.tuSo = so1.tuSo * so2.tuSo;
	tich.mauSo = so1.mauSo * so2.mauSo;
	
	thuong.tuSo = so1.tuSo * so2.mauSo;
	thuong.mauSo = so1.mauSo * so2.tuSo;
	
	tong.tuSo = so1.tuSo * so2.mauSo + so2.tuSo * so1.mauSo; 
	tong.mauSo = so1.mauSo * so2.mauSo;
	
	hieu.tuSo = so1.tuSo * so2.mauSo - so2.tuSo * so1.mauSo;
	hieu.mauSo = so1.mauSo * so2.mauSo;
	
	
	printf("Tong cua hai phan so %d/%d va %d/%d la : %d/%d\n",so1.tuSo,so1.mauSo,so2.tuSo,so2.mauSo,tong.tuSo,tong.mauSo);
	printf("Hieu cua hai phan so %d/%d va %d/%d la : %d/%d\n",so1.tuSo,so1.mauSo,so2.tuSo,so2.mauSo,hieu.tuSo,hieu.mauSo);
	printf("Tich cua hai phan so %d/%d va %d/%d la : %d/%d\n",so1.tuSo,so1.mauSo,so2.tuSo,so2.mauSo,tich.tuSo,tich.mauSo);
	printf("Thuong cua hai phan so %d/%d va %d/%d la : %d/%d\n",so1.tuSo,so1.mauSo,so2.tuSo,so2.mauSo,thuong.tuSo,thuong.mauSo);
	
}





void menu(){
	
      
   system("Color 5");
   
   printf("-----------------------------------------------------------------------------\n");
   printf("                                ------------                                 \n");
   printf("                                  ------                                     \n");
   printf("                                                                             \n");
   printf("                  Chao mung ban den voi nhap mon lap trinh !                 \n");
   printf("                                                                             \n");
   printf("                         =======NGUYEN VAN HUY=======                        \n");
   printf("                             =======PH26813========                          \n");
   printf("                                  ====MENU====                               \n");
   printf("                                                                             \n");
   printf("                      1.Kiem tra so nguyen                                   \n");
   printf(" 											                                \n");
   printf("                           +)1.1 :Kiem tra so nguyen                         \n");
   printf("                           +)1.2 :Kiem tra so nguyen to                      \n");
   printf("                           +)1.3 :Kiem tra so chinh phuong                   \n");
   printf(" 							                                                \n");
   printf("                      2.Uoc so chung va Boi so chung cua 2 so                \n");
   printf(" 											                                \n");
   printf("                      3.Chuong trinh tinh tien cho qua karaoke               \n");
   printf(" 											                                \n");
   printf("                      4.Tinh tien dien                                       \n");
   printf(" 											                                \n");
   printf("                      5.Chuc nang doi tien                                   \n");
   printf(" 											                                \n");
   printf("                      6.Tinh lai suat vay ngan hang tra gop                  \n");
   printf(" 											                                \n");
   printf("                      7.Vay tien mua xe                                      \n");
   printf(" 										                                    \n");
   printf("                      8.Sap xep thong tin sinh vien                          \n");
   printf(" 							                                                \n");
   printf("                      9.Xay dung game FPOLY-LOTT (2/15)                      \n");
   printf(" 											                                \n");
   printf("                      10.Xay dung chuong trinh tinh phan so                  \n");
   printf(" 								                							\n");
   printf("                      0.Ban chon thoat                                       \n");
   printf("                                                                             \n");
   printf("                          -------------------------                          \n");
   printf("                               -----------------                             \n");
   printf("                                     -----                                   \n");
   printf("-----------------------------------------------------------------------------\n");
   
   int so;
   printf("\n");
   printf("Moi ban nhap so de thuc hien chuong trinh chay :");
   scanf("%d",&so);
   printf("\n");
   switch(so){
   	
   	   case 1:
   	   	
   	   	soNguyen();
   	   	check1();
   	   	
   	    break;
   	    
   	   case 2:
   	   	
		uocBoi();
		break;  
   	    
   	   case 3:
		
		karaoke();
		break;
		
	   case 4:
	    
	    tienDien();
	    break;
		
	   case 5:
	    
	    doiTien();
	    break;
		
	   case 6:
	    
	    laiXuat();
	    break;
		
	   case 7:
	    
	    vayTien();
	    break;
		
	   case 8:
	    
	    thongTinSV();
	    break;
	    
	   case 9:
	   
	    game();
	    break;
		
	   case 10:
	   
	    bai10();
	    break;
		
	   case 0:
	     exit(0);
		 break;
		 	 
	    default : 
		 
		 printf("Chuc nang ban chon khong co !\n");
		 printf("Moi ban chon lai chuc nang !\n");
		 printf("\n");		 
		 	 
			  				   
   }
   
   
}    



int main(){
	
	while(1){
		
		menu();
		
	}
	
	
	return 0;
	
}      						

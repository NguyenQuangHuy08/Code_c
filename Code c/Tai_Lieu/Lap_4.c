                                                   

//LAP 4: 
/*

   BAI 1: TINH TRUNG BINH TONG CAC SO TU NHIEN CHIA HET CHO 2  ==> FOR
   BAI 2: XAY DUNG CHUONG TRINH XAC DINH SO NGUYEN TO          ==> FOR
   BAI 3: XAY DUNG CHUONG TRINH SO CHINH PHUONG                ==> FOR
   BAI 4: XUAT RA MAN HINH 5 LAN CAU LENH ANH YEU EM 
   BAI 5: TINH TONG CAC SO CO DINH TU 1 DEN 20 
   BAI 6: TINH TONG CAC SO TU 1 DEN N
   BAI 7: TINH TONG TU 1 DEN N CHI LAY SO DUONG 
   BAI 8: NHAP TUOI KHONG DUNG NHAP LAI 
   


*/






BAI 1: TINH TRUNG BINH TONG CAC SO TU NHIEN CHIA HET CHO 2 TU MIN TOI MAX



#include <stdio.h>
#include <math.h>

int main(){
      int min,max;
      float sum,biendem=0,avg=0;//bien diem la ham cout cung duoc
      int i;
      
      
      printf("Moi ban nhap gia tri min :");
      scanf("%d",&min);
      printf("Moi ban nhap gia tri max :");
      scanf("%d",&max);
           
      for(i=min;i<=max;i++){
	     if(i%2==0){
		    sum+=i;
		    biendem++;
		 
		 }
		} 
	      avg=sum/biendem;
	      printf("Gia tri cua tong la: %f",sum);
	      printf("\nGia tri cua trung binh cong la: %f",avg);
	  

  return 0;

}


BAI 2: XAY DUNG CHUONG TRINH XAC DINH SO NGUYEN TO
so nguyen to la so chi chia het cho cho mot va chinh no

CACH 1: 

#include <stdio.h>
int main(){
    int so;
    int i=2;
    printf("Moi ban nhap du lieu vao so :");
    scanf("%d",&so);
    
    int biendem=0;//bien kiem tra ban dau
    
	if(so<2){
	    
	   biendem=1;
	   
	}	
    for(i=2;i<so;i++){
	   if(so%i==0){
	   	  biendem=1;//bien kiem tra chuong trinh xem co thuc hien duoc khong 
	   	  //thuc hien dung thoat khoi chuong trinh 
	      break;//thoat khoi vong lap
	   }	
	}if(biendem==0){	   
	      //reset ouput kiem tra dung 
	   printf("%d la so nguyen to !",so);
	  
	}else{
	 
	   printf("%d khong phai la so nguyen to !",so);
	}
   
    return 0;

}


CACH 2:

#include <stdio.h>

int main(){
	
	//khai bao 
	int i=2;
	int so;
	int check=0;
	
	
	printf("Moi ban nhap so :");
	scanf("%d",&so);
	
	//su dung lenh lap do while 
	
	
	do{
		
		if(so%i==0){
			
			check=1;
			
			break;
			
		}
		
		i++;
		
	}while(i<so/2);//nhap 3
	   
	   if(check==0){
	   	
	   	  printf("%d la so nguyen to !",so);
	   	 
	   }else{
	   	
	   	  printf("%d khong la so nguyen to !",so);
	   	
	   }
	 
	
	return 0;
	
}

//BAI 3: XAY DUNG CHUONG TRINH SO CHINH PHUONG 


//XAY DUNG CHUONG TRINH SO CHINH PHUONG 


#include <stdio.h>
int main(){
    //khai bao du lieu 
    //so chinh phuong khong la so am 
    int so;
    
    printf("Moi ban nhap du lieu vao de kiem tra xem so do co la so chinh phuong hay khong !: ");
    scanf("%d",&so);
    
//th1
    if(so<0){
//so chinh phuong la so khong am 
	   printf("%d khong la so chinh phuong ",so);
//th2
	}else if(so==1){
//1 luon luon la so chinh phuopng 
	   printf("%d la so chinh phuong ",so);
//th3
	}else{
		
		int i;//day la bien chay khoi dau 
		int bienDem=0;//ban dau bang 0
		for(i=1;1<=so;i++){
			//diem kien de co mot so chinh phuong
		     if(i*i==so){
			   bienDem++;//so lan dem cho dieu kien sai het 
			   break;			    
			 }		
		}if(bienDem==0){
		
			 printf("%d khong la so chinh phuong ",so);
			 
		}else{
			
			printf("%d la so chinh phuong ",so);
		}		
	}
    

   return 0;

}


//BAI 4: HAY XUAT RA MAN HINH 5 LAN CAU LENH ANH YEU EM 


#include <stdio.h>
int main(){
   //khai bao du lieu 
   int i=1;
   
   while(i<6){
     
     printf("\nAnh yeu em !");
     i++;
   
   }

  return 0;

}



//BAI 5: TINH TONG CAC SO TU 1 DEN 20 CO SO CO DINH 


#include <stdio.h>
int main(){
    //khai bao du lieu 
    int i=1;
    int tong=0;
    while(i<=20){
	   tong+=i;
	   i++;	
	}
     printf("Tong tu 1 den 20 la: %d",tong);
     
     return 0;
   
}



//BAI 6: TINH TONG CAC SO TU 1 DEN N LA :



#include <stdio.h>
int main(){
    //khai bao du lieu 
    int i=1;
    int tong=0;
    int n;
    
    printf("Moi ban nhap du lieu vao N :");
    scanf("%d",&n);
    
    while(i<=n){
	    tong+=i;
	     i++;	
	}
    
    printf("Tong co gia tri tu 1 den N la: %d",tong);
    
    return 0;
}



//BAI 7 : TINH TONG TU 1 DEN N NHUNG CHI LAY SO DUONG CONG TONG



#include <stdio.h>
int main(){
   //khai bao du lieu 
   int i;
   int tong=0,n;
   
   for(i=1;i<=n;i++){
      if(i%2==0){
	   tong+=i;
	   i++;
	  } 
   }

    printf("Tong so chan tu 1 den N la: %d",tong);
  
   
  return 0;
  
}



//BAI 8:TINH TONG CAC SO LE TU 1 DEN N 



#include <stdio.h>
int main(){
    //khai bao du lieu 
    int i,tong=0,n;
    
    printf("Moi ban nhap du lieu vao N : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
	  if(i%2 !=0){
	    tong+=i;
	    i++;	  
	  }	
	}
     printf("Tong cac so le tu 1 den N la: %d",tong);
     
     
     return 0;

}


//BAI 9: XAY DUNG BANG CUU CHUONG 2


#include <stdio.h>
int main(){
   //khai bao du lieu 
   int i;
   printf("Bang cuu chuong 2 !\n");
   printf("\n");
   for(i=1;i<=10;i++){
           
      printf("%d x %d =%d",2,i,2*i);
   }


  return 0;
  
}


//BAI 10: XAY DUNG CHUONG TRINH BANG CUU CHUONG TU 1 DEN 10 



#include <stdio.h>

int main(){
   //khai bao du lieu 
   int a,b;
   
     printf("Bang cuu chuong tu 1 den 10 !\n");
   for(a=1;a<=10;a++){
       for(b=1;b<=10;b++){
	     printf("%d x %d =%d\n",a,b,a*b);
	     
	   }
	   printf("\n");
   }

    return 0;

}



//BAI 11: XAY DUNG CHUONG TRINH NHAP TUOI ,NHAP KHONG DUNG NHAP LAI


#include <stdio.h>
int main(){
     //khai bao du lieu 
     int tuoi;
     
     do{
     	printf("Moi ban nhap tuoi :");
     	scanf("%d",&tuoi);     	
     	
	 }while(0>tuoi || tuoi > 200);
  
    printf("Tuoi cua ban la : %d",tuoi);
       
    return 0;

}


//BAI 12: XAY DUNG CHUONG TRINH MENU CHUA CAC DU LIEU TREN



#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//bai toan nhap tu min toi max chia het cho 2
void trungBinh(){
      int min,max;
      float sum,biendem=0,avg=0;//bien diem la ham cout cung duoc
      int i;
      
      
      printf("Moi ban nhap gia tri min :");
      scanf("%d",&min);
      printf("Moi ban nhap gia tri max :");
      scanf("%d",&max);
           
      for(i=min;i<=max;i++){
	     if(i%2==0){
		    sum+=i;
		    biendem++;
		 
		 }
		} 
	      avg=sum/biendem;
	      printf("Gia tri cua tong la: %f",sum);
	      printf("\nGia tri cua trung binh cong la: %f",avg);

}  

//xac dinh so nguyen to 
void soNguyenTo(){
     int so;
    int i=2;
    printf("Moi ban nhap du lieu vao so :");
    scanf("%d",&so);
    int biendem=0;
    
    for(i=2;i<2;i++){
	   if(so%i==0){
	   	  biendem=1;
	      break;
	   }	
	}if(biendem==0){	   
	   printf("%d la so nguyen to !",so);
	
	}else{
	 
	   printf("%d khong phai la so nguyen to !",so);
	}
	
}


void soChinhPhuong(){
    //khai bao du lieu 
    //so chinh phuong khong la so am 
    int so;
    
    printf("Moi ban nhap du lieu vao de kiem tra xem so do co la so chinh phuong hay khong !: ");
    scanf("%d",&so);
    
//th1
    if(so<0){
//so chinh phuong la so khong am 
	   printf("%d khong la so chinh phuong ",so);
//th2
	}else if(so==1){
//1 luon luon la so chinh phuopng 
	   printf("%d la so chinh phuong ",so);
//th3
	}else{
		
		int i;//day la bien chay khoi dau 
		int bienDem=0;//ban dau bang 0
		for(i=1;1<=so;i++){
			//diem kien de co mot so chinh phuong
		     if(i*i==so){
			   bienDem++;//so lan dem cho dieu kien sai het 
			   break;			    
			 }		
		}if(bienDem==0){
		
			 printf("%d khong la so chinh phuong ",so);
			 
		}else{
			
			printf("%d la so chinh phuong ",so);
		}		
	}
    

}


//xuat ra man hinh anh yeu em 5 lan 
void anhYeuEm(){
      //khai bao du lieu 
   int i=1;
   
   while(i<6){
     
     printf("\nAnh yeu em !");
     i++;
   
   }

} 

//bai toan tinh tong tu 1 den 20 co dinh 
void tinhTong20(){
    //khai bao du lieu 
    int i=1;
    int tong=0;
    while(i<=20){
	   tong+=i;
	   i++;	
	}
     printf("Tong tu 1 den 20 la: %d",tong);

}

//tinh tong tu 1 den N 
void tongN(){
  //khai bao du lieu 
    int i=1;
    int tong=0;
    int n;
    
    printf("Moi ban nhap du lieu vao N :");
    scanf("%d",&n);
    
    while(i<=n){
	    tong+=i;
	     i++;	
	}
    
    printf("TOng co gia tri tu 1 den N la: %d",tong);

}


//tinh tong duong 
void tongDuong(){
    //khai bao du lieu 
   int i;
   int tong=0,n;
   
   for(i=1;i<=n;i++){
      if(i%2==0){
	   tong+=i;
	   i++;
	  } 
   }

    printf("Tong so chan tu 1 den N la: %d",tong);

}

//tinh tong le
void tongLe(){
  //khai bao du lieu 
    int i,tong=0,n;
    
    printf("Moi ban nhap du lieu vao N : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
	  if(i%2 !=0){
	    tong+=i;
	    i++;	  
	  }	
	}
     printf("Tong cac so le tu 1 den N la: %d",tong);

}

//bang cuu chuong 2
void bang2(){
   //khai bao du lieu 
   int i;
   printf("Bang cuu chuong 2 !\n");
   printf("\n");
   for(i=1;i<=10;i++){
           
      printf("%d x %d =%d",2,i,2*i);
   }

}

//bang cuu chuong tu 1 den 10
void bangHet(){
     //khai bao du lieu 
   int a,b;
   
     printf("Bang cuu chuong tu 1 den 10 !\n");
   for(a=1;a<=10;a++){
       for(b=1;b<=10;b++){
	     printf("%d x %d =%d\n",a,b,a*b);
	     
	   }
	   printf("\n");
   }

}

//nhap tuoi k khop nhap lai
void tuoi(){
    //khai bao du lieu 
     int tuoi;
     
     do{
     	printf("Moi ban nhap tuoi :");
     	scanf("%d",&tuoi);     	
     	
	 }while(0>tuoi || tuoi > 200);
  
    printf("Tuoi cua ban la : %d",tuoi);

}


void menu(){
      printf("|==================NGUYEN QUANG HUY=====================|\n");
      printf("|________________________IT17329________________________|\n");
      printf("|........................PH26813........................|\n");
      printf("|                         Menu                          |\n");
      printf("|1.Tinh trung binh tong !                               |\n");
      printf("|2.So nguyen to !                                       |\n");
      printf("|3.So chinh phuong !                                    |\n");
      printf("|4.Anh yeu em !                                         |\n");
      printf("|5.Tinh tong tu 1 den 20 !                              |\n");
      printf("|6.Tinh tong tu 1 den N !                               |\n");
      printf("|7.Tinh tong cua cac so duong !                         |\n");
      printf("|8.Tinh tong cua cac so le !                            |\n");
      printf("|9.Bang cuu chuong 2!                                   |\n");
      printf("|10.Bang cuu chuong tu 1 den 10                         |\n");
      printf("|11.Moi ban nhap tuoi !                                 |\n");
      printf("|0.Ban chon thoat !                                     |\n");
      printf("|.......................................................|\n");


     int so;
     printf("Moi ban chon chuc nang de chay chuong trinh :");
     scanf("%d",&so);
     
     switch(so){
	 
	    case 1:trungBinh();
	    break;
	    
	    case 2:soNguyenTo();
	    break;
	    
	    case 3:soChinhPhuong();
	    break;
	    
	    case 4:anhYeuEm();
	    break;
	    
	    case 5:tinhTong20();
	    break;
	    
	    case 6:tongN();
	    break;
	    
	    case 7:tongDuong();
	    break;
	    
	    case 8:tongLe();
	    break;
	    
	    case 9:bang2();
	    break;
	 
	    case 10:bangHet();
	    break;
	    
	    case 11:tuoi();
	    break;
	    
	    case 0:
	    	exit(0);
	    	break;
	    	
	    	default:
	    		
	    		printf("Moi ban chon chuong trinh ");
	    		break;
	 }
    
}


int main(){
    while(1){
    menu();
    
   }
  
  
    return 0;
  
}

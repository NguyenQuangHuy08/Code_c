

//LAP 3:
	
	
//BAI 1: XAY DUNG CHUONG TRINH TINH HOC LUC CUA SINH VIEN 


	
#include <stdio.h>
int main(){
    float diem;
    
    printf("Moi ban nhap diem :");
    scanf("%f",&diem);
    
   if(diem>=9){ 
   
      printf("Chuc mung ban.Ban la hoc sinh xuat sac !");
      
   }else if(diem>=8){
   
      printf("Chuc mung ban.Ban la hoc sinh gioi !");
   
   }else if(diem>=6.5){
   
      printf("Ban la hoc sinh kha !");
   
   }else if(diem>=5){
   
      printf("Ban la hoc sinh trung binh ");
   
   }else if(diem>=3.5){
   
      printf("Ban la hoc sinh yeu ");
   
   }else{
   
      printf("Ban la hoc sinh kem ");
   
   }


    return 0;

}


//BAI 2:XAY DUNG CHUONG TRINH GIAI PHUONG TRINH BAC 1 : AX+ B=0



#include <stdio.h>
int main(){
    double a,b,x;
    
    printf("Moi ban nhap du lieu vao a : ");
    scanf("%lf",&a);
    printf("Moi ban nhap du lieu vao b :");
    scanf("%lf",&b);
    
    
    if(a==0){
	   if(b==0){
	   	
	     printf("Phuong trinh da cho vo so nghiem");
	     
	   }else {
	   	
	     printf("Phuong trinh da cho vo nghiem");
	     
	   }
	}else{
		
		x=-b/a;
		printf("Phuong trinh da cho co nghiem : %lf",x);
			
	}

     return 0;
}



//BAI 3: XAY DUNG CHUONG TRINH GIAI PHUONG TRINH BAC 2 : ax2 + bx + c = 0



#include <stdio.h>
#include <math.h>
int main(){

    //bai bao du lieu 
    
    float a,b,c,x;
    
    printf("Moi ban nhap du lieu vao a: ");
    scanf("%f",&a);
    printf("Moi ban nhap du lieu vao b: ");
    scanf("%f",&b);
    printf("Moi ban nhap du lieu vao c: ");
    scanf("%f",&c);
    
//xay dung cac thuat toan trong bai 
    
//xet truong hop dau tien a =0;

    if(a==0){                                            //ax2 + bx + c = 0
//xay dung truong hop b = 0
	    if(b==0){
		   if(c==0){
		       printf("Phuong trinh da cho vo so nghiem !");			   		   
		   }else if(c!=0){
		       printf("Phuong trinh da cho vo nghiem !");		   
		   }
		}else{
//xay dung chuong trinh voi b !=0
			if(c!=0){				
				x= -c/b;
			   printf("Phuong trinh da cho co nghiem : %d",x);			
			}else{
			x=0;
			printf("PHuong trinh da cho co nghiem : %d",x);
			}			 
		}
//ket thuc thuat toan voi dang a=0	
//xay dung chuong trinh voi a !=0                        //ax2 + bx + c = 0
	}else{
		double delta=pow(b,2)-4*a*c;
		
		if(delta<0){		  
		   printf("Phuong trinh da cho vo nghiem !");		   		
		}else if(delta==0){		
		   x=-b/2*a;
		   printf("Phuong trinh da cho co nghiem kep !: %d",x);
		}else{
			  printf("Phuong trinh da cho co hai nghiem phan biet !");
			  
			  double x1=(-b + sqrt(delta))/2*a;
			  double x2=(-b - sqrt(delta))/2*a;
			  printf("\n");
			  printf("Phuong trinh da cho co nghiem x1 : %d",x1);
			  printf("Phuong trinh da cho co nghiem x2 : %d",x2);
			  			
		}		
	}			
		 return 0;
		
	}




//BAI 4: XAY DUNG CHUONG TRINH TINH TIEN DIEN HANG THANG 




#include <stdio.h>
const double b1=1.678,b2=1.734,b3=2.014,b4=2.536,b5=2.834,b6=2.927;

int main(){
     //khai bao du lieu 
     int soDien;
     double tong;
     
     printf("Moi ban nhap so dien ma ban da dung trong thang do : ");
     scanf("%d",&soDien);
     
     
     if(0<soDien && soDien<=50){
	    
	    tong=soDien*b1;
			 
	 }else if(soDien<=100){
	 
	    tong=50*b1 + (soDien - 50)*b2;
	    
	 }else if(soDien<=200){
	 
	    tong=50*b1 + 50*b2 + (soDien -100)*b3;
	    
	 }else if(soDien<=300){
	 
	    tong=50*b1 + 50*b2 + 100*b3 + (soDien - 200)*b4;
	    
	 }else if(soDien<=400){
	  
	    tong=50*b1 + 50*b2 + 100*b3 + 100*b4 + (soDien - 300)*b5;
	 
	 }else{
	
	    tong=50*b1 + 50*b2 + 100*b3 + 100*b4 + 100*b5 + (soDien -400)*b6;
	 	
	 }
     
      printf("Tong so tien dien phai dong trong thang do la: %lf",tong);
     
     
     return 0;
}




//BAI 5: XAY DUNG CHUONG TRINH MENU CHUA CAC BAI TOAN TREN 




#include <stdio.h>
#include <stdlib.h>//su dung ham cho menu 
#include <math.h>
const double b1=1.678,b2=1.734,b3=2.014,b4=2.536,b5=2.834,b6=2.927;

//xay dung chuong trinh tinh hoc luc cua sinh vien
void hocLuc(){
    
    float diem;
    
    printf("Moi ban nhap diem :");
    scanf("%f",&diem);
    
   if(diem>=9){ 
   
      printf("Chuc mung ban.Ban la hoc sinh xuat sac !\n");
      
   }else if(diem>=8){
   
      printf("Chuc mung ban.Ban la hoc sinh gioi !\n");
   
   }else if(diem>=6.5){
   
      printf("Ban la hoc sinh kha !\n");
   
   }else if(diem>=5){
   
      printf("Ban la hoc sinh trung binh\n");
   
   }else if(diem>=3.5){
   
      printf("Ban la hoc sinh yeu\n");
   
   }else{
   
      printf("Ban la hoc sinh kem\n ");
   
   }
}


//xay dung chuong trinh giai phuong trinh bac 1 :Ax+b=0


void bac1(){
     double a,b,x;
    
    printf("Moi ban nhap du lieu vao a :\n");
    scanf("%lf",&a);
    printf("Moi ban nhap du lieu vao b :\n");
    scanf("%lf",&b);
    
    
    if(a==0){
	   if(b==0){
	   	
	     printf("Phuong trinh da cho vo so nghiem\n");
	     
	   }else {
	   	
	     printf("Phuong trinh da cho vo nghiem\n");
	     
	   }
	}else{
		
		x=-b/a;
		printf("Phuong trinh da cho co nghiem : %lf\n",x);
			
	}

}   

//xay dung chuong trinh giai phuong trinh bac 2: 
void bac2(){
 //bai bao du lieu 
    
    float a,b,c,x;
    
    printf("Moi ban nhap du lieu vao a: ");
    scanf("%f",&a);
    printf("Moi ban nhap du lieu vao b: ");
    scanf("%f",&b);
    printf("Moi ban nhap du lieu vao c: ");
    scanf("%f",&c);
    
//xay dung cac thuat toan trong bai 
    
//xet truong hop dau tien a =0;

    if(a==0){                                            //ax2 + bx + c = 0
//xay dung truong hop b = 0
	    if(b==0){
		   if(c==0){
		       printf("Phuong trinh da cho vo so nghiem !");			   		   
		   }else if(c!=0){
		       printf("Phuong trinh da cho vo nghiem !");		   
		   }
		}else{
//xay dung chuong trinh voi b !=0
			if(c!=0){				
				x= -c/b;
			   printf("Phuong trinh da cho co nghiem : %d",x);			
			}else{
			x=0;
			printf("PHuong trinh da cho co nghiem : %d",x);
			}			 
		}
//ket thuc thuat toan voi dang a=0	
//xay dung chuong trinh voi a !=0                        //ax2 + bx + c = 0
	}else{
		double delta=pow(b,2)-4*a*c;
		
		if(delta<0){		  
		   printf("Phuong trinh da cho vo nghiem !");		   		
		}else if(delta==0){		
		   x=-b/2*a;
		   printf("Phuong trinh da cho co nghiem kep !: %d",x);
		}else{
			  printf("Phuong trinh da cho co hai nghiem phan biet !");
			  
			  double x1=(-b + sqrt(delta))/2*a;
			  double x2=(-b - sqrt(delta))/2*a;
			  printf("\n");
			  printf("Phuong trinh da cho co nghiem x1 : %d",x1);
			  printf("Phuong trinh da cho co nghiem x2 : %d",x2);
			  			
		}		
	}			   

}

//xay dung chuong trinh tinh tien dien 

void tienDien(){
    //khai bao du lieu 
     int soDien;
     double tong;
     printf("Moi ban nhap so dien ma ban da dung trong thang do : ");
     scanf("%d",&soDien);
     
     
     if(0<soDien && soDien<=50){
	    
	    tong=soDien*b1;
			 
	 }else if(soDien<=100){
	 
	    tong=50*b1 + (soDien - 50)*b2;
	    
	 }else if(soDien<=200){
	 
	    tong=50*b1 + 50*b2 + (soDien -100)*b3;
	    
	 }else if(soDien<=300){
	 
	    tong=50*b1 + 50*b2 + 100*b3 + (soDien - 200)*b4;
	    
	 }else if(soDien<=400){
	  
	    tong=50*b1 + 50*b2 + 100*b3 + 100*b4 + (soDien - 300)*b5;
	 
	 }else{
	
	    tong=50*b1 + 50*b2 + 100*b3 + 100*b4 + 100*b5 + (soDien -400)*b6;
	 	
	 }
     
      printf("Tong so tien dien phai dong trong thang do la: %lf",tong);
     
     
}


void menu(){
   //them mau 
   
   system("color 4");	
	
   printf("|==========NGUYEN VAN HUY==========|\n");
   printf("|==============PH26813=============|\n");
   printf("|===============MENU===============|\n");
   printf("|\t1.Hoc luc cua sinh vien    |\n");
   printf("|\t2.Giai phuong trinh bac 1  |\n");
   printf("|\t3.Giai phuong trinh bac 2  |\n");
   printf("|\t4.Tinh tien dien           |\n");
   printf("|==================================|\n");
   
   int so;
   printf("Moi ban chon chuong trinh\n");
   scanf("%d",&so);
   
   switch(so){
   
      case 1:hocLuc();
      break;
      
      case 2:bac1();
	  break;
	  
	  case 3:bac2();
	  break;
	  
	  case 4:tienDien();
	  break;
	  
	  case 0:exit(0);
	  break;
   
      default:
      	
      	printf("Moi ban nhap so :\n");
      	break;
     
   }

}

int main(){
	while (1){
		menu();
	}
	return  0;
}







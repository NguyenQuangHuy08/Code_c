
#include <stdio.h>


main(){
	
	
   system("color 5");	//them mau 1--->5
   
   
   
   
   printf("|----------------------------------------------|\n");
   printf("|                                              |\n");
   printf("|   Chao mung ban den voi nhap mon lap trinh ! |\n");
   printf("|                                              |\n");
   printf("|         =======NGUYEN VAN HUY=======         |\n");
   printf("|            =======PH26813========            |\n");
   printf("|                 ====MENU====                 |\n");
   printf("|                                              |\n");
   printf("|1.Kiem tra so nguyen                          |\n");
   printf("|2.Uoc so chung va Boi so chung cua 2 so       |\n");
   printf("|3.Chuong trinh tinh tien cho qua karaoke      |\n");
   printf("|4.Tinh tien dien                              |\n");
   printf("|5.Chuc nang doi tien                          |\n");
   printf("|6.Tinh lai suat vay ngan hang tra gop         |\n");
   printf("|7.Vay tien mua xe                             |\n");
   printf("|8.Sap xep thong tin sinh vien                 |\n");
   printf("|9.Xay dung game FPOLY-LOTT (2/15)             |\n");
   printf("|10.Xay dung chuong trinh tinh phan so         |\n");
   printf("|0.Ban chon thoat                              |\n");
   printf("|                                              |\n");
   printf("|----------------------------------------------|\n");
   printf("|----------------------------------------------|\n");
   
   

   int so;
   printf("\n");
   printf("Moi ban chon chuong trinh : ");
   scanf("%d",&so);
   
   switch (so){
   
      case 1: 
      printf("Ban chon chuong trinh kiem tra so nguyen");
      break;
      
      case 2:
      printf("Ban chon chuong trinh tim uoc chung va boi chung");
      break;
      
      case 3:
      printf("Ban chon chuong trinh tinh tien dien cho quan KaRaOke");
	  break;
	  
	  case 4:
	  printf("Ban chon chuong trinh tinh tien dien");
	  break;
	  
	  case 5:
	  printf("Ban chon chuong trinh doi tien");
	  break;
      
      case 6:
      printf("Ban chon chuong trinh tinh lai xuat vay ngan hang vay tra gop");
      break;
      
      case 7:
      printf("Ban chon chuong trinh vay tien mua xe");
      break;
      
      case 8:
      printf("Ban chon chuong tring sap xep thong tin sinh vien");
      break;
      
      case 9:
      printf("Ban chon chuc nang game FPOLY-LOTT (2/15) ");
      break;
      
      case 10:
      printf("Ban chon chuc nang tinh phan so");
      break;
      
      case 0:
      printf("Ban chon thoat khoi chuong trinh");
	  break;	
      	
      default :
      	printf("Ban phai chon dung cac chuong trinh tren !\n");
      	printf("Moi ban chon lai chuong trinh ");
   
   }
   
   
   
   return 0;
   
}

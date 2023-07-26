


                                      						LAP 6:
	
	
BAI 1: TINH TRUNG BINH TONG CAC SO CHIA HET CHO 3 TRONG MANG 



#include <stdio.h>
#include <math.h>


int main(){
      
    int i,n;
    float sum=0,avg=0,bienDem=0;
      
    printf("Moi ban nhap so phan tu mang : ");
    scanf("%d",&n);
        
    int arr[n];
    
    printf("\n");
	  
	 //nhap mang  
	for(i=0;i<n;i++){
	    
	    printf("Moi ban nhap gia tri cua cac phan tu arr[%d]:",i);
	    scanf("%d",&arr[i]);
	
	}
    
    //xuat mang se co dieu kien 
    //xem lai
    
    for(i=0;i<n;i++){
	    if(arr[i]%3==0){
	   	
	     sum+=arr[i];
	     bienDem++;
		    
	   }	
	}
	
      avg=sum/bienDem;
      
      printf("Tong la : %f\n",sum);
      printf("Trung binh tong la : %f\n",avg);


   return 0;

}




BAI 2 : TIM GIA TRI NHO NHAT VA LON NHAT TRONG MANG 
su dung mang 1 chieu 


VD1: TIM GIA TRI LON NHAT CUA MANG 


#include <stdio.h>


int main(){
  
    int a,b,n;
    int temp;
    
    
    printf("Xac dinh so phan tu cua cua mang ! \n");
    printf("\n");
    printf("Moi ban nhap so phan tu n: ");
    scanf("%d",&n);
    
    int arr[n];
    
    //nhap 
    for(a=0;a<n;a++){
	
	   printf("Moi ban nhap gia tri cua cac phan tu arr[%d] =",a);
	   scanf("%d",&arr[a]);
	
	}
	
	for(a=0;a<n;a++){
	   for(b=a+1;b<n;b++){
	      if(arr[b]  <  arr[a]){
	      
	      temp=arr[a];
	      arr[a]=arr[b];
	      arr[b]=temp;
	     }
	   }	
	}

     for(a=0;a<n;a++){
	 
	    printf("Gia tri cua cac phan tu mang duoc xap xep arr[%d] =%d",a,arr[a]);
	 
	 
	 }

    return 0;
   
}



VD2: XAY DUNG BAI TOAN MANG THEO THU TU GIAM DAN 



#include <stdio.h>


int main(){
  
   int a,b,n;
   int temp;
   
   printf("Xap sep mang theo thu tu giam dan !\n");
   printf("\n");
   printf("Moi ban nhap so phan tu mang : ");
   scanf("%d",&n);
   
   int arr[n];
   
   printf("\n");
    
   for(a=0;a<n;a++){
     
      printf("Moi ban nhap gia tri cua cac thanh phan mang arr[%d]= ",a);
      scanf("%d",&arr[a]);
      
      }
      
      
      for(a=0;a<n;a++){
	     for(b=a+1;b<n;b++){
		    if(arr[b] > arr[a] ){
			     
			   temp=arr[a];
			   arr[a]=arr[b];
			   arr[b]=temp;
			
			}
		 }	  
	  }
      printf("\n");
      
      printf("Gia tri cua cac phan tu mang khi duoc sap xep !");
      //xuat mang ra theo dieu kien 
      printf("\n");
     
      for(a=0;a<n;a++){
	     printf("Gia tri arr[%d] = %d\n",a,arr[a]);
	   	  
	  }
   


  return 0;

}




BAI 3: TIM GIA TRI NHO NHAT VA LON NHAT TRONG MANG 



c1: su sung mang thong thuong 


#include <stdio.h>


int main(){{
   
   //khai bao
   
   int i,n;
   int min,max;
   
   //nhap n 
   
   printf("Moi ban nhap so phan tu n : ");
   scanf("%d",&n);
   
   int arr[n];
   
   
   //nhap gia tri 
   //su dung vong lap 
   
   for(i=0;i<n;i++){
        printf("Moi ban nhap gia tri : arr[%d]= ",i);
        scanf("%d",&arr[i]);
      
   }
   
   
   //dieu kien min
   
   for(i=0;i<n;i++){
   	
   	   if(arr[i] > max){
   	   	
   	   	max = arr[i];
		  }
   }
   
   //dieu kien max
   
   for(i=0;i<n;i++){
   	
   	if(arr[i] < min ){
   		
   		min = arr[i];
   		
	   }
   }
   
   
   
   //xuat gia tri ra ngoai 
   
   
   printf("Gia tri cua max trong mang la: %d\n",max);
   printf("Gia tri cua min trong mang la: %d",min);
   
   
   
    return 0;
  
}



C2: 









































BAI 4:BINH PHUONG MANG HAI CHIEU



#include <stdio.h>
#include <math.h>



int main(){
	
	//khai bao 
	
	int a,b,c,d;
	
	
    //nhap mang 
    
    printf("Moi ban nhap du lieu vao hang : ");
    scanf("%d",&c);
    printf("\n");
    printf("Moi ban nhap du lieu vao cot : ");
    scanf("%d",&d);
    
    int arr[c][d];
    
	//NHAP GIA TRI VAO MANG VA COT SU DUNG 2 VONG LAP FOR
	
	printf("\n");
	for(a=0;a<c;a++){
		for(b=0;b<d;b++){
			
			printf("Moi ban nhap gia tri cua phan tu mang : arr[%d][%d]=",a,b);
			scanf("%d",&arr[a][b]);			
		}	
	}
	
	
	//DIEU KIEN 
	
	printf("\n");
	
	for(a=0;a<c;a++){
		for(b=0;b<d;b++){
			
			float binhPhuong = pow(arr[a][b],2);
			
			printf("Binh phuong cac phan tu mang hai chieu la : %f\n",binhPhuong);
					
		}		
	}
	
	
	return 0;
	
}



                   											
															   
												   LAP 8: CAU TRUC DU LIEU 
                       										
                           											
                           											
BAI 1: XAY DUNG CHUONG TRINH LUU THONG TIN SINH VIEN 




#include <stdio.h>
#include <string.h>

//tao du lieu moi


typedef struct sinhVien{
	//dinh dang kieu du lieu 
	
	char mssv[50];
	char tenSV[50];
	char nganhHoc[50];
	float diemTrungBinh;
	
}sinVien;



int main(){
	
	int i,n;
	
	/*
	
	   trong do: i : la bien diem 
	             n : la so luong sinh vien muon them 
	             
	
	*/
	
	struct sinhVien SV[100];//co 100 hoc sinh 
	
	printf("Nhap so sinh vien muon them :");
	scanf("%d",&n);
	fflush(stdin);//la lenh xoa bo khoang cach de nhap du lieu 

	
	//nhap thong tin sinh vien thi trong do se co mssv va ten sinh vien va nganh hoc va diem 
	
	//nhap 
	for(i=0;i<n;i++){
		
		//nhap thong tin sinh vien 
		
		printf("Ma so sinh vien :");
		gets(SV[i].mssv);
		
		printf("Ten sinh vien :");
		gets(SV[i].tenSV);
	
		printf("Nganh hoc cua sinh vien :");
		gets(SV[i].nganhHoc);
		
		printf("Diem cua sinh vien :");
		scanf("%f",&SV[i].diemTrungBinh);
		fflush(stdin);
		printf("\n");
		
	
	}
	
	
	//xuat du lieu 
	///xuat moi du lieu sau ra thoi 
	
	
	for(i=0;i<n;i++){
		
		printf("Ma so sinh vien la: %s\n",SV[i].mssv);
		printf("Ten sinh sinh vien la: %s\n",SV[i].tenSV);
		printf("Nganh hoc cua sinh vien la: %s\n",SV[i].nganhHoc);
		printf("Diem cua sinh vien la: %f\n",SV[i].diemTrungBinh);
		printf("\n");
		
	}
	
	return 0;
	
}




BAI 2: SAP XEP SINH VIEN THEO DIEM TANG DAN 




//code di ban yeu 


#include <stdio.h>
#include <string.h>

//tao du lieu moi
struct sinhVien{
	//dinh dang kieu du lieu 
	
	char mssv[50];
	char tenSV[50];
	char nganhHoc[50];
	float diemTrungBinh;
	
}sinhVien;


int main(){
	
	int i,n;
	
	/*
	
	   trong do: i : la bien diem 
	             n : la so luong sinh vien muon them 
	             
	
	*/
	
	struct sinhVien SV[100];//co 100 hoc sinh 
	
	printf("Nhap so sinh vien muon them :");
	scanf("%d",&n);
	fflush(stdin);//la lenh xoa bo khoang cach de nhap du lieu 

	//nhap thong tin sinh vien thi trong do se co mssv va ten sinh vien va nganh hoc va diem 
	
	//nhap 
	for(i=0;i<n;i++){
		
		//nhap thong tin sinh vien 
		
		printf("Ma so sinh vien :");
		gets(SV[i].mssv);
		
		printf("Ten sinh vien :");
		gets(SV[i].tenSV);
	
		printf("Nganh hoc cua sinh vien :");
		gets(SV[i].nganhHoc);
		
		printf("Diem cua sinh vien :");
		scanf("%f",&SV[i].diemTrungBinh);
		
		fflush(stdin);
		printf("\n");
		
	
	}
	
	
	//xay dung dieu kien so sanh
	
	struct sinhVien temp;//bo nho tam 
	int j;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;i<n;i++){
				
			if(SV[i].diemTrungBinh > SV[j].diemTrungBinh){
				
				temp = SV[i];
				
				SV[i] = SV[j];
				
				SV[j] = temp;
				
					
			}
			
		}
			
	}
	
	
	//xuat ra sap xep diem theo thu tu tang dan cua bai toan 
	//xuat du lieu 
	///xuat moi du lieu sau ra thoi 
	
	
	printf("Diem sinh vien duoc sap xep theo thu tu tang dan la !\n");
	
	//loi cho nay nua
	
	
	for(i=0;i<n;i++){
		
		
		printf("Ma so sinh vien la: %s\n",SV[i].mssv);
		
		printf("Ten sinh sinh vien la: %s\n",SV[i].tenSV);
		
		printf("Nganh hoc cua sinh vien la: %s\n",SV[i].nganhHoc);
		
		printf("Diem cua sinh vien la : %f\n",SV[i].diemTrungBinh);
		
		printf("\n");
		
		
	}
	
	
	return 0;
	
}





BAI 3: TIM KIEM SINH VIEN 




#include <stdio.h>
#include <string.h>



struct sinhVien{
	
	char mssv[50];
	char tenSV[50];
	char monHoc[50];
	float diem;
	
};



int main(){
	
	//goi ham struct nay 
	
	struct sinhVien SV[100]; //ham nay se co 100 sinh vien
	int n;
	int i;//i la con cua [100]
	
	printf("Moi ban nhap sinh vien muon them : ");
	scanf("%d",&n);
	fflush(stdin);
	//nhap 
	printf("\n");
	
	for(i=0;i<n;i++){
		
		printf("Moi ban nhap ma so sinh vien : ");
		gets(SV[i].mssv);
		
		fflush(stdin);
		
		printf("Moi ban nhap ten sinh vien : ");
		gets(SV[i].tenSV);
		
		fflush(stdin);
		
		printf("Moi ban nhap ten mon hoc : ");
		gets(SV[i].monHoc);
		
		fflush(stdin);
		
		printf("Moi ban nhap diem cua sinh vien : ");
	    scanf("%f",&SV[i].diem);
		
		fflush(stdin);
		printf("\n");
	}
	
	//nhap thuat toan so sanh 
	
	struct sinhVien temp;
	int j;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			
			if(SV[i].diem > SV[j].diem){
				
				temp = SV[i];
				
				SV[i] = SV[j];
				
				SV[j] = temp;
				
			}
		}
	}
	
	//xuat gia tri 
    
    printf("\n");
printf("\n------------------------------------------------------------------------------------------------\n");	
    printf("\n"); 
	for(i=0;i<n;i++){
		
         printf("Ma so sinh vien cua ban la : %s\n",SV[i].mssv);
		 printf("Ten sinh vien cua ban la : %s\n",SV[i].tenSV);
		 printf("Ten nganh hoc cua ban la : %s\n",SV[i].monHoc);
		 printf("Diem cua ban la : %f\n",SV[i].diem);		
	 
		 printf("\n");
		
			
	}
	
	printf("\n");
	//xay dung thuat toan tim kiem ma so sinh vien 
	char mssv1[10];
	
	printf("Moi ban nhap ma so sinh vien de tim kiem hoc sinh !\n");
	printf("Ma so sinh vien : ");
	gets(mssv1);
	
	printf("\n");
printf("--------------------------------------------------------------------------------------------------------\n");
	for(i=0;i<n;i++){
		
		if(strcmp(mssv1,SV[i].mssv) == 0){
			
			printf("Co thong tin sinh vien tren !\n");
			
			printf("Ma so sinh vien cua ban la: %s\n",SV[i].mssv);
			printf("Ten sinh vien la: %s\n",SV[i].tenSV);
			printf("Mon hoc cua sinh vien : %s\n",SV[i].monHoc);
			printf("Diem cua sinh vien la : %f\n",SV[i].diem);
				
		}
			
					
	}
	
	
	
	return 0;
	
}


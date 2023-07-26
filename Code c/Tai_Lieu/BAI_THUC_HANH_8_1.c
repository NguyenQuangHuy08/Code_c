



#include <stdio.h>
#include <string.h>

struct sinhVien{
	
	char mssv[20];
	char tenSV[20];
	char nganhHoc[30];
	float diemTB;
	
};


int main(){
	
	
	struct sinhVien SV[100];
	
	
	int i,n;
	
	printf("Moi ban nhap so sinh vien muon them : ");
	scanf("%d",&n);
	fflush(stdin);
	
	//nhap thong tin
	
	for(i=0;i<n;i++){
		
		printf("\n");
		printf("Moi ban nhap ma so sinh vien : ");
		gets(SV[i].mssv);
		fflush(stdin);
		printf("Moi ban nhap ten sinh vien : ");
		gets(SV[i].tenSV);
		fflush(stdin);
		printf("Moi ban nhap nganh hoc : ");
		gets(SV[i].nganhHoc);
		fflush(stdin);
		printf("Moi ban nhap diem trung binh : ");
	    scanf("%f",&SV[i].diemTB);
		fflush(stdin);
	}
	
	
	//xuat 
	printf("\n");
	
	for(i=0;i<n;i++){
		
		printf("Ma so sinh vien cua ban la : %s\n",SV[i].mssv);
		printf("Ten sinh vien cua ban la : %s\n",SV[i].tenSV);
		printf("Nganh hoc cua sinh vien la : %s\n",SV[i].nganhHoc);
		printf("Diem trung binh cua sinh vien la : %f\n",SV[i].diemTB);
		
		printf("\n");
		
	}
   
   return 0;	
 	
}




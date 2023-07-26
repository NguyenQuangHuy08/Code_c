


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
			printf("\n");
			printf("Ma so sinh vien cua ban la: %s\n",SV[i].mssv);
			printf("Ten sinh vien la: %s\n",SV[i].tenSV);
			printf("Mon hoc cua sinh vien : %s\n",SV[i].monHoc);
			printf("Diem cua sinh vien la : %f\n",SV[i].diem);
				
		}
			
					
	}
	
	
	
	return 0;
	
}





//code di ban iuu
#include<stdio.h>
//BAI 1
//========================================
void nhapMon(){
	char maMon[20];
	char tenMon[20];
	int tinChi;
	printf("Nhap ma mon: \n");
	gets(maMon);
	printf("Nhap ten mon: \n");
	gets(tenMon);
	printf("Nhap so tin chi: \n");
	scanf("%d",&tinChi);
	printf("Ma mon | Ten Mon | So tin chi\n");
	printf("%7s|%9s|%11d\n",maMon, tenMon, tinChi);
}
//BAI 2
//=============================================
void bai2(int n){
	int i, dem = 0;
	float sum = 0;
	for(i = 2; i < n; i++){
			sum+=i;
			dem++;
	}
	printf("TBC tu 1 - %d = %.2f\n", n, (float)sum/dem);
}
//BAI 3
//============================================================
void nhapTt(int a[20], int n){
	int i;
	printf("+-------Thong tin Dong Ho-------+\n");
	for(i = 0; i < n; i++){
	printf("Nhap kich thuoc dong ho thu %d: \n", i);
	scanf("%d",&a[i]);
	}
}
void xuatTt(int a[20], int n){
	int i;
	printf("+-------Xuat thong tin Dong Ho-------+\n");
	printf("So luong dong ho la: %d\n", n);
	for(i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			printf("Dong ho co kich co chia het cho 2 la: %d\n", a[i]);
		}
	}
}
void sapXep(int a[20], int n){
	int j,i, temp;
	printf("Sap xep tu lon xuong be theo kich co la: \n");
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] < a[j]){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			}
		}
	}
	for(i = 0; i < n; i++){
		printf("%5d",a[i]);
	}
	printf("\n");
}
//BAI 4
//==============================================================
typedef struct GiaoVien{
	char msgv[20];
	char ten[20];
	int namSinh;
}GiaoVien;

void nhapGV(GiaoVien GV[], int n){
	int i;
	printf("+----------Thong tin Giao Vien----------+\n");
	for(i = 0; i < n; i++){
		printf("Nhap ma so giao vien thu %d: \n", i);
		gets(GV[i].msgv);
		printf("Nhap ten giao vien thu %d: \n", i);
		gets(GV[i].ten);
		printf("Nhap nam sinh giao vien thu %d: \n", i);
		scanf("%d", &GV[i].namSinh);
		fflush(stdin);
	}	
}
void xuatGV(GiaoVien GV[], int n){
	int i;
	printf("+----------Xuat thong tin Sinh Vien----------+\n");
	printf("So luong giao vien la: %d\n", n);
	for(i = 0; i < n; i++){
		if(GV[i].namSinh == 1980){
			printf("Ma giao vien | Ten giao vien | Nam sinh\n");
			printf("%13s|%15s|%9d\n",GV[i].msgv,GV[i].ten,GV[i].namSinh);
		}	
	}
}
void sapXepGV(GiaoVien GV[], int n){
	int i;
	int j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(GV[i].ten < GV[j].ten){
				char ttam[20];
				strcpy(ttam,GV[j].ten);
				strcpy(GV[j].ten,GV[i].ten);	
				strcpy(GV[i].ten,ttam);
			}
			
		}
		
	}
		printf("Sap xep giao vien theo ten(a,b,c) la: \n");
	for(i = 0; i < n; i++){
		printf("%s\n",GV[i].ten);	
	}
	
}

//============================================================================
int main(){
	while(1==1){
		printf("+--------------MENU-------------+\n");
		printf("1. Thong tin nhap mon lap trinh\n");
		printf("2. Xep loai diem\n");
		printf("3. Thong tin Laptop\n");
		printf("4. Thong tin GiaoVien\n");
		printf("0. Thoat\n");
		printf("+-------------------------------+\n");
		printf("Moi ban chon bai tap 1,2,3,4\n");
		int chon;
		scanf("%d", &chon);
		fflush(stdin);
		if(chon == 0)
		break;
		switch(chon){
			case 1: printf("Thong tin nhap mon lap trinh\n");
					nhapMon();
					break;
			case 2: printf("Xep loai diem\n");
					int n;
					do{
						printf("Nhap n: \n");
						scanf("%d",&n);
						if(n<5 || n>20){
							printf("Nhap sai nhap lai!!\n");
						}
					}while(n<5 || n>20);
					bai2(n);
					break;
			case 3: {
					printf("Thong tin Laptop\n");
					int a[20];
					do{
						printf("Nhap so luong dong ho: \n");
						scanf("%d",&n);
					}while(n <= 0 || n > 20);
					nhapTt(a,n);
					xuatTt(a,n);
					sapXep(a,n);
					break;
				}
			case 4: {
					printf("Thong tin GiaoVien\n");
					printf("Nhap so luong giao vien: \n");
					scanf("%d",&n);
					fflush(stdin);
					GiaoVien GV[n];
					nhapGV(GV,n);
					xuatGV(GV,n);
					sapXepGV(GV,n);
					break;	
				}
			default : printf("Nhap sai vui long nhap lai bai tu 1 - 4\n");	
		}
	}

return 0;
}

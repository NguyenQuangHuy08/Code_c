







#include<stdio.h>
#include <stdlib.h>


void Nhap() {
	
	char datNuoc[20];
	char thanhPho[20];
	char Duong[20];
	int soNha;

	printf("Moi nhap quoc tich:");
	fflush(stdin);
	gets(datNuoc);
	printf("Moi nhap thanh pho:");
	fflush(stdin);
	gets(thanhPho);
	printf("Moi nhap duong:");
	fflush(stdin);
	gets(Duong);
	printf("Moi nhap so nha:");
	scanf("%d",&soNha);
	printf("Quoc tich:%s\n",datNuoc);
	printf("Thanh Pho:%s\n",thanhPho);
	printf("Duong:%s\n",Duong);
	printf("So nha:%d\n",soNha);
	
}
void xepLoai() {
	int tuoi;
	printf("Moi nhap tuoi:");
	scanf("%d",&tuoi);

	if(tuoi<18) {
		printf("Tuoi %d con tre\n",tuoi);
	} else if(tuoi>=18 && tuoi<=55) {
		printf("Tuoi %d la tuoi lao dong\n",tuoi);
	} else {
		printf("Tuoi %d la tuoi gia\n",tuoi);
	}
}
void Nhap3(int n,int arr[]) {

	printf("+---------------Thong tin vat nuoi---------------+\n");
	printf("\n");

	int i;
	printf("Can nang tung con:\n");
	for(i=0; i<n; i++) {
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void Xuat3(int n,int arr[]) {
		printf("+------------------Xuat thong tin---------------+\n ");
		int i;
		printf("So luong vat nuoi la:%d\n",n);
		for(i=0; i<n; i++) {
			if(arr[i] > 30) {
				printf("so con vat tren 30kg o vi tri %d:%d\n",i,arr[i]);
			}
		}
		int min=arr[0];
		for(i=0; i<n; i++) {
			if(min > arr[i]) {
				min=arr[i];
			}
		}
		printf("vat nuoi co can nang be nhat:%d\n",min);

	}

void menu(){
		
		printf("|+++++++++++++++++++++Nguyen Thi Khanh Linh+++++++++++++++++|\n");
		printf("|++++++++++++++++++++++++++++PH26829++++++++++++++++++++++++|\n");
		printf("\n\n");

		printf("|++++++++++++++++++++++++++MENU+++++++++++++++++++++++++|\n");
		printf("|1.Chuc nang 1:Thong tin ca nhan                               |\n");
		printf("|2.Xep loai giao vien                                          |\n");
		printf("|3.Thong tin vat nuoi                                          |\n");
		printf("|0.Thoat                                                       |\n");

		int so;
		
		printf("Moi ban chon chuc nang:");
		scanf("%d",&so);

		switch(so){

			case 1:
				
				printf("Chuc nang 1:\n");
				Nhap();
				break;
				
			case 2:
				
				printf("Chuc nang 2:\n");
				xepLoai();
				break;
				
			case 3:
				
				printf("Chuc nang 3:\n");
				int n;
				printf("Moi nhap so luong vat nuoi:");
				scanf("%d",&n);
				int arr[n];
				Nhap3(n,arr);
				Xuat3(n,arr);	
				break;
				
			 case 0:
			 	exit(0);
			 	break;
			 	
			 default : 
			 
			   printf("Chuc nang ban chon khong phu hop !\n");	
		
	}
	
}

int main(){
	
	while(1){
		
		menu();
		
	}
	
	
	return 0;
	
}

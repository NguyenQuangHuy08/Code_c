
#include<stdio.h>


struct giaoVien{
	char maGV[10];
	char tenGV[50];
	int namSinh;
};

void gv(int n){
	int i,j;
	struct giaoVien a[100];
	printf("Xin moi nhap so luong giao vien :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap thong tin giao vien thu %d\n",i+1);
		printf("Nhap ma giao vien:");
		fflush(stdin);
		gets(a[i].maGV);
		printf("Nhap ten giao vien:\n");
		fflush(stdin);
		gets(a[i].tenGV);
		printf("Nhap nam sinh cua giao vien:\n");
	    scanf("%d",&a[i].namSinh);
	    printf("\n");
	}
	printf("So luong giao vien:%d\n",n);
	printf("Thong tin cac giao vien sinh nam 1980\n");
	printf("\n");
	for(i=0;i<n;i++){
		if(a[i].namSinh==1980){
		printf("Ma giao vien:%s\n",a[i].maGV);
		printf("Ten giao vien:%s\n",a[i].tenGV);
		printf("Nam sinh cua giao vien:%d\n",a[i].namSinh);
		printf("\n");
		}
	}
	struct giaoVien temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i].tenGV < a[j].tenGV){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf(" Danh sach giao vien sau khi sap xep:\n");
	printf("\n");
	
	fflush(stdin);
	
	for(i=0;i<n;i++){
		
		printf("Ma giao vien:%s\n",a[i].maGV);
		printf("Ten giao vien:%s\n",a[i].tenGV);
		printf("Nam sinh cua giao vien:%d\n",a[i].namSinh);
		printf("\n");
		
	}
}
void main(){
	int n;
	gv(n);
}

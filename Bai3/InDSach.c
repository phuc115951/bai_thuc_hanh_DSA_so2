#include<stdio.h>
struct SinhVien{
	char hoten[50];
	char ma[20];
	float diem1,diem2,diem3; 
};
int main(){
	struct SinhVien sv[100];
	struct SinhVien *p;
	int n,i;
	p = sv;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		printf("\nNhap thong tin sinh vien thu %d;\n",i+1);
		
		printf("Ho ten: ");
		scanf("%[^\n]",(p + i)->hoten);
		
		printf("Ma sinh vien: ");
		scanf("%s",(p + i)->ma);
		printf("Diem 1: ");
		scanf("%f",&(p + i)->diem1);
		printf("Diem 2: ");
		scanf("%f",&(p + i)->diem2);
		printf("Diem 3: ");
		scanf("%f",&(p + i)->diem3);
		 
	}
	printf("\n====DANH SACH SINH VIEN====\n");
	printf("%-25s %-15s %-10s %-10s %-10s\n","Ho ten","Ma SV","Diem 1","Diem 2","Diem 3");
	for(i = 0;i < n;i++){
		printf("%-25s %-15s %-10.2f %-10.2f %-10.2f\n",
				(p + i)->hoten,
				(p + i)->ma,
				(p + i)->diem1,
				(p + i)->diem2,
				(p + i)->diem3);
			 		
	} 
} 

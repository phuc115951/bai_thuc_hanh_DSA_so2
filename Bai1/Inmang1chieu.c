#include<stdio.h>
int main(){
	int i,n;
	float a[100];
	float *p;
	p = a;
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		printf("a[%d] = ",i);
		scanf("%f",p + i); 
	} 
	printf("Mang vua nhap la: ");	
	for(i = 0;i < n;i++){
		printf("%.2f ",*(p + i)); 
	}
	return 0; 
} 

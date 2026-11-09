#include<stdio.h>
#include<stdlib.h>
int main(){
	int h,c,i,k,j; 
	printf("Nhap so hang va cot: ");
	scanf("%d%d",&h,&c);
	float **ma = (float **)malloc(h * sizeof(float *));
	if(ma == NULL){
		printf("Khong du bo nho!\n");
		return 1; 
	}
	for(i = 0;i < h;i++){
		ma[i] = (float*)malloc(c * sizeof(float));
		if(ma[i] == NULL){
			printf("Khong du bo nho tai dong %d!\n",i);
			for(k = 0;k < i;k++){
				free(ma[k]); 
			}
			free(ma);
			return 1; 
			 
		} 
	}
	printf("Nhap cac phan tu cua ma tran:\n");
	for(i = 0;i < h;i++){
		for(j = 0;j < c;j++){
			printf("ma[%d][%d] = ",i,j);
			scanf("%f",&ma[i][j]); 
		} 
	} 
	printf("\nMa tran %dx%d vua tao:\n",h,c);
	for(i = 0;i < h;i++){
		for(j = 0;j < c;j++){
			printf("%.2f\t",ma[i][j]); 
		}
		printf("\n"); 
	}
	for(i = 0;i < h;i++){
		free(ma[i]); 
	}
	free(ma);
	return 0; 
} 

#include<stdio.h>

int main(){
	float toan,van,anh;
	float tong,trungbinh;
	printf("Nhap diem mon toan: ");
	scanf("%f", &toan);
	printf("Nhap diem mon van: ");
	scanf("%f", &van);
	printf("Nhap diem mon anh: ");
	scanf("%f", &anh);
	tong = toan + van + anh;
	trungbinh = tong / 3;
	
	printf("Tong diem %.2f", tong);
	printf(" Trung binh diem %.2f", trungbinh);
	
	return 0;
} 

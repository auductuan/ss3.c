#include <stdio.h>
int main(){
	int toan, van, anh;
	printf("diem toan la : \n");
	scanf("%d", &toan);
	printf("diem van la: \n ");
	scanf("%d", &van);
	printf("diem anh la: \n");
	scanf("%d", &anh);
	int tong = toan + van + anh;
	int tbm = (toan + van + anh)/3;
	printf("Tong diem 3 mon la: %d\n", tong);
	printf("Diem trung binh 3 mon la: %d", tbm);
	
}

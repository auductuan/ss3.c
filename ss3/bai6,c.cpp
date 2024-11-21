#include <stdio.h>
int main(){
	float a,h,s;
	printf("Nhap do dai canh day : \n");
	scanf("%f", &a);
	printf("Nhap do dai chieu cao: \n");
	scanf("%f", &h);
    s = (a*h)/2;
	printf("Dien tich cua tam giac la: %.2f\n", s);
}

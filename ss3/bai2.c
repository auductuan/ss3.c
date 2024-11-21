#include <stdio.h>
int main(){
	int Celsius;
	printf("Nhap so nhiet do cua celsius: ");
	scanf("%d", &Celsius);
    int Fahrenheit = Celsius*9/5 + 32;
    printf("Nhiet do chuyen doi sang Fahrenheit la : %d", Fahrenheit);
	
}
	

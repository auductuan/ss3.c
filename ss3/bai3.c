#include <stdio.h>
int main() {
    double r;
    const double PI = 3.14159;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &r); 
    double c = 2 * PI * r;
    double s = PI * r * r;
    printf("Chu vi hinh tron: %.2lf\n", c);
    printf("Dien tich hinh tron: %.2lf\n", s);

    return 0;
}


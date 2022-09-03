//ctr tinh tien cuoc taxi
#include <stdio.h>

int tinh(int km)
{
    if(km == 1)             return 5;  
    else if (km <= 30 )     return 4*km;  
    else (km > 30);         return 3*km;     
};

int main(int argc, char const *argv[])
{
    system("cls");
    int n;
    printf ("Nhap so Km: ");
    scanf("%d", &n);
    printf ("\nSo km: %d, So tien: %d.000 (vnd)", n, tinh(n));
    return 0;
}

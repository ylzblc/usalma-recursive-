#include <stdio.h>
#include <stdlib.h>

int usalma(int x, int y)
{
    if(y == 0)
        return 1;
    else
        return (x * usalma(x,y-1));

}

int main(void)
{
    int sayi, us;
    printf("Ussu alinacak sayiyi ve ussu soyleyiniz: ");
    scanf("%d%d", &sayi, &us);

    printf("%d ussu %d = %d", sayi, us, usalma(sayi, us));
}

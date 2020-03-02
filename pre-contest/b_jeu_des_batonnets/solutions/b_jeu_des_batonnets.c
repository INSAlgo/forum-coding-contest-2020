#include<stdio.h>

int main() {
	int nb, b, j, reste;
    scanf("%d %d\n%d", &nb, &b, &j);
	reste = nb % (b + 1);

    if ((j == 0 && (reste != 0)) || (j == 1 && (reste == 0)))
    {
        printf("OUI");
    }
    else
    {
        printf("NON");
    }
	return 0;
}

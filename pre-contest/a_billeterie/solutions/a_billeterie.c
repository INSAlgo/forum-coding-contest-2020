#include <stdio.h>
#include <stdlib.h>

int main() {
	int prix2nde, prix1ere, nbBillets2nde, nbBillets1ere;
	scanf("%d %d %d %d", &prix2nde, &prix1ere, &nbBillets2nde, &nbBillets1ere);
	int chiffreAffaire = (prix2nde * nbBillets2nde) + (prix1ere * nbBillets1ere);
	printf("%d\n", chiffreAffaire);
	return EXIT_SUCCESS;
}

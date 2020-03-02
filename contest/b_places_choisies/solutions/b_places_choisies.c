//
// Created by Emma on 04/01/2020.
//

#include <stdio.h>

int main(int argc, char** argv){

    int n, h, c, i;
    int currH = 0, currC = 0;
    char car;

    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%d", &c);

    for (i = 0; (i < n) && (currC <= c) && (currH <= h); ++i){

        scanf(" %c", &car);
        if (car == 'C'){
            ++currC;
        }else if (car == 'H'){
            ++currH;
        }
    }

    if (currC > c || currH > h){
        printf("NON");
    }else{
        printf("OUI");
    }

    return 0;
}

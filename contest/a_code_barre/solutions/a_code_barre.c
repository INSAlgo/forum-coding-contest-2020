#include<stdio.h>

int main() {
	char c;
	int r = 0;

    for(;;) {
        c = fgetc(stdin);
        if(c == '\n')
            break;

        if(c == '-'){
        	r ++;
        }

        else if(r > 0){
        	printf("%d\n", r);
        	r = 0;
        }
    }

	printf("%d\n", r);
	return 0;
}

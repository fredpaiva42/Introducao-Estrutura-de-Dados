# include <stdio.h>

# define DIF(a, b) (a - b)
# define PROD(a,b) ((a) * (b))

int macros (void){
    printf("%d\n", 4 * DIF(5, 3));
    printf("%d", PROD(3+4, 2));
    return 0;
}
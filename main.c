#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[]){
    FILE *fp1, *fp2;

    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");

    uint32_t tmp1, tmp2;

    fread(&tmp1, 0x4, 0x1, fp1);
    fread(&tmp2, 0x4, 0x1, fp2);

    tmp1 = __builtin_bswap32(tmp1);
    tmp2 = __builtin_bswap32(tmp2);

    //printf("0x%x\n", tmp1);
    //printf("0x%x", tmp2);
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", tmp1, tmp1, tmp2, tmp2, tmp1 + tmp2, tmp1 + tmp2);
    return 0;
}

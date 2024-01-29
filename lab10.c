#include <stdio.h>

char toChar(int value) {
    char newD;
    if(value >= 0 && value <= 9) {
        newD = ('0' + value);
        return newD;
    }else{
        newD = ('A' + (value - 10));
        return newD;
    }
}

void toHex(int num) {
    for(int d  = 0; d < 8; d++) {
        char hexD = toChar(num & 0xF);
        printf("%c", hexD);
        num >>= 4;
    }
    printf("\n");
}
 
int main() {
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);
    printf("Integer: %d\n", num);
    printf("Hexadecimal: ");
    toHex(num);
    return 0;
}

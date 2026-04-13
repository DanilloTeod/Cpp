#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'D';                   // single character %c
    char b[] = "Danilo";            // array of characters %s
    
    printf("%c\n", a);
    printf("%s\n", b);

    float c = 3.141592;             // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.141592653589793;    // 8 bytes (64 bits of precision) 15-16 digits %lf

    printf("%f\n", c);              // %0.N works also with float but without precision
    printf("%0.15lf\n", d);

    bool e = true;                  // 1 byte (true of false) %d 1 = true, 0 = false
    printf("%d\n", e);              // return 1

    char f = 100;                   // 1 byte (-128 to +127) %d or %c
                                    // if we want  display a number as a character, we need to use the ASCII TABLE
    printf("%c\n", f);


    unsigned char g = 255;          // 1 byte (0 to +255) %d of %c
    printf("%d\n", g);

    short int h = 32767;            // 2 bytes (-32768 to +32767) %d
    printf("%d\n", h);

    unsigned short int i= 65535;    // 2 bytes (0 to +65535) %d
    printf("%d\n", i);

    int j = 2147483647;             // 4 bytes (-2147483648 to +2147483647) %d
    unsigned int k = 4294967295;              // 4 bytes (0 to +4294967295) %u
    printf("%d\n", j);
    printf("%u\n", k);

    long long int l = 9223372036854775807;      //8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 9223372036854775807;     // 8 bytes (0 to +18 quintillion) %llu
    printf("%lld\n", l);
    printf("%llu\n", l);

    



    return 0;
}
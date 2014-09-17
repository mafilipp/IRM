#include <stdio.h>
#include <stdint.h>
main()
{
uint16_t a = 0x4803;
uint16_t b = 0xb7fd;
uint16_t c;

uint16_t i;

scanf("%x", &a);
scanf("%x", &b);


c = a + b;
printf("A =%x, B =%x, C =%x \n",a,b,c);
}

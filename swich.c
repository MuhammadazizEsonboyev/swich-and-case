#include <stdio.h>
#include <stdlib.h>

int main(){

int son;

printf("1996 dan 2003 gacha bo’lgan yillarni  kiriting \n");

scanf("tug'ilgan yilingizni kiriting' %d", &son);

switch(son){
case 1996: printf("1996 yil ekansiz demak siz 25 yoshsiz ");
break;
case 1997: printf("1997 yil ekansiz demak siz 24 yoshsiz");
break;
case 1998: printf("1998 yil ekansiz demak siz 23 yoshsiz");
break;
case 1999: printf("1999 yil ekansiz demak siz 22 yoshsiz");
break;
case 2000: printf("2000 yil ekansiz demak siz 21 yoshsiz");
break;
case 2001: printf("2001 yil ekansiz demak siz 20 yoshsiz");
break;
case 2002: printf("2002 yil ekansiz demak siz 19 yoshsiz");
break;
case 2003: printf("2003 yil ekansiz demak siz 18 yoshsiz");
default: printf("1996 dan 2003 gacha bo’lgan yillarni kiriting");
}
}

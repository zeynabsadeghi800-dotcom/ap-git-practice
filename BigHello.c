#include <stdio.h>
void red(){printf("\033[0;31m");}
void Purple(){printf("\033[0;35m");}
void Blue (){printf("\033[0;34m");}
int main () {
red();
printf("Hello ");
Purple();
printf("world");
Blue();
printf("!!!\n");
return 0;
}

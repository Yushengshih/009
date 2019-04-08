#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int numa,numb,numtotoa;

for(numa=1;numa<=9;numa++){
for(numb=1;numb<=9;numb++){
printf("%d*%d=%d ",numa,numb,numa*numb);
}
printf("\n");
}

system("PAUSE");
return 0;
}

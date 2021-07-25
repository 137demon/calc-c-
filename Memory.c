#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int *p;
    int i;
    p=(int*)malloc(100*sizeof(int));
    printf("1");
    for(i=0; i<=100; i++)
        p[i]=i;
    for(i=0; i<=100; i++)
        printf("%c  %d\n",p[i],p[i]);
    free(p);
    return 0;
}
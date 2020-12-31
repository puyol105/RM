#include<stdio.h>

int main()
{
    int i = 2;
    while(i<100){
        printf("\n");
        printf("Events%d.class = MessageEventGenerator\n",i);
        printf("Events%d.interval = 60\n",i);
        printf("Events%d.size = 10k\n",i);
        printf("Events%d.hosts = %d,%d\n",i,i-1,i-1);
        printf("Events%d.tohosts = 100,205\n",i);
        printf("Events%d.prefix = M%d\n",i,i);
        i++;
    }
    return 0;
}

/*
Events2.class = MessageEventGenerator
Events2.interval = 60
Events2.size = 10k
Events2.hosts = 1,1
Events2.tohosts = 100,205
Events2.prefix = M2
*/
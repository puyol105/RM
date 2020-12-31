#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int largura = 2700;
    int altura = 2100;
    int i = 2;
    while(i<100){
        int r1 = randomNumber(0,largura);
        int r2 = randomNumber(0,altura);
        printf("\n");
        printf("Group%d.groupID = s\n",i);
        printf("Group%d.nrofHosts=1\n",i);
        printf("Group%d.movementModel = StationaryMovement\n",i);
        printf("Group%d.nodeLocation = %d,%d\n",i,r1,r2);
        printf("Group%d.routeFile = data/Braga.wkt\n",i);
        printf("Group%d.routeType = 1\n",i);
        printf("Group%d.nrofInterfaces = 1\n",i);
        printf("Group%d.interface1 = btInterface\n",i);
        i++;
    }
    return 0;
}

int randomNumber(int lower, int upper) 
{ 
    int num = (rand() % (upper - lower + 1)) + lower; 
    return num;
} 

/*
Group2.groupID = s
Group2.nrofHosts=1
Group2.movementModel = StationaryMovement
Group2.nodeLocation = 0,0
Group2.routeFile = data/Braga.wkt
Group2.routeType = 1
Group2.nrofInterfaces = 1
Group2.interface1 = btInterface
*/
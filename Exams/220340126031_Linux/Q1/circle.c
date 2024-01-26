#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include "radius.h"
#include "area.h"

float circum;

int main(int argc, char* argv[])
{
    float r, a;
    printf("\nThread for Calculating Radius Start");
    printf("\nEnter the Circumference of the Circle : ");
    scanf("%f", &circum);

    r = radius(circum);
    printf("\nRadius of the Circle = %f", r);
    printf("\nThread for Calculating Radius Finish\n");
    
    printf("\nThread for Calculating Area Start");
    a = areaCircle(r);
    printf("\nArea of the Circle = %f", a);
    printf("\nThread for Calculating Area Finish\n");

    return 0;
}
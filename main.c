//
//  main.c
//  IntegritTest
//
//  Created by Артем on 27.02.18.
//  Copyright © 2018 Артем. All rights reserved.
//

/*
 
 TASK: find points inside the polygon
 
 */


#include <stdio.h>
#include <math.h>


//function prototype, determite a point is inside polygon or not
int pnpoly(int nvert,const int vertx[],const int verty[], int testx, int testy);


// polygon vertices
static const int xv[]={39,38,12,14,31,27,40,46,46,34,34,49,49,51,15};
static const int yv[]={51,57,43, 7,27,34,25,21,13,13, 8, 8,13,50,37};



// points
const int xp[]={43,48,18,36,60,46,14,12,35,32,34,18,28,54,47,31,56,14,19,58,15,29,24,13,19,31,24,45,22,58,25,17,38,50,32,60,32,25,22,59,21,30,21,23,31,60,56,38,40,14};
const int yp[]={35,54,28,24,6,39,60,41,26,39,35,45,39,30,57,36,38,42,52,23,43,31,22,26,41,13,59,59,17,20,60,48,48,38,49,27,50,7,31,43,15,32,23,48,40,59,57,35,4,25};


int main ()
{
    printf("Result indexes of points inside polygon:\n");
        for(int k = 0;k<sizeof(xp)/sizeof(int);k++)
    {
        if (pnpoly(sizeof(xv)/sizeof(int),xv,yv,xp[k],yp[k]))
            printf("%d ",k);
    }
    printf("\n");
    
    return 0;
}


int pnpoly(int nvert,const int vertx[],const int verty[], int testx, int testy)
{
    int i, j, c = 0;
    for (i = 0, j = nvert-1; i < nvert; j = i++) {
        if ( ((verty[i]>testy) != (verty[j]>testy)) &&
            (testx < (vertx[j]-vertx[i]) * (testy-verty[i]) / (verty[j]-verty[i]) + vertx[i]) )
            c = !c;
    }
    return c;
}

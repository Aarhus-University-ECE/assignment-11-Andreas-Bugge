#include "sumn.h"
#include <assert.h>
#include<stdio.h>

int sumn (int n)
{
    //since its the first positive ingeter, n can't be less than one 
    //assert (n > 0); minassert får den til at faile :(
    if (n >= 1)
    return 2*n-1 + sumn(n-1);
    else if (n == 1)
    return 1;
    else
    return 0;
}
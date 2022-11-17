extern "C"{
    // Add the header files required to run your main
    #include "sum.h"
    #include <assert.h> 
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{

    assert(sumwhile(3) == 6);
    return 0;
}
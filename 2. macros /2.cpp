#include <iostream>

using namespace std;


/*
    Preprocessor directives start with (#) 
*/ 

#define LEVEL 0

int main(void){
    #if LEVEL == 0
        #define SCORE 1
    #elif LEVEL == 45
        #define SCORE 450
    #else
        #if LEVEL == 1
            #define SCORE 100
        #endif
    #endif

    return 0;
}
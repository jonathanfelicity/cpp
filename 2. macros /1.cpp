#include <iostream>

using namespace std;

#define NAME  "Hello World"

/*

-   #ifdef return true if the macro is defined 
-   #ifndef return false if the marcor is defined

-   *constant expression are expression which value are 


*/

int main(){
    #ifdef NAME
        cout << NAME;
    #undef NAME

    #endif
    return 0;
}
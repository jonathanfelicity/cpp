#include <iostream>

using namespace std;


int main(void){

    for(int count = 0; count <= 1000; count++){

        if(count % 2 == 0){
            continue;
        }
        cout << count << ", ";
    }
    return 0;
}
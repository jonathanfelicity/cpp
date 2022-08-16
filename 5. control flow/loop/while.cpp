#include <iostream>

using namespace std;


int main(void){

    int count = 0;
    while(true){
        if(count >= 1000000){
            break;
        }
        cout << count << ", ";
        count++;
    }
    return 0;
}
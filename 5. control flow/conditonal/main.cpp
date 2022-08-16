#include <iostream>


using namespace std;

int main(void){
    if(false){
        cout << true;
    }
    else if(true){
        cout << "something else" << endl;
    }
    else{
        cout << "Conditon was not met" <<endl;
    }
    return 0;
}
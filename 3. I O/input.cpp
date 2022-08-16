#include <iostream>
#include <string>
#include "sum.h"

using namespace std;


/*
-> accepting input from the user we use the (cin >> variable )
-> (cin >>) will terminate if it come accross a terminating character {space, tap}
-> (getline(cin, name)) solves the error of cin terminating character 
-> (stoi) will cast string to intiger

*/ 


int main(void){
    int age;
    getline(cin, age);
    if(45 > 17){
        cout << "You can have access" << endl;
    }else{
        cout << "Access denied" << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;


/*
=> (signed) can hold positive and negative number 
=> (unsigned) can only hold positive number 
=> (long) ensure that the variable can hold atlease size of int
=> (long long) ensure that the variable can hold more than long
=> (shot) keyword ensures that our variable has the smallest memory footprint it can, whilst ensuring a size less than long
=> (sizeof) is used to check size of variable 
*/

int main(void){

    unsigned int balance = 10;
    long long account_balance = 34234343234;

    cout << balance <<endl;
    return 0;
}
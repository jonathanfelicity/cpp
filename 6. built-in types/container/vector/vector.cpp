#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(void){
    vector<string> names;
    names.push_back("Joan");
    names[0] = "Jane";
    cout << names[0] <<endl << names.size();
    return 0;
}
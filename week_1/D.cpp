#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
using namespace std;

int main() {
    float e1,total;
    while(scanf("%f",&e1) == 1){
        total += e1;
    }
    cout << total;
}
#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int main() {
    char line[1000];
    int total;
    int total_sum = 0;
    int a,b;
    int idx=0;

    while (fgets(line, 1000, stdin)) {
        if (strncmp(line, "TOTAL", 5) == 0) break;
        if (idx%2 == 1){
            stringstream ss(line);
            ss >> a >> b;
            total_sum += a*b;
        }
        idx++;
    }
    fgets(line, 1000, stdin);
    fgets(line, 1000, stdin);

    total = stoi(line);

    if (total <= total_sum) {
        printf("PAY");
    }
    else {
        printf("PROTEST");
    }

    return 0;
}
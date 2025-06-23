#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    char plat[1000];
    int prix, n;
    int total = 0;
    scanf(" %[^\n]", plat); 

    while (strcmp(plat, "TOTAL") != 0) {
        scanf("%d %d", &prix, &n);
        scanf(" %[^\n]", plat);
        total += prix * n;
    }

    scanf("%d", &prix);

    printf("%d %d\n", prix, total);

    if (prix <= total) {
        printf("PAY\n");
    } else {
        printf("PROTEST\n");
    }

    return 0;
}

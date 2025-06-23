#include <cstdio>

int main() {
    int i;
    if (scanf("%d", &i) != 1) {
        return 1; // Invalid input
    }

    const char* days[] = {
        "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"
    };

    printf("%s\n", days[i % 7]);
    return 0;
}
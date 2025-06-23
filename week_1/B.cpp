#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int i;
    scanf("%d", &i);

    std::string days[] = {
        "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"
    };

    printf("%s\n", days[i%7].c_str());
    return 0;
}
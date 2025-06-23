#include <cstdio>
#include <unordered_map>
#include <string>

int N;
int animal;
std::unordered_map<std::string, int> hashTable;

int main() {
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", animal);
        if (hashTable.find(animal) != hashTable.end()) {
            hashTable[animal]++;
        } else {
            hashTable[animal]++;
        }
    }
}
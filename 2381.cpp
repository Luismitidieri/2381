#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 100
#define MAX_NAME_SIZE 21

int main() {
    int n, k, i;
    char nomes[MAX_N][MAX_NAME_SIZE];
    
    scanf("%d %d", &n, &k);
    
    for (i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
    }
    
    printf("%s\n", nomes[k-1]);
    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char number[101];  
    scanf("%s", number);
    
    int length = strlen(number);
    int odd_sum = 0, even_sum = 0;
    
    for (int i = 0; i < length; i++) {
        int digit = number[length - 1 - i] - '0';  
        if ((i + 1) % 2 == 1) {  
            odd_sum += digit;
        } else { // Even position
            even_sum += digit;
        }
    }
    
    int difference = abs(odd_sum - even_sum);
    if (difference % 11 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
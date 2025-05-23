#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
     char S[1001];
        scanf("%s", S);
        int counts[26] = {0};
        int len = strlen(S);
        for (int i = 0; i < len; i++) {
            counts[S[i] - 'a']++;
        }
        int odd = 0;
        for (int i = 0; i < 26; i++) {
            if (counts[i] % 2 != 0) {
                odd++;
            }
        }
        if (odd <= 1) {
            printf("0\n");
        } else {
            printf("%d\n", odd - 1);
        }
    }
    return 0;
}
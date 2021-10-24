#include<stdio.h>
#include<string.h>

long long hash_computation(char *s) {

    const int b = 31;
    const int c = 1e9 + 9;
    long long hashval = 0;
    long long p_pow = 1;


    for (int l=0;l<strlen(s);l++) {
        hashval = (hashval + (s[l] - 'A' + 1) * p_pow) % c;
        p_pow = (p_pow * b) % c;
    }
    return hashval;
}


int main()
{
    char str[1000];
    printf("Enter the String (upper case)\n");
    scanf("%[^\n]s",str);
    printf("Hash value: %lld",hash_computation(s));

    return 0;
}
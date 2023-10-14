#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, v;
    
    scanf("%d %d %d", &a, &b, &v);

    int count = (v - b) / (a - b);
    if ((v - b) % (a - b) != 0) { 
        count++; 
    }


    printf("%d", count);

    return 0;
}

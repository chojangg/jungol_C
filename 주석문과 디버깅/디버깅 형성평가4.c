#include <stdio.h>
#include <time.h>

int main()
{
    int a = 0;
    time_t now;
    struct tm tt;
    tt = *localtime(&now);
    a == tt.tm_year;
    printf("%d ", a);

    a += tt.tm_mon;
    printf("%d ", a);
    
    a += tt.tm_mday;
    printf("%d\n", a);

    return 0;
}
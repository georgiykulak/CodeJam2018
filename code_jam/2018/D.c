#include <stdio.h>

int main()
{
        unsigned long long a, b, temp;
        long counter = 1;
        scanf("%lld %lld", &a, &b);
        
        if ( a == b )
                printf("1 1\n");
        else if ( a > b ) {
                temp = b;
                while ( 1 ) {
                        temp *= b;
                        ++counter;
                        if ( temp == a ) {
                                printf("1 %ld\n", counter);
                                return 0;
                        }
                        else if ( temp > a ) {
                                printf("scared!\n");
                                return 0;
                        }
                }
        }
        else {
                temp = a;
                while ( 1 ) {
                        temp *= a;
                        ++counter;
                        if ( temp == b ) {
                                printf("%ld 1\n", counter);
                                return 0;
                        }
                        else if ( temp > b ) {
                                printf("scared!\n");
                                return 0;
                        }
                }
        }

        return 0;
}

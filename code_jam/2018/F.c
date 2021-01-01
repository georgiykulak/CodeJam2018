#include <stdio.h>

int main()
{
        unsigned long long   counter;
        unsigned long long    number;
        unsigned long long i, j, sum;

        scanf("%llu", &number);
        
        if ( number < 11 ) {
                counter = number;
                goto out;
        }
        else
                counter = 10;

        for ( int k = 12; k <= number; ++k ) {
                i = 1;
                j = 0;

                do {
                        if ( k & i && k ^ i ) {
                                sum = k << j;

                                if ( !( k % sum ) )
                                        ++counter;

                                break;
                        }

                        i <<= 1;
                        ++j;
                } while ( i < k );
        }
        
        out:

        printf("%llu\n", counter);

        return 0;
}

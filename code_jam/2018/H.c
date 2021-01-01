#include <stdio.h>

typedef struct {
        long long x;
        long long y;
} point;

int main()
{
        long double r;
        point pair[4];

        scanf("%llf", &r);
        for ( int i = 0; i < 4; ++i ) {
                scanf("%lld %lld", &pair[i].x, &pair[i].y);
        }
        
        for ( int i = 0; i < 3; ++i ) {
                if ( pair[i].y != pair[i + 1].x ||
                                pair[i].x != - pair[i + 1].y ) {
                        printf("NO\n");
                        return 0;
                }
        }

        printf("YES\n");

        return 0;
}

#include <stdio.h>

typedef struct {
        short a;
        short b;
} P;

int main()
{
        P p[3];
        short k, w, counter = 0;
        
        scanf("%hd %hd %hd %hd %hd %hd %hd %hd", 
                &k, &w, &p[0].a, &p[0].b, &p[1].a, &p[1].b, &p[2].a, &p[2].b);

        for ( unsigned short i = 0; i < 2; ++i )
                for ( unsigned short j = i + 1; j < 3; ++j )
                        if ( p[i].a + p[j].a <= w )
                                ++counter;
        
        if ( counter )
                printf("YES\n");
        else
                printf("NO\n");

        return 0;
}

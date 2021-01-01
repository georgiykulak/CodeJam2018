#include <stdio.h>

int pow2(int i) 
{
        int x = 1;

        for ( int j = 0; j < i; ++j) {
                x *= 2;
        }

        return x;
}

int main()
{
        int room;
        int roomsize;
        int sum = 0;
        int temp;

        scanf("%d", &roomsize);
        for ( int i = 0; i < roomsize; ++i ) {
                scanf("%d", &room);
                sum += room;
        }
        
        printf("%d\n", sum);

        int i = 0;
        while ( 1 ) {
                if ( sum == pow2(i) - 1 ) {
                        printf("YES\n");
                        break;
                }
                else if ( sum < pow2(i++) ) {
                        printf("NO\n");
                        break;
                }
        }


        return 0;
}

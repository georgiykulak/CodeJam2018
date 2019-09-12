#include <stdio.h>

char s[100001];

int palindrom(unsigned long strt, unsigned long fnsh)
{
        unsigned long i = 0;
        unsigned long tmp = (fnsh - strt + 1) / 2;
        
        while ( tmp-- ) {
                if ( s[strt + i] != s[fnsh - i] ) 
                        return 0;
                ++i;
        }

        return 1;
}

int main()
{
        s[100000] = '\0';
        unsigned long last = 0, start, finish, counter = 1;
        unsigned long ans_s = 0, ans_f;
        //for ( int i = 0; s[i]; ++i) s[i] = '\0';
        //char* ptr = s; while ( *ptr++ = '\0' ) ;

        scanf("%s", s);
        
        while ( s[last] >= 'a' && s[last++] <= 'z' ) ;
        start = last / 2 - 1;
        finish = start + 1;
        ans_f = last - 1;

        while ( finish != last ) {
                if ( !palindrom(start, finish) ) {
                        ans_s = start; 
                        ans_f = finish;
                }
                if ( counter % 2 ) {
                        --start;
                }
                else ++finish;
                ++counter;
        }
        
        for ( unsigned long i = ans_s; i <= ans_f; ++i ) {
                printf("%c", s[i]);
        }

        printf("\n");
        
        return 0;
}

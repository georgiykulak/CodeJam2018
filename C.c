#include <stdio.h>

static char s[100001];

int is_not_space(char ch);

int palindrom(unsigned long strt, unsigned long fnsh);

int main()
{
        unsigned long start;
        unsigned long finish;
        unsigned long counter    = 0;
        unsigned long ch_counter = 0;
        unsigned long ans_s;
        unsigned long ans_f;
        char c;
        
        while ( is_not_space (
                        *(s + ch_counter++) = getchar() 
                        ) 
                ) 
        ;
        
        printf("%d\n", palindrom(0, ch_counter) );

        *(s + ch_counter) = '\0';
        start = ch_counter / 2 - 1;
        ans_s = start;
        finish = (ch_counter - 1) % 2 ? start + 1 : start;
        ans_f = finish;

        while ( start != 0 && finish != ch_counter - 1 )  {
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
        
        if ( (ch_counter % 2 && ans_s == ans_f) ||
                ( !(ch_counter % 2) && ans_s == ans_f + 1 )
           ) {
                printf("ALarm! Short circuit!");
        }
        else
                for ( unsigned long i = ans_s; i <= ans_f; ++i ) {
                        printf("%c", *(s + i) );
                }

        printf("\n");
        
        return 0;
}

int is_not_space(char ch)
{
        return ch != '\0' &&
                ch != '\n' &&
                ch != ' ' &&
                ch != '\t';
}

int palindrom(unsigned long strt, unsigned long fnsh)
{
        unsigned long i = 0;
        unsigned long tmp = (fnsh - strt) / 2 + 1;
        
        while ( tmp-- ) {
                if ( *(s + strt + i) != *(s + fnsh - i) ) 
                        return 0;
                ++i;
        }

        return 1;
}

#include <stdio.h>

static char s[100001];

int is_not_space(char ch);

int palindrom(unsigned long strt, unsigned long fnsh);

int main()
{
        unsigned long ch_counter = 0;
        char c;
        
        while ( is_not_space (
                        *(s + ch_counter++) = getchar() 
                        ) 
                ) 
        ;

        *(s + ch_counter) = '\0';
        unsigned long size = ch_counter - 1;
        
        if ( palindrom(0, size) || ch_counter == 2) {
                printf("%s", s);
                return 0;
        }

        unsigned long start = 0;
        unsigned long finish = 0;
        
        /*for ( unsigned long k = 2; k < size; ++k ) {
                unsigned long tempsize = size - k;
                for ( unsigned long i = 0; i <= tempsize; ++i )
                        if ( palindrom(i, i + k) ) {
                                start = i;
                                finish = i + k;
                        }
        }*/
        
        for ( unsigned long k = 2; k < size; ++k ) {
                unsigned long tempsize = k - 2;
                for ( int i = size - 1; i > tempsize; --i )
                        if ( palindrom(i - k + 1, i + 1) ) {
                                start = i - k + 1;
                                finish = i + 1;
                        }
        }
       
        //I don't know what loop is faster
        //so I leave both (first try in comments)

        if ( ! finish )
                printf("Alarm! Short circuit!");
        else 
                for ( int i = start; i < finish; ++i )
                        printf("%c", *(s + i) );

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
        
        while ( tmp-- )
                if ( *(s + strt + i) != *(s + fnsh - i++ - 1) ) 
                        return 1;
        
        return 0;
}

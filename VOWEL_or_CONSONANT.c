#include<stdio.h>
int main()
{
    char s; 
    scanf("%c" ,&s);
    if (s=='a'||s=='e'||s=='i'||s=='o'||s=='u') 
    {
        printf("VOWEL" );
    }
    else 
    {
        printf("CONSONANT" ); 
    }
    
}
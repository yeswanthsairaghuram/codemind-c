#include<stdio.h> 
int main()
{
    float basic,gross,hra,dra;
    scanf("%f",&basic,&gross,&hra,&dra);
    if(basic<=10000)
    {
        hra=basic*0.8;
        dra=basic*0.2;
    } 
    else if(basic<=20000)
    {
        hra=basic*0.9;
        dra=basic*0.25;
    }
    else 
    {
        hra=basic*0.95;
        dra=basic*0.3;
    }
    gross=basic+hra+dra;
    printf("%0.2f",gross);
    
}
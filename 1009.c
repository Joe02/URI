#include<stdio.h>
int main()
{
    char name;
    double salary,sale;
    scanf("%s %lf %lf",&name,&salary,&sale);
    double total = salary+((sale*15)/100);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}

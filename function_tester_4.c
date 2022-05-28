//DOCUMENTATION SECTION
//PRE-PROSECCOR SECTION
#include<stdio.h>

//GLOBAL VARIABLE SECTION
int sqt (int x);

//MAIN FUNCTION SECTION
int main (void)
{
    int a;
    int b;

    scanf("%d",&a);
    b = sqt(a);
    printf("\n%d Squared : %d",a,b);
    return 0;

}
//USER-DEFINED SECTION
int sqt (int x){
    return(x*x);
}

#include<stdio.h>
int main(){

    int a,f,l;

    printf("Enter any number : ");
    scanf("%d",&a);

    l=a%10;

    while(a>=1){
        if (a<10)
        {
            f=a;
        }
            a/=10;
    }

    printf("\nfirst number : %d",f);
    printf("\nlast number : %d",l);

    printf("\n\nThe sum of the first and the last digit : %d" , f+l);
    return 0;
}
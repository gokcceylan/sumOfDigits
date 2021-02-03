#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*in this code we will be given an integer number with one or several digits. we will code a function
to calculate the sum of digits. secondly we will code another function to print the results on the
screen since we must not use printf in our main function.function. here's how it's going to be
1) we introduce the prototypes
2) we code main function which will scan n as characters so we'll use char n. then we will call
sum function to sum the digits.
we need to note that we won't scan digits as int
3) we will type cast (sum function)
4) we call printer function
5) we define printer function in order to print the results on the screen */

int sum(int a);
void printer(int b);


int main()
{ 
    int n;
    scanf("%d", &n);
    int x=sum(n);
    printer(x);


    return 0;
}


int sum(int n)
{   
    int sonuc=0;
    while(n>0)
    {
        int a=n%10;
        sonuc=sonuc+a;
        n=n-a;
        n/=10;
     }
        return sonuc;
    
}


void printer (int x)
{
    printf("result: %d", x);
    return;
}

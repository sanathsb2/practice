/* GCD of 2 NUMBERS */

/*
LOGIC: 

1. find the smallest of 2 numbers.
2. start with number 2. go on till the smallest number.
3. use % operator on both numbers with 'i' and if they both give zero, then that particular 'i' is GCD
*/
#include <stdio.h>
#include <string.h>


int main()
{
    int a=10,b=4,smallest,gcd=1;
    smallest = (a<b) ? a : b;    //finding smallest number
    for(int i=2;i<=smallest;i++){
        if((a%i==0) && (b%i==0)){
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}

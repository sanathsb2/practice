/* sum of digits of a number */

/*
LOGIC: 
*/
#include <stdio.h>
#include <string.h>

int sumofdigits(int number){
    int sum=0;
    while(number>0){
        int temp = number%10;
        number = number/10;
        sum = sum+temp;
        /*
        if(sum>9){
            sum = sumofdigits(sum);
        }
        printf("%d\n",sum);
        */
    }
    
    if(sum>9){
        sum = sumofdigits(sum);
    }
        //printf("%d\n",sum);
    return sum;
}

int main()
{
    int number = 59848;
    int result = sumofdigits(number);
    printf("%d", result);
    
    return 0;
}

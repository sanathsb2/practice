/* LCM of 2 NUMBERS */

/*
LOGIC: 

1. find the largest of 2 numbers.
2. start with the largest number. go on infinitely to find which number gives zero reminder for 
   both the input numbers.
*/
#include <stdio.h>
#include <string.h>


int main()
{
    int a=7,b=3,largest;
    largest = (a>b) ? a : b;    //finding largest number
    while(1){
        if((largest % a == 0) && (largest % b == 0)){
            printf("lcm is %d" ,largest);
            break;
        }
        largest++;
    }
    
    return 0;
}

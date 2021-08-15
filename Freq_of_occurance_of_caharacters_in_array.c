/* frequency of occurance of a character in an array */

/*
LOGIC: 
*/
#include <stdio.h>
#include <string.h>

void repetations(char * str, int len){
    
    int result[len];
    
    for(int i=0;i<len-1;i++){
        int count=0;
        printf("%c\t", str[i]);
        for(int j=0;j<len-1;j++){
            if(str[i] == str[j]){
                count++;
            }
            result[i] =count;
        }
    }
    printf("\n");
    
    for(int i=0;i<len-1;i++){
        printf("%d\t", result[i]);
    }
    
}

int main()
{
    char str[] = "sanath";
    int len = sizeof(str)/sizeof(char);
    repetations(str,len);
    return 0;
}

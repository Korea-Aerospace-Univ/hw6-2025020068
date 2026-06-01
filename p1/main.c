#include <stdio.h>

int main(void)
{
    char arr[10]={};
    char max_ch= '\0';
    char *p;
    char *q;
    int max_count=0;
    for(p=arr;p<arr+10;p++){
    scanf("%c",p);
    }
    
    for (p=arr;p<arr+10;p++){
        int count=0;
        for (q=arr;q<arr+10;q++){
            if(*p==*q) 
            count++;
            
        }
        if (count>max_count){
            max_count=count;
            max_ch=*p;
        }
    }
    printf("%c %d",max_ch,max_count);
    
    return 0;
}

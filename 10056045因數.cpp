#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    for(int a=1;a<=100;a++){
        printf("%3d的因數有: ",a);
        int i=1 ;
        while(i<=a){ 
             if(a%i==0){ 
             printf("%3d  ",i); 
             } 
             i++ ;
        }
        printf("\n");
    }   
    printf("\n");
    system("pause");     
}        

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,sum,k;
    for(a=1;a<1000;a++) {
        sum =0;
        for(b=1;b<a;b++) {
            if(!(a%b)) 
            sum = sum +b;
        }
        if(sum == a)
        printf("%3d是完全數\n",a); 
    }
    system("pause");
}

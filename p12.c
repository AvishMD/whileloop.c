#include <stdio.h>

int main() {
    int n,kw,max=0,count=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&kw);
        if(max<kw)
        max=kw;
        if(kw>5)
        count++;
        i++;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d",count);
    return 0;
}

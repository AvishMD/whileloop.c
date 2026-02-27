#include <stdio.h>

int main() {
    int mw,n,pw,count=0,sum=0;
    scanf("%d",&mw);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&pw);
        sum+=pw;
        if(sum<mw)
        count++;
        i++;
    }
    printf("People Entered: %d\n",count);
    if(sum>mw)
    printf("Overload Status: Yes");
    else 
    printf("Overload Status: No");

    return 0;
}

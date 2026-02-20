#include <stdio.h>

int main() {
    int n,db,count=0,icounts=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
    scanf("%d",&db);
    if(db>70){
    count++;
    }
    if(icounts==0 && db>70)
    icounts++;
    else if(db>70 && icounts!=0)
    icounts++;
    else 
    icounts=0;
    if(icounts>=3)
    break;
    i++;
    }
    printf("Noise Violations: %d\n",count);
    printf("Longest Violation Streak: %d",icounts);
    

    return 0;
}

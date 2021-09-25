#include <stdio.h>
int main() {
    int ilk,son,s=0;
    scanf("%d",&ilk);
    scanf("%d",&son);
    for(int i = ilk; i<=son; i++) {
        int yuzler = i / 100;
        int onlar = i % 100;
        if(ilk<=999) {
            break;
        }
        else if(son>9999) {
            break;
        }
        if(yuzler/10 == yuzler % 10)
            continue;
        if(yuzler == onlar)
            s+=yuzler;
    }
    printf("%d",s);
    return 0; 
}

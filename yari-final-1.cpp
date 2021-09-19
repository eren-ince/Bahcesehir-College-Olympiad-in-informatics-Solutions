#include <stdio.h>
int main() {
    int ilk,son,s=0;
    printf("ilk sayiyi giriniz: ");
    scanf("%d",&ilk);
    printf("ikinci sayiyi giriniz: ");
    scanf("%d",&son);
    for(int i = ilk; i<=son; i++) {
        int yuzler = i / 100;
        int onlar = i % 100;
        if(yuzler/10 == yuzler % 10)
            continue;
        if(yuzler == onlar)
            s+=yuzler;
    }
    printf("Toplam: %d",s);
    return 0;
}

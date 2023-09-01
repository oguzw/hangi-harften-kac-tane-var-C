#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char metin[100];
    char harf;
    printf("Lutfen bir metin giriniz.\n");
    gets(metin);
    printf("Hangi harfi sorguluyorsunuz?\n");
    scanf("%c",&harf);
    int i,sayac;
    sayac =0;
    for(i=0;i<strlen(metin);i++)
    {
        if(harf==metin[i])
        {
            sayac++;
        }
    }
    printf("%s metininde %d adet %c harfi bulunuyor.",metin,sayac,harf);



    return 0;
}

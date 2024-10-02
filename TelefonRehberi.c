#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "header.h"
#include "menu.h"
#include "phoneAdd.h"
#include "phoneList.h"
#include "phoneSearch.h"

int main()
{
    int secim;
    char aranilacakIsim[20];
    int sonuc=0;
    menu();
    do{
        printf("\nSeciminizi Giriniz: ");
        scanf("%d",&secim);
        switch(secim)
        {
       case 1:
        if(phoneAdd()==0)
        {
            printf("\n Telefon numarai basarili bir sekilde eklendi..");
        }
        else 
        {
            printf("\nTelefon numarasi eklenirken bir hata olustu!!");
        }
        break;
        case 2: 
         if(phoneList()==0)
        {
            printf("\n Telefon numaralari basarili bir sekilde listeleni..");
        }
        else 
        {
            printf("\nTelefon numarasi listeleneirken bir hata olustu!!");
        }
        break;
        case 3: 
        printf("\nAramak istediginiz ismi Giriniz(max 20 karakterli):");
        scanf("%s",&aranilacakIsim);
        sonuc=phoneSearch(aranilacakIsim);//aranılan kayıt sayısını searchrESULT DEĞİŞKENİNE ATADIK
           if(sonuc==0)
           {
            printf("\nAranilan kayit bulunamadi..\n");
           }
           else{
            printf("\nToplam %d tane kayit bulundu.",sonuc);
           }
        break;
        case 4:
         printf("\n Cikis Yapiliyor..");
         return 0;
        break;
        default:printf("Lutfen 1-4 arasi bir secim yapiniz!");
            break;
        }
    }while(secim!=4);

    return 0;
}
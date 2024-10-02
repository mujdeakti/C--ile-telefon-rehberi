int phoneSearch(char* ptrSearch)
{
    Record cRecord;
   int i=0;//kaç tane kaydın listelendiğini anlamak için i değişkenini kullanacağız
    FILE *fptr;
    fptr=fopen("data.txt","r");//okuma işlemi yapıyoruz burada
    if(fptr==NULL)
    {
        printf("\nDosya Acilamadi!");
        return -1;
    }
while(!feof(fptr))
{
     fscanf(fptr,"%s%s%s",cRecord.name,cRecord.lastname,cRecord.phone);
 if(!strcmp(ptrSearch,cRecord.name))
 {
    printf("%s\t\t",cRecord.name);
    printf("%s\t\t",cRecord.lastname);
    printf("%s\n",cRecord.phone);
    i++;
 }
}
fclose(fptr);
return i;
/* /*Record currentRecord;
   char buffer[100];
   int i=0;//kaç tane kaydın listelendiğini anlamak için i değişkenini kullanacağız
    FILE *fptr;
    fptr=fopen("data.txt","r");//okuma işlemi yapıyoruz burada
    if(fptr==NULL)
    {
        printf("\nDosya Acilamadi!");
        return -1;
    }

     // while ((!feof(fptr)))
     while(fgets(buffer,sizeof(buffer),fptr)!=NULL)
 {
    //okuma işlemi yaptığımız için fscanf kullandık
     sscanf(buffer,"\n%s %s %s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
     //gonferdiğimiz değer ile currentRecord ile ulaştığımız dosyamızdaji değer aynı mı diye kontrol edilir
    //dosyada aradığımız isim varsa strcmp bize 0 dondurur bu yüzden if te ! kullandık ki 0 danın değilini alaloım diye
     if(strcmp(ptrSearch,currentRecord.name)==0)//stringleri karşılaştırma fonksiypnunu kullandık
         {
  //ekranda gösterelim
   printf("%s\t\t\t", currentRecord.name);
   printf("%s\t\t\t", currentRecord.lastname);
   printf("%s\n", currentRecord.phone);
   i++;//var olan değer için sayaç her seferinde 1 arttırılır
       }
 }
 */
  }
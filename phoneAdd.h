int phoneAdd()
{
    Record  newRecord;
    FILE* fptr;
    fptr=fopen("data.txt", "a");//ekleme işlemi yaptığımız için
    if(fptr==NULL)
    {
        return -1;
    }
    printf("\n\n");
    printf("Isim Giriniz(max 20 karakterli): ");
    scanf("%s",newRecord.name);
     printf("Soyisim Giriniz(max 20 karakterli): ");
    scanf("%s",newRecord.lastname);
     printf("Telefon Numarasi Giriniz(max 11 haneli): ");
    scanf("%s",newRecord.phone);

    fprintf(fptr,"\n%s %s %s",newRecord.name,newRecord.lastname,newRecord.phone);
    fclose(fptr);
    return 0;
}
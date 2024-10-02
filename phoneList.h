int phoneList()
{
    Record cRecord;
    FILE *fptr;
    char buffer[100];
    fptr=fopen("data.txt","r");//okuma işlemi yapıyoruz burada
    if(fptr==NULL)
    {
        return -1;
    }
       printf("\n\n");
      printf("\n Isim \t\t\tSoyisim\t\t\tTelefon\n");
      printf("-----\t\t\t-------\t\t\t-------\n");
      while(fgets(buffer,sizeof(buffer),fptr)!=NULL)
      {
        printf("%s",buffer);
      }
     
     /* while ((feof(fptr)))
      {
        //okuma işlemi yaptığımız için fscanf kullandık
        fscanf(fptr,"\n%s %s %s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        //ekranda gösterelim
        printf("%s\t\t\t", currentRecord.name);
        printf("%s\t\t\t", currentRecord.lastname);
        printf("%s\n", currentRecord.phone);
      }
      */
       fclose(fptr);  
    
    return 0;
}
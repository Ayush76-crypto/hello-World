/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    int l1,l2;

    char ca,cb;
    char fname1[40],fname2[40];

    printf("Enter file name 1 : ");
    gets(fname1);
    printf("Enter file name 2 : ");
    gets(fname2);

    fp1=fopen(fname1,"r+");
    fp2=fopen(fname2,"r+");

    if(fp1==NULL || fp2== NULL)
    {
        printf("File cannot be opened and it does not exist ");
        exit(1);
    }

    ca=fgetc(fp1);
    cb=fgetc(fp2);

    while( ca!=EOF && cb!=EOF && ca==cb)
    {
        ca=getc(fp1);
        cb=getc(fp2);
    }

    if(ca==cb)
        printf("\nFiles are identical !");
    else
        printf("\nFiles are different !");

    fseek(fp1,0,SEEK_END);
    fseek(fp2,0,SEEK_END);

    l1=ftell(fp1);
    l2=ftell(fp2);

    printf("\n Length of the file 1 is %d bytes",l1);
    printf("\n Length of the file 2 is %d bytes",l2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}    */



/*NAME:ALAN ANTO
  ROLL NO: 6
  CLASS:AI&DS*/
#include<stdio.h>
int main()
{
    int c=0,w=0,line=1;
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("text.txt","r");
    while(feof(fp1)==0)
    {   ch=fgetc(fp1);
        c++;
        if(ch==' ')
            w++;
        if(ch=='\n')
            line++;
    }
    fclose(fp1);
    fp2=fopen("output.txt","w");
    fprintf(fp2,"number of characters:%d\n",c);
    fprintf(fp2,"number of words:%d\n",w);
    fprintf(fp2,"number of lines:%d\n",line);
    fclose(fp2);
    return 0;
}

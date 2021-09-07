/*Name:BASIL P BABU
 Roll no:18
 class:AI&DS
 */
 #include<stdio.h>
 int main()
 {
     char ch;
     printf("Enter the character:\n");
     ch = getchar();
     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
     {
         printf("%c is a vowel",ch);
     }
     else
        printf("%c is not a vowel",ch);
    return 0;
 }

//Pset2 part B of CS50.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)                                    //if command line argument is not equal to 2
    {
        printf("Usage: ./substitution key\n");       //print error message "Usage ./substitution" is commnand is not equal to 2
        return 1;
    }
    int argv_len = strlen(argv[1]);
    if(argv_len!=26)
    {
        printf("Key must be upto 26.\n");
        return 1;
    }
    for(int i=0;i<argv_len;i++)
    {
        if(!isalpha(argv[1][i]))           //to check if argv[1] is not alphabetic
    {
        printf("The key must contain only alphabets.\n");
        return 1;
    }
    for(int j=i+1;j<argv_len;j++)
    {
        if(argv[1][i] == argv[1][j])
        {
            printf("The key must not contain repeated alphabets.\n");
            return 1;
        }
    }
}
   char plaintext[10000];
   printf("plaintext : ");
   fgets(plaintext,10000,stdin);
   printf("ciphertext : ");
   int plain_len = strlen(plaintext);
   for(int i=0;i<plain_len;i++)
   {
       if(isupper(plaintext[i]))
       {
           printf("%c", toupper(argv[1][plaintext[i] - 65]));
       }
       else if(islower(plaintext[i]))
       {
           printf("%c", tolower(argv[1][plaintext[i] - 97]));
       }
       else 
       {
           printf("%c",plaintext[i]);
       }
   }
   printf("\n");
   return 0;
}

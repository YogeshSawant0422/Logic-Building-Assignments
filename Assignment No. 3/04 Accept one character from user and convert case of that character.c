//Accept one character from user and convert case of that character.
//Input : a Output : A
//Input : D Output : d
void DisplayConvert( char CValue)
{
 if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("\t%c",CValue + 32);
    }
 else if(CValue >= 'a' && CValue <= 'z')
    {
     printf("\t%c",CValue - 32);
    }

    return ;
}
int main()
{
     char cValue = '\0';

     printf("\n Enter character =");
     scanf("%c",&cValue);

     DisplayConvert(cValue);

        printf("\n Thanks !!!");
     return 0;
}

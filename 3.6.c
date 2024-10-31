#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char Encryption_before[6] = { 'C','h','i','n','a'};
    char Encryption_[6];
    for (int i = 0; i < 5; i++)
    {
        Encryption_[i] = Encryption_before[i] + 4;
    }
    Encryption_[5] = '\0';
    for (int i = 0; i < 5; i++)
    {
       putchar(Encryption_[i]);
    }
    printf("%s", Encryption_);
    return 0;
}
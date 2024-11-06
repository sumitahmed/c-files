#include <stdio.h>
void birthday(char x[], int y)//char x[], int y these are PARAMETERS its needed to run the program
{
   printf("\nHappy birthday dear %s!", x);//here x = name & age = y
   printf("\nYou are %d years old!", y);//here x = name & age = y
}

int main()
{
   char name[] = "Bro";
   int age = 21;

   birthday(name, age); //these are arguments variables /*the name can differ*/

   return 0;
}
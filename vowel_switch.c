#include<stdio.h>
int main(){
   char variable;
   printf("Enter a character: ");
    scanf("%c",&variable);
    switch (variable)
    {
    case  'A': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    case  'E': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    case  'I': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    case  'O': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    case  'U': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    
    case  'a': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    
    case  'e': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    
    case  'i': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    
    case  'o': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    
    case  'u': 
        printf("\nThe entered character %c is vowel",variable);
        break;
    
    
    default:
    printf("\n The entered character %c is a consonent",variable);
        break;
    }
}
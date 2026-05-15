#include<stdio.h>
#include<string.h>

int main(){
    char word[100], *p1, *p2;
    int palindrome = 1;

    printf("Enter a word: ");
    gets(word);

    p1 = word;
    p2 = word + strlen(word) - 1;
    
    while(p1 < p2){
        if(*p1 != *p2){
            palindrome = 0;
            break;
        }
        p1++;
        p2--;
    }

    if(palindrome){
        printf("\"%s\" is a palindrome.", word);
    }
    else{
        printf("\"%s\" is not a palindrome.", word);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void DisplayMenu();
char option;
char string_input[100];
int length;
int i;
float R1;
float R2;
float R3;
float Rtotal;

int stringlenth(const char *str);

int main(){

do {DisplayMenu();


printf("Choose your option: \n");
scanf(" %c", &option);

switch(option){

 case 'A' :
    printf("Thank you for choosing option A\n");
    printf("Here is your ASCII Table\n");
    printf("---------------------------------\n");
    printf("ASCII TABLE FOR COMPUTER SYSTEMS\n");
    printf("---------------------------------\n");
    printf("DEC | HEX | CHAR\n");
    printf("-------------------\n");

    for(i=0; i<256; i++){
        printf(" %-3d   %-3x   %c\n", i, i, i);
    }

break;

case 'B' :
        printf("Thank you for choosing option B");
        printf("Thank you for choosing option A\n");
    printf("Here is your ASCII Table\n");
    printf("---------------------------------\n");
    printf("ASCII TABLE FOR COMPUTER SYSTEMS\n");
    printf("---------------------------------\n");
    printf("DEC | HEX | CHAR\n");
    printf("-------------------\n");

    for(i=0; i<256; i++){
        printf(" %-3d   %-3x   %c\n", i, i, i);
    }

break;


case 'C' :
    printf("Thank you for choosing option C\n");
    printf("Enter R1 :\n");
    scanf(" %f", &R1);
     printf("Enter R2 :\n");
    scanf(" %f", &R2);
     printf("Enter R3 :\n");
    scanf(" %f", &R3);

    Rtotal = (1)/((1/R1)+ (1/R2) +(1/R3));

    printf("Total resistance = %.2f ohms\n",Rtotal);

break;

case 'D' :
    printf("Thank you for choosing option D\n");
    printf("Enter your string to get its length: \n");
    scanf(" %s", string_input);

    length = stringlenth(string_input);

    printf("The length of this string is : %d characters\n", length);

break;

case 'X' :
    printf("Thank you for using our program.....Exiting\n");
break;

default :
    printf("Invalid choose again from option A, B, C, D, do not forget it is in CAPITAL LETTERS\n");

break;
}
}while (option != 'X');

return 0;
}

int stringlenth(const char *str){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}

void DisplayMenu(){
    printf("MENU\n");
    printf("A - ASCII Table\n");
    printf("B - Print ASCII table\n");
    printf("C - Calculate resistance of a parallel circuit\n");
    printf("D - Calculate the length of a string\n");
    printf("X - Exit\n");
}

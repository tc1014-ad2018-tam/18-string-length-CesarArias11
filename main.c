/*
 * This program will allow the user to write a string.
 * Then it will him/her the length of the entered string.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date: October 17th, 2018
 * Mail: A01411995@itesm.mx
 *
 */
#include <stdio.h>

int main() {
    // Here I declare my variables.
    char string[200];
    int i;
    //Here I ask the user to input a string.
    printf("Write a string:");
    fgets(string, sizeof(string), stdin);
    // In this part the program determines the length of the string entered by the user.
    for (i = 0; string[i] != '\n'; i++);
    printf("The size of your string is: %d", i);

    return 0;
}
#include <stdio.h>

int main(){

    /*
    Variable = Allocated space in memory to store a value
            We refer to a variable's name to acess the stored value
            That variable now behaves as if it was the value it contains
            But we need to declare that type of data we are storing
            int, float, char...
    
    */

    int x;  // declaration of the type INTEGER
    x = 23; // initialization
    
    int y = 45; // declaration + initialization 
    int age = 22;

    float gpa = 2.903;  // Floating point number
    char letter = 'F';  // Single character
    char name[] = "Danilo"; // array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your grade is %c\n", letter);
    printf("Your gpa is %f\n", gpa);



    return 0;
}
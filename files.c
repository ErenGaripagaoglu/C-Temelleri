#include <stdio.h>
#include <stdlib.h> //to use exit() func inside this

const char FILE_NAME[25] = "file.txt";

int main() {
    
    FILE *fptr; //initialize file pointer
    
    fptr = fopen(FILE_NAME, "r"); //read mode can cause error if file does not exists
    
    if (fptr == NULL) { //checks for error
        printf("File does not exists");
        exit(1); //part of stdlib
    }
    
    fptr = fopen(FILE_NAME, "w"); //write mode, creates new file if file missing
    fptr = fopen(FILE_NAME, "a"); //append mode
    
    fprintf(fptr, "Lorem Ipsum");
    
    char temp[255]; //temporary string to hold data from the read file row
    
    while (fgets(temp, 255, fptr) != NULL) { //loops until end of file "EOF" reached
        printf("%s", temp); //prints out the row as a string array
    }
    
    fclose(fptr); // close the file before program exits
    
    return 0;
}

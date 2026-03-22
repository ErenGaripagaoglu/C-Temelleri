#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 15

void Hello(char *name) {
    strcat(name, ", welcome");
}

int main() {
    
    char string1[MAX_LENGTH];
    char string2[MAX_LENGTH];
    
    char string3[] = "Alternative"; //you can not make this declaration null, it will cause an error
    char *string4 = "Another"; //you can not modify this, result will be 'undefined', AVOID THIS
    
    scanf("%s %s", string1, string2); //no '&' for strings in scanf
    printf("%s %s \n", string1, string2);
    
    /* Terminating Character */
    char name[6] = "Eren";
    // name[6] = {"E", "r", "e", "n", \0, " "}
    //            0     1    2    3   4    5  = (0-5) -> 6
    // \0 takes up extra space to mark end of the string array of chars
    
    int i = 2;
    printf("Char at index %d is %c \n", i, name[i]);
    
    name[2] = 'X';
    printf("%s \n", name);
    
    
    /* String Operations */
    //include string library (line2)
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];
    
    /* Copy strcpy() */
    // Copies(overwrites) 2nd arg. into 1st arg.
    // Requires the target string's size to fit source's size capacity
    //
    strcpy(str1,"Hello World!");
    strcpy(str2, str1);
    
    printf("str1:%s \nstr2:%s \n", str1, str2);
    
    
    /* Concatenation (Merge?) strcat() */
    // 1st argument must have enough space for additionaly chars from 2nd argument
    // you can merge "abc" to 1st arg but can not use "abc" as 1st argument
    printf("string1+string2: %s \n", strcat(str1, str2));
    
    
    /* Comparison strcmp() */
    if (strcmp(string1, string2) < 0) { //returns negative if str1 < str2
        printf("%s %s \n", string1, string2);
    }
    else
    {
        printf("Same \n");
    }
    
    
    /* Length strlen() */
    // number of chars before '\0'
    printf("Name Length is: %d\n", strlen(name));
    
    
    /* Passing Strings To Functions */
    // strings are actually pointers to the first element of array of chars
    char user[MAX_LENGTH];
    printf("Who are you? ");
    scanf("%s", user); //no '&' for strings
    Hello(user);
    printf("%s\n", user);
    
    
    return 0;
}

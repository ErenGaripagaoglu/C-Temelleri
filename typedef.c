#include <stdio.h>
#include <string.h> //library to allow us use strcpy in our code

typedef struct
{ //specify thats "type definition", var type "struct"
    int id;
    char name[15];
    char surname[15];
    int grade;
} Student;
// type name

int main() {
    Student stu1, stu2; //initialize variables that use student structure
    
    
    //Hard Coded Value Assignment
    stu1.id = 1;
    strcpy(stu1.name, "Eren"); //we need to use strcpy function to send our string into char array
    strcpy(stu1.surname, "GRP");
    stu1.grade = 80;
    
    printf("%d %s %s %d \n", stu1.id, stu1.name, stu1.surname, stu1.grade);
    
    
    //User Input Assignment
    printf("Enter student number: ");
    scanf("%d", &stu2.id);
    
    char temp[15]; //temporary variable to hold string before we copy it to struct
    printf("Enter student name: ");
    scanf("%s", temp); //no need for '&' as in the strings
    strcpy(stu2.name, temp);
    printf("Enter student surname: ");
    scanf("%s", temp);
    strcpy(stu2.surname, temp);
    
    printf("Grade: ");
    scanf("%d", &stu2.grade);
    
    printf("%d %s %s %d \n", stu2.id, stu2.name, stu2.surname, stu2.grade);
    
    return 0;
}


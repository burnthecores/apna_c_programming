/* Struct is used to create collection of differenyt Data types */

#include<stdio.h>
#include<string.h>

struct student{

    int roll;
    float cgpa;
    char name[100];    
}; // structure is a custom user defined data type

// using structures 
int main(){
    struct student s1; // declaration of stucture 'Variable'
    s1.roll=567;
    s1.cgpa= 9.7;
    strcpy(s1.name, "Revanth"); // since we intialised name as a charater array we can't directly
    // change it therefore we use strcopy() function.

    printf("Student name : %s\n", s1.name);
    printf("student roll no : %d \n", s1.roll);
    printf("Student cgpa : %f\n", s1.cgpa);
    

    struct student s2; // declaration of stucture 'Variable'
    s2.roll=568;
    s2.cgpa= 9.0;
    strcpy(s2.name, "noor"); // since we intialised name as a charater array we can't directly
    // change it therefore we use strcopy() function.

    printf("Student name : %s\n", s2.name);
    printf("student roll no : %d \n", s2.roll);
    printf("Student cgpa : %f\n", s2.cgpa);
    
//2. Array of structures
    struct student ece[100];// declaration of studcture variables as array
    ece[0].roll= 300;
    ece[0].cgpa= 9.2;
    strcpy(ece[0].name, "Shiva");

    printf(" student name : %s\n", ece[0].name);

    // efficient way of 'Initialising structure variables'
    struct student s3 = {570, 8.7, "Ram"};

    printf(" student name: %s \n", s3.name);

    return 0;
}

/* What happens in memory when we declare stucture? 

 similar to arrays where there is continuous allocation of memory, stucture too have continuous allocation 
 of memory ex: (char, int, float ) in the above data structure

*/




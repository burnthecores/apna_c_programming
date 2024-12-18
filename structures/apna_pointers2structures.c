// pointers to stucture variables, becaues ultimates structure is ultimately a 'collection of datatypes'

#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};


int main(){
    struct student s1={ 100, 9.55, "bramha"};
    printf("student rollno: %d \n", s1.roll);
    printf(" student cgpa : %f\n", s1.cgpa);

    // declaration of pointer to structure
    struct student *ptr= &s1;
    printf(" Student roll no display using pointer: %d \n ", (*ptr).roll);
    // (*ptr).roll is similar to ptr->roll
    printf("Student name using pointer: %s \n", ptr->name);
    
    return 0;
}
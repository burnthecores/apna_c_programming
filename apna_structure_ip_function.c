#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
    
};

void printInfo(struct student s1){

    printf(" student roll number : %d \n", s1.roll);
    printf(" student cgpa : %f \n", s1.cgpa);
    printf(" student name : %s \n", s1.name);

    s1.roll=111; /* this change will not be reflected in the s1 variable because 
    structures are passed as call by value to a function, so any change made in the called function 
    will not be reflected in the calling function*/
}

int main(){
    struct student s1={ 110, 10, "Revanth Reddy Pannala"};
    printInfo(s1); // here stucture as an input to a function is 'call by value'
    printf(" Student roll no. %d \n", s1.roll); // s1.roll will reamin 110 
}
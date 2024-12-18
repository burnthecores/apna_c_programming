/*We are creating a structure to store Vectors and Then define a function to return 
sum of the two vectors*/

// we can also 2D Array to solve the above problem

#include<stdio.h>
#include<string.h>

typedef struct vectors{
    float x;
    float y;
} vec; // 'vec' is alias for vectors

// function with structure as input

void sumofvectors(vec v1, vec v2){
    vec sum={ v1.x+v2.x, v1.y+v2.y}; 
    printf("sum of the vectors: %f , %f \n", sum.x, sum.y);

}

int main(){
    vec v1={2.4, 3.5}; // declaration of structure variable 
    vec v2={ 1, 2};
    sumofvectors(v1,v2);


}
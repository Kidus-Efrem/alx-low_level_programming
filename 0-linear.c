#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int linear_search(int *array, size_t size, int value);

int main(){

}

int linear_search(int *array, size_t size, int value){
    for(int i=0; i<= size; i++){
        printf("Value checked array[%d] = [%d]",i,array[i])
        if(value==*array+i){
            return i;
        }
        else{#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) // Check for NULL array
        return -1;

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i; // Return the index if found
    }

    return -1; // Return -1 if not found
}

            return -1;
        }
    }
}
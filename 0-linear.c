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
        else{
            return -1;
        }
    }
}
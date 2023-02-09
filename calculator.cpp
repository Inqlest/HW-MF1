#include "calculator.h"

int sum(int x, int y){
    return x + y;
}

int sub(int x, int y){
    return x - y;
}

int multi(int x, int y){
    return x * y;
}

int di(int x, int y){
    return x / y;
}

int power(int x, int y){
    for(int i = 1; i < y; i++){
        x *= x;
    }
    return x;
}
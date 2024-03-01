// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <iostream>

bool checkPrime(uint64_t value) {
// вставьте код функции
bool checkPrime(uint64_t val){
    if (val <= 1){
        return false;
    }
    for (uint64_t i = 2; i*i <= val; i++){
        if (val % i == 0){
            return false;
        }
    }
    return true;
}
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int      idx   = 1;
  uint64_t cur_p = 2;
    
    while (idx < n){
        cur_p++;
        if (checkPrime(cur_p)){
            idx++;
        }
    }
    return cur_p; 
}          
}

uint64_t nextPrime(uint64_t value) {
  value++;
    
  while(!checkPrime(value)){
        value++;
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum   = 0;
uint64_t val   = 2;
    
while( val < hbound){
        if (checkPrime(val)){
            sum += val;
        }
        val++;
    }
    return sum;
}

// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t val) {
// вставьте код функции
if (val <= 1) {
    return false;
    }
for (uint64_t i = 2; i*i <= val; i++) {
    if (val % i == 0) {
        return false;
    }
}
    return true;
}
uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t idx = 0;
  uint64_t cur_p = 1;
    while (idx < n) {
        cur_p++;
        if (checkPrime(cur_p)) {
            idx++;
        }
    }
return cur_p;                                                                                                                                                                                                                                                          
}          
uint64_t nextPrime(uint64_t value) {
  value++;
  while (!checkPrime(value)) {
        value++;
    }
    return value;
}
uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
uint64_t val = 2;  
while(val < hbound) {
        if (checkPrime(val)) {
            sum += val;
        }
        val++;
    }
    return sum;
}

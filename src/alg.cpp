// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <cmath>
bool checkPrime(uint64_t value) {
if (value <= 1) {
return false;
}
for (uint64_t i = 2; i <= sqrt(value); i++) {
if (value % i == 0) {
return false;
}
}
return true;
}
uint64_t nPrime(uint64_t n) {
if (n == 1) {
return 2;
}
int64_t count = 1;
uint64_t cur_p = 3;
while (count < n) {
cur_p += 2;
if (checkPrime(cur_p)) {
count++;
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
for (uint64_t i = 2; i < hbound; i++) {
if (checkPrime(i)) {
sum += i;
}
}
return sum;
}

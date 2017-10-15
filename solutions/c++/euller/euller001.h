//If we list all the natural numbers below 10 that are multiples of 3 or 5,
//we get 3, 5, 6 and 9. The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below 1000.

#ifndef euller001_h
#define euller001_h
#include <iostream>

int multipleSum(int a, int b, int c);
void euller_test_1();

//returns sum of multiples of (a & b) < c
int multipleSum(int a, int b, int c){
    int sum = 0;
    for (int i = 0; i < c ; i++){
        sum += (i%a == 0 || i%b == 0) ? i : 0;
    }return sum;
}

void euller_test_1(){
    std::cout << "The sum of all multiples of 3 & 5 below 1000 is "
    << multipleSum(3, 5, 1000) << std::endl;
}

#endif /* euller001_h */

#include <iostream>

#define MAXIMUM 1000000 //1e6

using namespace std;

int primeCount (int max){
    int sum = 0;
    for (int i = 1; i<=max; i++){
        for (int j = 2; j<=i/2; j++){
            if (i%j == 0){
                break;
            }
            else {sum = sum + i;}
        }
    }
    return sum;
}

int main (){
 cout << primeCount();
}
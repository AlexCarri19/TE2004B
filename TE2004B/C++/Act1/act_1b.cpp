#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <algorithm>
#include "utils.h"

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

int main(int argc, char* argv[]) {
	int i;
	double ms;

	cout << "Starting..." << endl;
	ms = 0;
	for (int i = 0; i < N; i++) {
		start_timer();

		cout << primeCount(MAXIMUM);

		ms += stop_timer();
	}
	cout << "result = " << fixed << setprecision(0) << result << "\n";
	cout << "avg time = " << fixed << setprecision(5) << (ms / N) << " ms" << endl;

	return 0;
}
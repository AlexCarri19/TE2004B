#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <omp.h>
#include <vector>
#include "utils.h"

const int SIZE = 1000000000; //1e9

using namespace std;

int countAr(vector<int> att1){
    int b = 0;
    for (int i = 0; i < sizeof(att1)/sizeof(att1[0]); i++){
    if (att1[i]%2 == 0){
        b++;
    }
    }

    return b;
}

int main(int argc, char* argv[]) {
	int *a;
	double ms;

	a = new int[SIZE];
	fill_array(a, SIZE);
	display_array("a", a);

	cout << "Starting..." << endl;
	ms = 0;
	for (int i = 0; i < N; i++) {
		start_timer();

		countAr(a);

		ms += stop_timer();
	}
	cout << "result = " << fixed << setprecision(0) << result << "\n";
	cout << "avg time = " <<  fixed << setprecision(5) << (ms / N) << " ms" << endl;

	delete [] a;
	return 0;
}
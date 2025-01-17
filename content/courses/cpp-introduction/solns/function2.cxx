#include <iostream>
#include <fstream>
#include "function2.h"

using namespace std;

int main() {

    const int nx=401;
    double x[nx];
    double y[nx];

    double xstart=-4.0, xend=4.0;
    double incr=(xend-xstart)/(nx-1);

    ofstream fout;
    fout.open("feval.csv");

    x[0]=xstart;
    y[0]=func(x[0]);
    fout<<x[0]<<","<<y[0]<<"\n";

    for (int i=1; i<nx; ++i) {
	x[i]=x[i-1]+incr;
	y[i]=func(x[i]);
        fout<<x[i]<<","<<y[i]<<"\n";
    }

    return 0;
}

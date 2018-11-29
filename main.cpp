// CPP Program to decompose a matrix into
// lower and upper traingular matrix
#include <iostream>
#include <iomanip>
#include "linalg.h"
using namespace std;

const int MAX = 100;

// Driver code
int main()
{

    linalg system1;
    system1.doolittle();
    system1.ycalc();
    cout << system1.y_[0] << " " << system1.y_[1] << "  " << system1.y_[2] << endl;

    cout << "final answer is" << endl;
    system1.vcalc();
    cout << system1.y_[0] << " " << system1.y_[1] << "  " << system1.y_[2] << endl;



    for (int i = 0; i < n_; i++) {
        // Lower
        for (int j = 0; j < n_; j++)
            cout << setw(6) << lower_[i][j] << "\t";
        cout << "\t";

        // Upper
        for (int j = 0; j < n_; j++)
            cout << setw(6) << upper_[i][j] << "\t";
        cout << endl;
    }

    double mat[][MAX] = { { 3.0, 1.0, 2.0 },
                          { -1.0, 4.0, 1.0 },
                          { 2.0, 1.0, 6.0 } };

    doolittle(A_, 3);
    return 0;
}
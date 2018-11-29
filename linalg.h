//
// Created by Brian Dolle on 4/6/18.
//

using namespace std;

#ifndef LIN_LINALG_H
#define LIN_LINALG_H


class linalg {

public:
    // working to solve A v = b
    int n_;
    double b_[3] = {2.0,6.0,-13.0};
    double A_[3][3] = {{3,1,-1},{-2,2,-1},{1,-2,-4}};
    double v_[3];
    double y_[3];
    double upper_[3][3]; // will write A= L U
    double lower_[3][3];
    void doolittle(); // will fill in upper and lower from A
    void ycalc(); // will solve for y from L y = b
    void vcalc(); // will solve for v from U v = y



     linalg();
    ~linalg();
};


#endif //LIN_LINALG_H

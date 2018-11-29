//
// Created by Brian Dolle on 4/6/18.
//

#include "linalg.h"

using namespace std;

void linalg::doolittle(){
    for (int i = 0; i < n_; i++) {

        // Upper Triangular
        for (int k = i; k < n_; k++) {

            // Summation of L(i, j) * U(j, k)
            double sum = 0;
            for (int j = 0; j < i; j++)
                sum += (lower_[i][j] * upper_[j][k]);

            // Evaluating U(i, k)
            upper_[i][k] = A_[i][k] - sum;
        }

        // Lower Triangular
        for (int k = i; k < n_; k++) {
            if (i == k)
                lower_[i][i] = 1; // Diagonal as 1
            else {

                // Summation of L(k, j) * U(j, i)
                double sum = 0;
                for (int j = 0; j < i; j++)
                    sum += (lower_[k][j] * upper_[j][i]);

                // Evaluating L(k, i)
                lower_[k][i] = (A_[k][i] - sum) / upper_[i][i];
            }
        }
    }

}

void linalg::ycalc(){
    double sum = 0;
    for(int i=0; i<n_; i++){
        for (int j=0; j<i; j++){

            sum = sum + lower_[i][j] * b_[j];
        }
        y_[i] = b_[i] - sum;
    }

}

void linalg::vcalc(){
    double sum = 0.0;
    for (int i=n_-1; i>=0; i--){
        sum =0;
        for (int j= i+1;j<n_; j--){
            sum = sum +upper_[i][j]*v_[j];

        }
        v_[i] = (y_[i] - sum) / upper_[i][i];
    }

}

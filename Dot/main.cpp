#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{

    double A, B, C, x, y, rez;

    cin >>x >>y >>A >>B >>C;

    rez = (abs(A*x + B*y +C)/(sqrt(A*A + B*B)));
    printf("%.10f", rez);
    return 0;
}

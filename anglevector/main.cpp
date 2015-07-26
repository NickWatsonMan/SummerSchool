#include <iostream>
#include <cstdio>
#include <cmath>

#define M_PI       3.14159265358979323846

using namespace std;

void getAngle(double x1, double y1, double x2, double y2) {

double cosx, x;
cosx = ((x1*x2 + y1*y2)/(sqrt(x1*x1 + y1*y1)*sqrt(x2*x2+y2*y2)));
    x = abs(acos(cosx));
    printf("%.10f", x);

}

int main()
{
    double x1, x2, y1, y2;
    cin >>x1 >>y1 >>x2 >>y2;
    getAngle(x1, y1, x2, y2);
    return 0;
}

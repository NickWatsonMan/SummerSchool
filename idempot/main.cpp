
#include <cstdio>
#include <iostream>

using namespace std;

int main(){

long int n, i, y, d;

cin >>n //вводим n - произведение двух чисел
i = 2;
while ((n%i)!=0) i++;
y = i;
d = n / y;
cout<<0 <<' ' <<1 <<' ';
i=d;
while (i<n)
{
    if ((i-1)%y ==0) cout <<i <<' ';
    if (((i+1) % y ==0 ) && (i < (n-1))) cout <<i+1 <<' ';
    i = i+d;
}
}

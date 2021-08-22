#include <iostream>
#include <cmath>
using namespace std;

double sinus(double x,double eps)
{
    double s=0;
    double t=x;
    double k=1;
    while(fabs(t)>eps)
    {
        s=s+t;
        t=t*((-x*x)/((k*2)*(k*2+1)));
        k++;
    }
    return s;
}

int main()
{
    double eps=0.000001;
    double x;
    cin>>x;
    cout<<sinus(x,eps);
}
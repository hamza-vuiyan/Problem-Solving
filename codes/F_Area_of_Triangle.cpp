#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;



double sqr(double n){
    
}
int main()
{
    double x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double area = .5* abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    cout << fixed << setprecision(4) <<  area << '\n';

return 0;
}
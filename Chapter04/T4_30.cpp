/* FileName: T4_30.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculates the diameter, perimeter, and area of a circle
 */
#include <iostream>

using namespace std;

int main()
{
double a,b,c,pi,r;
pi=3.14159;
cin>>r;
a=2*r;
b=2*pi*r*1.0;
c=pi*r*1.0*r*1.0;
cout<<"圆的直径为"<<a<<endl;
cout<<"圆的周长为"<<b<<endl;
cout<<"圆的面积为"<<c<<endl;





    return 0;
}

/* FileName: T6_19.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculation of the hypotenuse of a right triangle
 */
#include<iostream>
#include<cmath>
using namespace std;

double hypotenuse(double a,double b){
	double n;
	n=powl(a*a+b*b,0.5);
	return n;
}


int main(){
double a,b;
a=3.0;b=4.0;
cout<<hypotenuse(a,b)<<endl;
a=5.0;b=12.0;
cout<<hypotenuse(a,b)<<endl;

a=8.0;b=15.0;
cout<<hypotenuse(a,b)<<endl;


	
	 	return 0; 
}


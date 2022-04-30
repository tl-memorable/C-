/* FileName: T6_42.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate the distance between two points
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
using namespace std;

double distance(double x1,double y1,double x2,double y2){
	double a;
a=powl((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1),0.5);
	return a;
} 

int main(){double x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
cout<<distance(x1,y1,x2,y2);


	
	 	return 0; 
}


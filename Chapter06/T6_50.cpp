/* FileName: T6_50.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
using namespace std;

double tripleByValue(double count){
	double m,pi;
	m=count;
	m=3*count;
	return m;
}

double tripleByference(double count){
	count=count*3;
	
	return count;;
}


int main(){
double r;
cin>>r;
cout<<tripleByference(r);
cout<<tripleByference(r);
	

	
	 	return 0; 
}


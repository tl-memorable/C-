/* FileName: T6_53.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:maximum
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
using namespace std;

double maximum(double a,double b){
	if(a>b)return a;
	else return b;
}


int main(){
double a,b; 
cin>>a>>b;
cout<<maximum(a,b);

	
	 	return 0; 
}


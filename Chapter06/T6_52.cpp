/* FileName: T6_52.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:minimum
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
using namespace std;

double minimum(double a,double b){
	if(a>b)return b;
	else return a;
}


int main(){
double a,b; 
cin>>a>>b;
cout<<minimum(a,b);

	
	 	return 0; 
}


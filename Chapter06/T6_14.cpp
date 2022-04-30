/* FileName: T6_14.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:The number of specific decimal inputs
 */
#include<iostream>
#include <iomanip>
using namespace std;

double floor(double x){
	int n;
	n=x;
	return n;
}
double roundToHundredths(double x){
		double n;
	n=floor(x*100+0.5)/100;
	return n;
}
double roundToTenths(double x){
	double n;
n=floor(x*10+0.5)/10;return n;
}
double roundToThousandths(double x){
		double n;
	n=floor(x*1000+0.5)/1000;return n;
}

int main(){
	double a;
	while(a!=-1){
		cin>>a;
 	cout<<"input -1 to exit"<<endl;
	cout<<a<<endl;
	cout<<roundToTenths(a)<<endl;
	cout<<roundToHundredths(a)<<endl;
	cout<<roundToThousandths(a)<<endl;
	cin>>a;
	}

	
	 	return 0; 
}


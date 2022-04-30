/* FileName: T6_13.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Integer rounding of numbers
 */
#include<iostream>
#include <iomanip>
using namespace std;
double floor(double x){
	int n;
	n=x;
	return n;
}


int main(){
	double a=1;
	cout<<"input -1 to exit"<<endl;
		cin>>a;
 while(a!=-1){
 	cout<<"input -1 to exit"<<endl;
	cout<<a<<"    "<<floor(a+0.5)<<endl;
	cin>>a;
	}
	
	 	return 0; 
}


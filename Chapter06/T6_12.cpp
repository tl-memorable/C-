/* FileName: T6_12.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate the parking fee
 */
#include<iostream>
#include <iomanip>
using namespace std;
double calculateCharges(double h){
	double c=0;
	if(0<h&&h<=3){c=2;
	}
	else if(h>3&&h<=24){
		c=2+(1.0*h-3)*0.5;
		if(c>10)c=10;
	}
	return c;

}
int main(){
	double a[3],b[3],sum1,sum2;
	cin>>a[1]>>a[2]>>a[3];
	b[1]=calculateCharges(a[1]);
	b[2]=calculateCharges(a[2]);
	b[3]=calculateCharges(a[3]);
	sum1=a[1]+a[2]+a[3];
	sum2=b[1]+b[2]+b[3];
cout<<"Car"<<setw(20)<<"Hours"<<setw(20)<<"Charge"<<endl;
cout<<"1"<<setw(20)<<a[1]<<setw(20)<<b[1]<<endl;
cout<<"2"<<setw(20)<<a[2]<<setw(20)<<b[2]<<endl;
cout<<"3"<<setw(20)<<a[3]<<setw(20)<<b[3]<<endl;
cout<<"TOTAL"<<setw(16)<<sum1<<setw(20)<<sum2<<endl; 
	
	
	
	 	return 0; 
}


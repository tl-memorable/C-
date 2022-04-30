/* FileName: T4_13.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate miles per gallon
 */
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	double a=1,b,c,d,e=0,f=0,g;
	cout<<"Enter miles driven (-1 to quit):"<<endl;
	cin>>a;
	e=e+a;

	while(a!=-1){
	cout<<"Enter gallons use:"<<endl;
	cin>>b;
	f=f+b;
	c=(a*1.0)/(b*1.0);
	cout<<"MPG this trip:"<<setiosflags(ios::fixed) << setprecision(6)<<c<<endl;
	d=(e*1.0)/(f*1.0);
	cout<<"Total MPG:"<<setiosflags(ios::fixed) << setprecision(6)<<d<<endl;
		cout<<"Enter miles driven (-1 to quit):"<<endl;
	cin>>a;
	e=e+a;}
	
	
	
	 	return 0; 
}


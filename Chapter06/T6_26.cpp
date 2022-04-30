/* FileName: T6_26.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Celsius and Fahrenheit
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double fahrenheit(double a){
	double n;
	n=32+a*1.8;
	return n;
} 
int celsius(double a ){
	double n;
	n=(a-32)*1.0/1.8;
	return n;
}


int main(){
	cout<<"摄氏温度转化为华氏温度"<<endl; 
for(int i=1;i<=100;i++){
	cout<<i<<setw(30)<<fahrenheit( i )<<endl;
}
	cout<<"华氏度转化为摄氏温度"<<endl; 
for(int i=32;i<=212;i++){
	cout<<i<<setw(30)<<celsius(i)<<endl;
}
	
	 	return 0; 
}


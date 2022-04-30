/* FileName: T6_27.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:To find the minimum number of
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double min(double a,double b,double c){
	double d[3],m=210000000;
	d[1]=a;	d[2]=b;	d[3]=c;
	for(int i=1;i<=3;i++){
		if(d[i]<m){
			m=d[i];
		}
	}
	return m;
} 


int main(){
double a,b,c;
cin>>a>>b>>c;
cout<<min( a, b, c);

	
	 	return 0; 
}


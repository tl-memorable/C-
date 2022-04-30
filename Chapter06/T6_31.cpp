/* FileName: T6_31.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Greatest common divisor
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int gcd(int a,int b){
	int m,g;
	if(a>b)m=a;
	else m=b;
	for(int i=2;i<m;i++){
		if(a%i==0&&b%i==0){
			g=i;
		}
	}
	return g;
} 


int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
		
	
	


	
	 	return 0; 
}


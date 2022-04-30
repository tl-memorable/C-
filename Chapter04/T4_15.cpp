/* FileName: T4_15.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Referral fee calculator
 */
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
int a=5,b;
do{
	cout<<"Enter sales in dollars (-1 to end): "<<endl;
	cin>>a;
	b=200+0.09*a;
if(a!=-1){
	cout<<"Salary is:$"<<b<<endl;}
	
}while(a!=-1);
	
	
	
	 	return 0; 
}

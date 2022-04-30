/* FileName: T4_19.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Find the largest two numbers
 */
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
int largest=-99999,s=-99999,counter=0,number;
while(counter<10){
cin>>number;
if(number>largest){
s=largest;largest=number;}
if(number<largest){
if(number>s){s=number;};}
counter=counter+1;}
cout<<"最大的是"<<largest<<endl;
cout<<"第二大的是"<<s<<endl;
	

	

	
	 	return 0; 
}

/* FileName: T4_25.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Outputs a star square
 */
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
int n;
cin>>n;
for(int a=0;a<n;a++){
cout<<"*";}
cout<<endl;
for(int i=0;i<n-2;i++){
cout<<"*";for(int j=0;j<n-2;j++){
cout<<" ";}cout<<"*"<<endl;}
for(int b=0;b<n;b++){
cout<<"*";}

	
	
	
	 	return 0; 
}

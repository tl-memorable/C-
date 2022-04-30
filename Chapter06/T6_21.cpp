/* FileName: T6_21.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Check if the number is even
 */
#include<iostream>
#include<cmath>
using namespace std;
int iseven(int a){
	int v;
	if(a%2==0){
		v=1;
	}
	else v=0;
	return v;
} 


int main(){
int a[999],b,n;
cout<<"please enter your digital number."<<endl;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a[i];
	if(iseven(a[i])==1){
		cout<<"ture"<<endl;
	}else cout<<"false"<<endl;

}



	
	 	return 0; 
}


/* FileName: T7_10.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 23th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:
 */
 #include<algorithm>
 #include<array>
#include<iostream>
using namespace std;
int main(){
int m,i=0,r=0,l=0;
array<int,99>s;
cout<<"-1 to exit"<<endl;
cin>>s[i];
while(s[i]!=-1)
{m=s[i]*0.09+200;
s[i]=m;
    i++;
	cin>>s[i];
}
for(int z=0;z<=7;z++){
	for(int j=0;j<=i;j++){
	if(s[j]>=200+r&&s[j]<=300+r){
		l++;
	}

	
}
	cout<<200+r<<"-"<<300+r<<"га"<<l<<"ШЫ"<<endl;
	l=0;r=r+100; 

}
	

	
	 	return 0; 
}


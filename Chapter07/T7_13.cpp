/* FileName: T7_13.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 23th, 202
 * College:  School of Computer Science and Information Engineering
 * Function:
 */
 #include<algorithm>
 #include<array>
#include<iostream>
using namespace std;
int main(){
int s=0,b=20;
array<int,20>a;
for(int i=0;i<b;i++){
	cin>>a[i];
	for(int j=i-1;j>=0;j--){
		if(a[i]==a[j]){
		s++;
		i=i-1;b--;}
	}
}
for(int i=0;i<20-s;i++){
cout<<a[i]<<",";

}


return 0;
}
	





/* FileName: T7_18.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 23th, 202
 * College:  School of Computer Science and Information Engineering
 * Function:
 */
 #include<algorithm>
 #include<vector>
 #include<array>
 #include<ctime>
 #include<cstdlib>
#include<iostream>
using namespace std;
int main(){
	int a=0,b=0;
array<array<int,5>,4>slaes;
for(int i=0;i<5;i++){
	for(int j=0;j<4;j++){
		cin>>slaes[i][j];
		a=a+slaes[i][j];
		cout<<slaes[i][j]<<"   ";
	}
	cout<<a;
	a=0;
}
for(int j=0;j<4;j++){
	for(int i=0;i<5;i++){
		slaes[i][j];
		b=b+slaes[i][j];
	}
	cout<<b<<"   ";
	b=0;
}

return 0;
}
	





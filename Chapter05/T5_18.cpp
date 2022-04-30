/* FileName: T5_18.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 27th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Print binary, octal, decimal, hexadecimal numbers
 */
#include <iostream>
#include<iomanip>
#include<cmath>


using namespace std;

int main()
{ 
int n,a[257],b=0,c=0;
cout<<"十进制"<<setw(20)<<"二进制"<<setw(20)<<"八进制"<<setw(20)<<"十六进制"<<endl;
for(int i=1;i<257;i++){
    cout<<dec<<i;
   	n=i;b=0;
   	cout<<setw(20);
while(n>0){
	b=b+1;
	a[b]=n%2;
	n=n/2;
	}
	for(int j=b;j>0;j--){
		cout<<a[j];
	}
	
    cout<<setw(20)<<oct<<i;
    cout<<setw(20)<<hex<<i<<endl;
}






	
    return 0;
}

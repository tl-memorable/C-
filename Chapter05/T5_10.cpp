/* FileName: T5_10.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 26th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate the factorial of up to 5
 */
#include <iostream>

using namespace std;

int main()
{ 
int a[5];
a[0]=1;
for(int i=1;i<=5;i++){
	a[i]=a[i-1]*i;
}
cout<<"1!"<<"\t"<<"2!"<<"\t"<<"3!"<<"\t"<<"4!"<<"\t"<<"5!"<<endl;
for(int i=1;i<=5;i++){
	cout<<a[i]<<"\t";
}
cout<<endl;




	
    return 0;
}

/* FileName: T5_13.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 26th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Prints a bar chart
 */
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{ 
int a[5];

for(int i=0;i<5;i++){
cin>>a[i];	
} 
for(int i=0;i<5;i++){
	cout<<'*'<<setfill('*')<<setw(a[i])<<' '<<endl; 
}




	
    return 0;
}

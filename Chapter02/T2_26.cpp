/* FileName: T2_26.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 5th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Draw a chessboard pattern
 */
#include<iostream>
using namespace std;
int main(){
	
cout<<"* * * * * * * *"<<endl;//八条语句的输出 
cout<<" * * * * * * * *"<<endl;
cout<<"* * * * * * * *"<<endl;
cout<<" * * * * * * * *"<<endl;
cout<<"* * * * * * * *"<<endl;
cout<<" * * * * * * * *"<<endl;
cout<<"* * * * * * * *"<<endl;
cout<<" * * * * * * * *"<<endl;

for(int i=1;i<9;i++){
	if(i%2==0){
		cout<<" * * * * * * * *"<<endl;//尽可能少的语句 
	}
	else cout<<"* * * * * * * *"<<endl;
}



	return 0; 
}


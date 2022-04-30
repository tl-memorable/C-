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
srand((unsigned)time(NULL));
int a,b,c[20]={0};
for(int i=0;i<1000;i++){
	a=rand()%6+1;
	b=rand()%6+1;
	c[a+b]++;
}
for(int i=0;i<=12;i++){
	cout<<i<<"出现了"<<c[i]<<"次"<<endl;
}

return 0;
}
	





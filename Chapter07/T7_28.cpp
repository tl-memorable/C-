/* FileName: T7_28.cpp
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
#include<string>
using namespace std;

bool find(string *str,int n){
	if(n<=1)return 1;
	else if(str[0]==str[n-1])return find(str+1,n-2);
	else return 0;
}
int main(){
int len; 
string str="abccba";
len=str.length();
if(find(str,len)){
cout<<find(str,strlen(str)) ? "yes" :"no";}
return 0;
}
	





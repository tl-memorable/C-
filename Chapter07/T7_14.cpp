/* FileName: T7_14.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 23th, 202
 * College:  School of Computer Science and Information Engineering
 * Function:
 */
 #include<algorithm>
 #include<vector>
 #include<array>
#include<iostream>
using namespace std;
int main(){
int s=0,b=20;
int a[b];
for(int i=0;i<b;i++){
	cin>>a[i];

}
vector<int>v(a,a+20);
sort(v.begin(),v.end());
v.erase(unique(v.begin(),v.end()),v.end());
for(int i=0;i<v.size();i++){
	cout<<v[i]<<",";
}




return 0;
}
	





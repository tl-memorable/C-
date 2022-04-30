/* FileName: T4_32.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:The side of a triangle
 */
#include <iostream>

using namespace std;

int main()
{
double a,b,c,d,e;
cin>>a>>b>>c;
if(a>0||b>0||c>0){
    if(a+b>c&&b+c>a&&a+c>b){
        cout<<"这能构成一个三角形"<<endl;
    }
}
else {
    cout<<"这不能构成一个三角形"<<endl;
}




    return 0;
}

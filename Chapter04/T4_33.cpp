/* FileName: T4_33.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:The edge of a right triangle
 */
#include <iostream>

using namespace std;

int main()
{
double a,b,c,d,e;
cin>>a>>b>>c;
if(a>0||b>0||c>0){
    if(a+b>c&&b+c>a&&a+c>b){
        cout<<"���ܹ���һ��������"<<endl;
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
            cout<<"���ܱ�ʾֱ�ǵ�������"<<endl;
        }
    }else {
    cout<<"�ⲻ�ܹ���һ��������"<<endl;
}
}





    return 0;
}

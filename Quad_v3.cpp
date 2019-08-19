#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int determinant(float d)
{
    if(d<0)
    {
        return 0;
    }
    else{
        return 1;
    }
}
void findRoots(int a,int b,int c,int d)
{
    if(d==0)
    {
        cout<<"Tmaginary roots, can't calculate"<<endl;
    }
    else
    {
        int r1= ((-b)+(sqrt(d)))/(2*a);
        int r2= ((-b)-(sqrt(d)))/(2*a);
        cout<<"Roots are"<<endl<<"R1:"<<r1<<endl<<"R2:"<<r2<<endl;
    }
}
int main()
{
    int a,b,c,n=0;
    float d,e;
    do
    {
        cout<<"Enter integer inputs for values of a,b,c"<<endl;
        cin>>a>>b>>c;
        if(a==0)
        {
            n=1;
            cout<<"Unaccepted values"<<endl;
        }
        else
        {
            n=0;
        }
    }while(n==1);
    d=(b*b)-(4*a*c);
    e=determinant(d);
    findRoots(a,b,c,e);
    return 0;
}

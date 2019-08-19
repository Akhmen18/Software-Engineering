#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void findRoots(int a,int b,int c,int d)
{
    if(a==0)
    {
        if(b==0)
        {
            cout<<"It isn't an equation, just a single number now";
        }
        else
        {
            int r=((-c)/b);
            cout<<"Root is"<<r<<endl;
        }
    }
    else if(d>0 && a!=0)
    {
        int r1= ((-b)+(sqrt(d)))/(2*a);
        int r2= ((-b)-(sqrt(d)))/(2*a);
        cout<<"Roots are"<<endl<<"R1:"<<r1<<endl<<"R2:"<<r2<<endl;
    }
    else if(d==0 && a!=0)
    {
        int r=((-b)/(2*a));
        cout<<"Root is"<<r<<endl;
    }
    else if(d<0 && a!=0)
    {
        d = -1*d;
        float f=sqrt(d);
        cout<<-b<<"+"<<f<<"i"<<"/"<<2*a<<endl;;
        cout<<-b<<"-"<<f<<"i"<<"/"<<2*a<<endl;
    }
}
int main()
{
    int a,b,c;
    float d;

    cout<<"Enter integer inputs for values of a,b,c (upto 3 digits ONLY!)"<<endl;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    findRoots(a,b,c,d);
    return 0;
}
//New Variant. This handles 'a' too

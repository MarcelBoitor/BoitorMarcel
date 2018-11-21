#include <iostream>

using namespace std;

int prim(int a){

int p=1;
if((a<2)||((a>2))&&(a%2==0)))
p=0;
else
{
    if(a>7)

    int d=3;
}
while(d*d<=a)&&(a%d!=0)
    d=d+2;
if(a%2==0)
    p=0;
return p;
}


int pperfect (int a)
{
    int i=0;
    while(i*i<a)
        i++;
    if(i*i==a)
        return 1;
    else return 0;
}

void citire(int &l, int v[100]){
cout<<"Lungimea sirului este: ";
cin>>l;
for(int i=0;i<l;i++)
    cout<<v[i]<< " ";

}

int main()
{
    int n, x[100],y[100],m=0,pp=0,s=0;
    citire(n,x);
    for(int i=0;i<n;i++)
    {
        if(prim(x[i]))==1)
        y[m++]=x[i];
        if pperfect(x[i])
            pp++;
    }

    return 0;
}

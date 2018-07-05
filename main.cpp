#include <iostream>

using namespace std;

int main()
{int n,p,s,uc;
    cout<<"Introduceti numarul:";
    cin>>n;
    p=1;
    s=0;
    n=n/10;
    while(n>10)
    {
        uc=n%10;
        s=s+uc;
        p=p*uc;
        n=n/10;
    }
    cout<<endl<<endl<<endl<<"Produsul este:"<<p<<endl<<"Suma este:"<<s<<endl<<endl<<endl;
    return 0;
}

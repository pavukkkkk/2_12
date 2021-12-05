#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
    int a,s=1;
    do{
        cin>>a;
        if (a%10==0 && a!=0){
            s*=a;
        }
    }
    while (a%13!=0);
    if (a%10==0 && a!=0){
        s/=a;
    }
    cout<<s<<endl;
    
}

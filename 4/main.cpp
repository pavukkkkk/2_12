#include <iostream>
#include <iomanip>
using namespace std;

bool t(int *a){
    
    if (*a<1){
        *a=0;
        return true;
    }
    return false;
}

bool parametr(int *a, int *b, int *c){
    return (t(a) || t(b) || t(c));
    
}


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<boolalpha<<parametr(&a, &b, &c)<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
    
}

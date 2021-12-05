#include <iostream>
#include <iomanip>
using namespace std;

int* read(int n) {
    int* m = new int [n];
    for (int i = 0; i < n; i++) {
        cin>>m[i];
    }
    return m;
}


void re_place(int *m, int n, int last){
    for (int i =0; i<n; i++){
        if (m[i]<0){
            m[i]=last;
        }
    }
}

void pr_int(int *m, int n){
    for (int i =0; i<n; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}




int main()
{
    
    int n, last;
    cin >> n;
    int *m = read(n);
    last = m[n-1];
    re_place(m,n,last);
    pr_int(m,n);
    delete[] m;
}

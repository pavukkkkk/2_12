#include <iostream>
#include <iomanip>
using namespace std;
int lastneg=0;

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

void find(int *m, int n){
    for (int i =0; i<n; i++){
        if (m[i]<0){
            lastneg=m[i];
        }
}
}



int main()
{
    
    int n;
    cin >> n;
    int *m = read(n);
    find(m,n);
    if (lastneg<0){
        re_place(m,n,lastneg);
    }
    pr_int(m,n);
    delete[] m;
}

#include <iostream>
#include <iomanip>
using namespace std;

int** vvod(int n, int k) {
    int** m = new int* [n];
    cout << "vvedite maricu: " << endl;
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
        for (int j = 0; j < k; j++) {
            cin >> m[i][j];
        }
    }
    return m;
}

void vivodChet(int** m, int n, int k) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (m[i][j]%2==0){
                cout << "("<<i<<";"<<j<<")" <<endl;
        }
        }
    }
}

void deleteArray(int **&table, int n, int m)
{
    for (int i = 0; i < n; i++)
        delete[] table[i];
    delete[] table;
    table = nullptr;
}



int main()
{
    cout<<"vvedite razmer matrici: "<<endl;
    int n, k;
    cin >> n>>k;
    int **m = vvod(n,k);
    vivodChet(m,n,k);
    deleteArray(m, n, k);
}

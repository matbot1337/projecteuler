#include<iostream>
#include<bibliotek.h>
using namespace std;
int main () {
int n = 10001;
int c = 1;
int cc = 1;
int primtal = 1;
while(c < n){
    if(erprimtal(cc) == 1){
        c = c + 1;
        primtal = cc;
    }
    cc = cc + 1;
}

cout << "Primtal nummer " << n << " er: " << primtal << endl;
// cout << erprimtal(100) << endl;

return 0;
}

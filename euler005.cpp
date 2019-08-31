#include<iostream>
#include<bibliotek.h>
using namespace std;

int main() {
int n = 20*19*17*13*11*7*3;
int nstep = 20;
while(  n%2  != 0 ||
        n%3  != 0 ||
        n%4  != 0 ||
        n%5  != 0 ||
        n%6  != 0 ||
        n%7  != 0 ||
        n%8  != 0 ||
        n%9  != 0 ||
        n%10 != 0 ||
        n%11 != 0 ||
        n%12 != 0 ||
        n%13 != 0 ||
        n%14 != 0 ||
        n%15 != 0 ||
        n%16 != 0 ||
        n%17 != 0 ||
        n%18 != 0 ||
        n%19 != 0 ||
        n%20 != 0 ) {
            n = n + nstep;
        }
cout << "Det mindste positive tal, "
        "som kan er deleligt med alle tal "
        "fra 1 til 20 er lig: " << n << endl;
return 0;
}

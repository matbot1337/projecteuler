#include <iostream>
#include <bibliotek.h>
using namespace std;

int main() {
int n = 4000000;
int sum = 0;
int x = 1;
int y = 2;
while(x<n && y<n){
    if(mod(x,2)==0){
        sum = sum + x;
    }
    if(mod(y,2)==0){
        sum = sum + y;
    }
    x = x + y; // bliver altid Fibonacci-tal!
    y = x + y; // dem begge to.
    // Hvis x eller y er lige tal, så skal de lægges til sum.
    // For lige tal er mod(tallet,2) = 0
}
cout << "Summen af Fibonacci tal, som er lige og mindre end 4 millioner er lig: " << sum << endl;
// Aquasnap kan varmt anbefales
return 0;
}

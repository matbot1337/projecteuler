#include<iostream>
#include<bibliotek.h>
using namespace std;

int main() {
    int x = 100;
    int y = 100;
    int z = 0;
    while(x<1000){
        y = 100;
        while(y<1000){
            if(x*y>z && x*y - intflip(x*y) == 0){
                z = x * y;
            }
        y = y + 1;
        }
        x = x + 1;
    }
cout << "Det største palindrom, som er lig" << endl;
cout << "produktet af to trecifrede tal," << endl;
cout << "som hver er mindre end 1000 er lig: " << z << endl;
return 0;
}

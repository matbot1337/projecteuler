#include<iostream>
using namespace std;

// Modulus, rest, y/x = n + rest

int mod(int y,int x) {
while(y>=0) {
    y = y - x;
}
return y + x;
}

int main() {
int n = 1000;
int c = 1;
int sum = 0;
while(c<n){
    if(mod(c,3)==0){
        sum = sum + c;
    }
    else if(mod(c,5)==0){
        sum = sum + c;
    }
c = c + 1; // c += 1
}
cout << "Summen af heltal mindre end 1000 og delelige med 3 er lig: " << sum << endl;
return 0;
}

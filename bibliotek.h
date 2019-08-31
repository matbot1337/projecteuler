int mod(int y,int x) {
while(y>=0) {
    y = y - x;
}
return y + x;
}

int longlongmod(long long y,long long x) {
while(y>=0) {
    y = y - x;
}
return y + x;
}

long long largestprimefactor(long long n) {
long long y = 1;
long long x = 2;
while(n%x == 0){
    n = n / x;
}
if(n==1) {
y = 2;
}
x = 3;
while(x * x < n){
    while(n%x == 0){
        n = n / x;
        y = x;
    }
    x = x + 2;
}
    if(y>n) {
    return y;
    }
    else {
        return n;
    }
}

int intflip(int x) {
int y = 0;
while(x>0) {
        y = y*10 + mod(x,10);
        x = x - mod(x,10);
        x = x / 10;
    }
    return y;
}

int erprimtal(long long x) {
long long c = 2;
while(c*c<=x){
    if(x%c==0){
        return 0;
        c = x;
    }
    c = c + 1;
}
if(c < x){
    return 1;
}
}

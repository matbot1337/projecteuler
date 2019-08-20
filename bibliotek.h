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
while(longlongmod(n,x) == 0){
    n = n / x;
}
if(n==1) {
y = 2;
}
x = 3;
while(x * x < n){
    while(longlongmod(n,x) == 0){
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

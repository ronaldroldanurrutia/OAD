#include<iostream>

using namespace std;

int m=0;

int raisetower(int n,int k){
    if(k==0){
        return 1;
    }
    return n*raisetower(n,k-1);
}



string reversse(string str){
    if(m==(str.size())/2){
        return str;
    }
    char elemento=str[str.size()-m-1];
    str[str.size()-m-1]=str[m];
    str[m]=elemento;
    m++;
    return reversse(str);

}

int gcd(int n, int m){
    if(m==0){
        return n;
    }
    if(n<m){
        return gcd(m,n);
    }
    return gcd(m,n%m);
}

int c(int n,int k){
    if(n==k || k==0){
        return 1;
    }
    return c(n-1,k-1)+c(n-1,k);

}

void diezfilas1(int n,int k){
    cout << c(n,k) <<" ";
    if(k==n){
        return;
    }
    diezfilas1(n,k+1);
}
void diezfilas(int n,int m){
    diezfilas1(n,0);
    if(n==m){
        return;
    }
    cout << endl;
    diezfilas(n+1,m);
}

void tenfilas(void){
    diezfilas(0,9);
}

int main(){
    cout << raisetower(3,4) << endl;
    cout << reversse("death") << endl;
    cout << gcd(27,45) << endl;
    cout << c(10,5) << endl;
    tenfilas();
    return 0;
}

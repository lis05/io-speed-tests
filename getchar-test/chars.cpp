#include<bits/stdc++.h>
using namespace std;

int skip(){
    int c=getchar();
    while(c==' '||c=='\n')c=getchar();
    return c;
}

template<typename INT>
void read_int(INT&x){
    x=0;
    bool sign=1;
    int c=skip();
    if(c=='-')sign=0;
    else x+=c-'0';
    for(c=getchar();'0'<=c&&c<='9';c=getchar())x*=10,x+=c-'0';
    if(sign==0)x*=-1;
}

signed main(){
    int n;
    read_int(n);
    while(n--){
        char x;
        x=skip();
    }
}
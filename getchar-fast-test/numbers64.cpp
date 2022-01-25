#include<bits/stdc++.h>
using namespace std;

int getchar_fast(){
    static char buf[8192];
    static int len=0,pos=0;
    if(pos==len)
        pos=0,len=fread(buf,1,8192,stdin);
    if (pos==len)
        return -1;
    return buf[pos++];
}

int skip(){
    int c=getchar_fast();
    while(c==' '||c=='\n')c=getchar_fast();
    return c;
}

template<typename INT>
void read_int(INT&x){
    x=0;
    bool sign=1;
    int c=skip();
    if(c=='-')sign=0;
    else x+=c-'0';
    for(c=getchar_fast();'0'<=c&&c<='9';c=getchar_fast())x*=10,x+=c-'0';
    if(sign==0)x*=-1;
}

signed main(){
    int n;
    read_int(n);
    while(n--){
        long long x;
        read_int(x);
    }
}
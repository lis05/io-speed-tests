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
// fastio by lis05
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
template<typename FLOAT>
void read_float(FLOAT&x){
    x=0;
    bool sign=1;
    int c=skip();
    if(c=='-')sign=0;
    else x+=c-'0';
    for(c=getchar_fast();'0'<=c&&c<='9';c=getchar_fast())x*=10,x+=c-'0';
    FLOAT point=1;
    if(c=='.'){
        for(c=getchar_fast();'0'<=c&&c<='9';c=getchar_fast())x*=10,x+=c-'0',point/=10;
    }
    x*=point;
    if(sign==0)x*=-1;
}
void read_string(string&x){
    x.clear();
    int c=skip();
    for(;c!=' '&&c!='\n'&&c!=EOF;c=getchar_fast()){
        x+=(char)c;
    }
}

struct fastio{
    string __precision="%.15";
    void flush(){}
    void precision(int x){
        __precision="%."+to_string(x);
    }
};
template<typename INT>
fastio&operator>>(fastio&io,INT&x){
    read_int(x);
    return io;
}
fastio&operator>>(fastio&io,float&x){
    read_float(x);
    return io;
}
fastio&operator>>(fastio&io,double&x){
    read_float(x);
    return io;
}
fastio&operator>>(fastio&io,long double&x){
    read_float(x);
    return io;
}
fastio&operator>>(fastio&io,bool&x){
    int y;
    read_int(y);
    x=y;
    return io;
}
fastio&operator>>(fastio&io,char&x){
    x=(char)skip();
    return io;
}
fastio&operator>>(fastio&io,string&x){
    read_string(x);
    return io;
}
template<typename A,typename B>
fastio&operator>>(fastio&io,pair<A,B>&x){
    io>>x.first>>x.second;
    return io;
}


fastio&operator<<(fastio&io,int x){
    printf("%d",x);
    return io;
}
fastio&operator<<(fastio&io,unsigned int x){
    printf("%u",x);
    return io;
}
fastio&operator<<(fastio&io,long long x){
    printf("%lld",x);
    return io;
}
fastio&operator<<(fastio&io,unsigned long long x){
    printf("%llu",x);
    return io;
}
fastio&operator<<(fastio&io,float x){
    printf((io.__precision+"f").c_str(),x);
    return io;
}
fastio&operator<<(fastio&io,double x){
    printf((io.__precision+"lf").c_str(),x);
    return io;
}
fastio&operator<<(fastio&io,long double x){
    printf((io.__precision+"Lf").c_str(),x);
    return io;
}
fastio&operator<<(fastio&io,char x){
    printf("%c",x);
    return io;
}
fastio&operator<<(fastio&io,string&x){
    printf("%s",x.c_str());
    return io;
}
fastio&operator<<(fastio&io,char x[]){
    printf("%s",x);
    return io;
}
fastio&operator<<(fastio&io,const char x[]){
    printf("%s",x);
    return io;
}
template<typename A,typename B>
fastio&operator<<(fastio&io,pair<A,B>&x){
    io<<x.first<<" "<<x.second;
    return io;
}
fastio fio;
#define cin fio 
#define cout fio

signed main(){
    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
    }
}
/*************************************************************************
	> File Name: 41.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 08 Dec 2024 07:13:31 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
#define MAX_N 1000
#define MAX_K 10
class BigInt:public vector<int>{
public:
    BigInt(){push_back(0);}
    BigInt(int x){
        push_back(x);
        process_digit();
        return ;
    }
    BigInt &operator+=(const BigInt &a){
        for(int i=0;i<a.size();i++){
            if(i>=size())push_back(a[i]);
            else at(i)+=a[i];
        }
        process_digit();
        return *this;
    }
    BigInt operator+(const BigInt &a){
        BigInt ret=(*this);
        ret+=a;
        return ret;
    }
    void process_digit(){
        for(int i=0;i<size();i++){
            if(at(i)<10)continue;
            if(i+1==size())push_back(0);
            at(i+1)+=at(i)/10;
            at(i)%=10;
        }
    }
};
ostream &operator<<(ostream &out,const BigInt &a){
    for(int i=a.size()-1;i>=0;i--){
        out<<a[i];
    }
    return out;
}
BigInt f[2][MAX_K+5][MAX_K+5];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++)f[1][i][i]=1;
    for(int ws=2;ws<=n;ws++){
        for(int i=1;i<=k;i++){
            for(int j=1;j<=k;j++){
                f[ws%2][i][j]=0;
                for(int l=1;l<=k;l++){
                    if(l==j)continue;
                    f[ws%2][i][j]+=f[(ws-1)%2][i][l];
                }
            }
        }
    }
    BigInt ans=0;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            if(i==j)continue;
            ans+=f[n%2][i][j];
        }
    }
    cout<<ans<<endl;
    return 0;
}

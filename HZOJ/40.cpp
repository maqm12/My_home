/*************************************************************************
	> File Name: 40.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Sun 08 Dec 2024 06:16:11 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
#define MAX_N 500
class BigInt : public vector<int>{
public:
    BigInt(){push_back(0);}
    BigInt(int x){
        push_back(x);
        process_digit();
        return ;
    }
    BigInt &operator+=(const BigInt &a){
        for(int i=0;i<a.size();i++){
            if(i>=size())at(i)=a[i];
            else at(i)+=a[i];
        }
        process_digit();
        return *this;
    }
    BigInt operator+(const BigInt &a){
        BigInt ret(*this);
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
BigInt f[MAX_N+5];
int main(){
    int n;
    cin>>n;
    f[0]=f[1]=0;
    f[2]=f[3]=1;
    for(int i=4;i<=n;i++){
        f[i]=f[i-2]+f[i-3];
    }
    cout<<f[n]<<endl;
    return 0;
}

/*************************************************************************
	> File Name: P1050.cpp
	> Author: maqm 
	> Mail: 3244146481@qq.com 
	> Created Time: Tue 10 Dec 2024 09:25:30 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class BigInt:public vector<int>{
public:
    BigInt(){push_back(0);}
    BigInt(int size,int val):vector<int>(size,val){}
    BigInt(int x){
        push_back(x);
        process_digit();
        return ;
    }
    BigInt(string &s,int k){
        for(int i=0,j=s.size()-1;i<k;i++,j--){
            push_back(s[j]-'0');
        }
    }
    BigInt operator*(const BigInt &a){
        BigInt ret(min(MaxLen,int(size()+a.size()-1)),0);
        for(int i=0;i<size();i++){
            for(int j=0;j<a.size();j++){
                if(i+j>=MaxLen)continue;
                ret[i+j]+=at(i)*a[j];
            }
        }
        ret.process_digit();
        return ret;
    }
    BigInt &operator *=(int x){
        for(int i=0;i<size();i++){
            at(i)*=x;
        }
        process_digit();
        return *this;
    }
static int MaxLen;
private:
    void process_digit(){
        for(int i=0;i<size();i++){
            if(at(i)<10)continue;
            if(i+1<MaxLen){
                if(i+1==size())push_back(0);
                at(i+1)+=at(i)/10;
            }
            at(i)%=10;
        }
        return ;
    }
};
ostream &operator<<(ostream &out,const BigInt &a){
    for(int i=a.size()-1;i>=0;i--){
        out<<a[i];
    }
    return out;
}
int BigInt::MaxLen=0;
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    BigInt::MaxLen=k;
    BigInt n(s,k);
    BigInt pre_y=n,y;
    vector<int> arr;
    for(int i=0;i<n.size();i++){
        int cnt=1;
        y=pre_y;
        while((y*n).at(i) != n[i]){
            y=y*pre_y;
            cnt++;
            if(cnt==11)break;
        }
        if(cnt==11){
            cout<<"-1"<<endl;
            return 0;
        }
        arr.push_back(cnt);
        pre_y=y;
    }
    BigInt ans=1;
    for(int i=0;i<arr.size();i++){
        ans*=arr[i];
    }
    cout<<ans<<endl;
    return 0;
}

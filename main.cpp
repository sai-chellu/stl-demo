#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int > v1={10,20,30,40,50};
    int sum=0;
    cout<<"v1:{";
    for_each(begin(v1),end(v1),[&sum]( const auto& x){cout<<x<<" "; sum += x;});
   
    cout<<"}"<<endl;
    cout<<"Sum of Vector Elements:"<<sum<<endl;
    cout<<endl;

    return 0;
}
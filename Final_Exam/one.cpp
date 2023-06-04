#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s,x;
        cin>>s>>x;
        while(true){
            int found = s.find(x);
            // jodi pawa jai tahole if e dhukbe
            if(found != -1){
                s.replace(found, x.size(), "$");
            }else{
                break;   //na paile while loop  break kore dibe.
            }
        }
        // if(s.find(x)){
        //     s.replace();
        // }
        cout<<s<<endl;
    }
    return 0;
}

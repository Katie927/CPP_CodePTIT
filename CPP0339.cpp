#include<iostream>
#include<string>
#include<map> 

using namespace std; 

int main(){ 
    int t; 
    cin>>t;
    while(t--){ 
        string s; 
        cin>>s; 
        int l=s.length(); 
        map<char,char>mp; 
        for(int i=0;i<l;i++){ 
            mp[s[i]]++; 
        } 
        int sum=0; 
        for(int i=0;i<l;i++){ 
            if(mp[s[i]]>1){ 
                sum+=(mp[s[i]]*(mp[s[i]]-1)/2); 
                mp[s[i]]=0; 
            } 
        } 
        cout<<sum+l<<endl; 
    } 
}


// #include<iostream> 
// #include<string> 

// using namespace std; 
// int main(){
//     int test; 
//     cin>>test; 
//     string str; 
//     while(test--){ 
//         cin>>str; 
//         int x=str.size(); 
//         int dem=0; 
//         for(int i=0;i<x;i++){ 
//             for(int j=i;j<x;j++){ 
//                 if(str[i]==str[j]) dem++; 
//             } 
//         } 
//         cout<<dem<<endl; 
//     } 
// }
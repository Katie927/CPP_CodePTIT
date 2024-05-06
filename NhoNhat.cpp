#include<iostream>
#include<string>

using namespace std;

void Dost()
{
    int m , s;
    cin>>m >>s;
    string a = "", b = "";
    if(m == 1 && s == 0)        cout<<"0 0";
    else if(s == 0 || s>9*m)    cout<<-1<<" "<<-1;
    else{
        //  string.insert(pos , len , char);
        a.insert(0 , s/9 , '9');
        b.insert(0 , s/9 , '9');
        s %= 9;
    //    cout<<(char)s<<"\t"<<s<<endl;
        if(s > 0){
            a.insert(0 , 1 , (char)(s+ '0'));
            b.push_back((char)(s+'0'));
        }
        a.insert(0,m-a.size(),'0');
		b.insert(b.size(),m-b.size(),'0');
        if(a[0]=='0'){
			a[0]='1';
			int p=1;
			while(a[p]=='0'){
				p++;
				if(p==a.size()) break;
			}
			a[p]--;
		}
        cout<<a<<" "<<b;
    }
}

int main(){
    Dost();
    return 0;
}
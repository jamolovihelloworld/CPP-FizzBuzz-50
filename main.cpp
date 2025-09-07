#include <bits/stdc++.h>
using namespace std;int main(){for(int i=1;i<=50;++i){string s="";if(i%3==0)s+="Fizz";if(i%5==0)s+="Buzz";cout<<(s.empty()?to_string(i):s)<<"\n";}}

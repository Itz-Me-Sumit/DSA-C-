#include <iostream>
#include <stack>
using namespace std;

int main(){
    
    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(34);
    s.push(443);

    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    

}
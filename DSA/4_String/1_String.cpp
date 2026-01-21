// initlize String

#include<iostream>
using namespace std;

int main(){

    string s = "sumit";
    cout<<s;

} 


// get Multiple Words

#include <iostream>
using namespace std;

int main(){

    string s;
    
    getline(cin , s);

    cout<<s<<endl;
    cout<<"Size : "<<s.size();
}

// Srting Concatenation

#include <iostream>
using namespace std;

int main(){

    string s1 , s2;
    
    getline(cin , s1);
    getline(cin , s2);

    string forever = s1 +" " + s2;

    cout<<forever<<endl;

    cout<<s1.append(s2);

}


// String Methods

#include <iostream>
using namespace std;

int main(){

    string s1 = "Sumit";
    string s2 = "Kumar";
    string s3 = "Sumitkumar";

    s1.push_back(' ');
    s1.push_back('K');
    s1.push_back('u');

    cout<<s1<<endl;

    s3.pop_back();
    s3.pop_back();
    cout<<s3<<endl;

}


// Escape Charector : " / "

#include <iostream>
using namespace std;

int main(){

    string s = "I'm Sumit \"Kumar\" ";

    cout<<s<<endl;

}

// sub-string

#include <iostream>
using namespace std;

int main(){

    string s = "SumitKumar";

    cout<<s.substr(1,3);

}


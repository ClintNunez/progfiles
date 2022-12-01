#include <iostream>
#include <string>
#include <queue>
#include <map>
using namespace std;

/*
4 3
<tag1 value = "HelloWorld">
<tag2 name = "Name1">
</tag2>
</tag1>

tag1.tag2~name
tag1~name
tag1~value


--pseudocode

queue<string> qu; //idk
map<string, string> mp; // will be used to hold the values

while(cin >> s)

    string cur;

    if(s[0] == '<')
        if(s[1] == '/')
            while(!cur.empty() && )
            

        else 
            remove(0,1);
            if(cur.empty())
                cur = s + "."
            

    } else if(s[0] == "=") {
        cin >> s;
        s.erase(0,1);
        while(s.back == '"' || s.back == '>')
            s.pop_back();

        mp[cur] = s; // will save the string to the key cur

        // will append the the current tag the string "~nameofvariable"
        cur = cur + "~" + s;
    } else {
        
    }
*/




int main() {
    int n, q;
    string line;
    



    return 0;
}

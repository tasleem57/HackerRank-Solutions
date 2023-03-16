#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>  
using namespace std;


string find_val(vector<string> &s, string to_find, const char del){
    string ans;
    stringstream ss(to_find); 
    std::size_t pos = ss.str().find("~", 0);

    std::string search = ss.str().substr(0, pos);
    string val = ss.str().substr(pos + 1);

    stringstream subss(search);
    std::deque<std::string> tags;
    std::deque<std::string> live_tags;
    
    std::stringstream sssub (search);
    string item;
    while (getline(sssub, item, del)) {
        tags.push_back (item);
    }
    
    for (auto c:s){
        int tags_type = c.find("/",0);
        if (tags_type == string::npos) {
            live_tags.push_front( c.substr(1,  c.find(" ")-1));
        }

        if (c.find(' ' + val) != string::npos &&
            tags.size()==1 && 
            c.substr(1, tags[0].size()) == tags[0]  &&
            c.substr(c.find(val), val.size()) == val && 
            tags[0] == live_tags[0] &&
            std::count(search.begin(), search.end(), '.') + 1 == live_tags.size() )
        
        {
            string tmp;
            tmp = c.substr(c.find(val ) );
            tmp = tmp.substr(tmp.find('"') +1 );
            return tmp.substr(0, tmp.find('"'));
        }
        else if ( c.substr(1, tags[0].size()) == tags[0] && tags.size() > 1 ){
            tags.pop_front();
        }

        
         if (tags_type != string::npos) {
            live_tags.pop_front();
        }
    }
    
    return "Not Found!";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q ;cin >> n >> q; 
    cin >> ws;
    vector <string > v ;
    for (int i; i < n ; i++){
        string tmp;
        getline(cin, tmp);
        v.push_back(tmp);
    }
    const char  del = '.';
    for (int i; i < q ; i++){
        string tmp2;
        cin >> tmp2;
        string ans;
        ans = find_val(v, tmp2, del);
        cout<< ans + "\n";
    }
    
    return 0;

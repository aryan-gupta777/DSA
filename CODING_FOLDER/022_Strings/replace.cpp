#include <bits/stdc++.h> 
using namespace std;
int main()
 {
    string str="hello world !";
    
    //int s = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {

            str.replace(i,1,"@40");

          // s++;  // Increment 's' by the length of the replacement string
        } else {
            // s++;
        }
    }
    cout<<str;
}
// The syntax of std::string::replace() is as follows:
                   
// string& replace( pos, cont, str);

// Parameters of String replace()

// pos: Starting index of the substring to be replaced.
// count: Number of characters to be replaced of the main string.
// str: String that is to be inserted in the range in place of str[pos] to str[pos + n – 1].
#include <iostream>
#include <algorithm>
using namespace std;

bool checkPalindrome(string a){
    string temp = a;

    reverse(temp.begin(), temp.end());

    if(a == temp){
        return true;
    }

    return false;

}

int main(){
    string a = "";
    cout<<"Enter the String"<<endl;
    cin>>a;

    if(checkPalindrome(a) == true){
        cout<<"The String is Palindrome";
    }
    else{
        cout<<"The String is not a Palindrome";
    }

    return 0;
}
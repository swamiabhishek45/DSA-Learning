#include<iostream>
using namespace std;

char toLowerCase(char ch){
if (ch >= 'A' && ch <= 'Z') {

        return ch + ('a' - 'A');

    }
}

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n - 1;

    while(s<=e){

        if(toLowerCase( a[s]) != toLowerCase ( a[e])){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

int reverseStr (char name[], int n){
    int s = 0;
    int e = n - 1;

   while(s<=e){
        swap(name[s++], name[e--]);

    }
}

int getLength(char name[]){
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

char getMaxOccChar(string s){
    
    int arr[26] = {0};

    // create an array of count of character

    for(int i = 0; i<s.length(); i++){
        char ch =s[i];

        // lowercase
        int count = 0;
        if(ch >= 'a' && ch <= 'z' ){
            count = ch - 'a';
        }
        else{ // uppercase
            count = ch - 'A';
        }
        arr[count]++;
    }

    int maxi = -1, index = 0;
    for(int i =0; i<26; i++){
        if(maxi < arr[i]){
            index = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + index;

    return finalans;
}

int main()
{
    // char name[20];

    // cout<<"Enter your name: ";
    // cin>>name;

    // // name[3] = ' \0 ';
    // // name[1] = ' \0 ';

    // cout<<"Your name is: "<<name<<endl;

    // int len = getLength(name);
    // cout<<"Length is: "<<len<<endl;

    // reverseStr(name, len);
    // cout<<"Reverse string is: "<<name<<endl;

    // int ans = checkPalindrome(name, len);
    // cout<<"Palindrome or not: "<<ans<<endl;


    string s;
    cin >> s ;

    cout<< getMaxOccChar(s)<<endl;
    return 0;
}
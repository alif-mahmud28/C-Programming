
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){

//Problem 1:একটা string ইনপুট নিয়ে সেটা reverse করে প্রিন্ট করো (নতুন string বানিয়ে অথবা swap করে — দুই ভাবেই চেষ্টা করতে পারো)
string s1;
cout<<"Enter your string:";
getline(cin,s1);

for(int i=s1.length()-1;i>=0;i--){

    cout<<s1[i];
}
cout<<endl;
//Problem 2:একটা string palindrome কিনা চেক করো (যেমন "madam", "racecar" — সামনে থেকে পড়লে আর পেছন থেকে পড়লে একই)
string s2;
cout<<"Enter your word:";
cin>>s2;
string s3;
for(int i=s2.length()-1;i>=0;i--){

    s3+=s2[i];
}
if(s3==s2){
    cout<<"Palindrome"<<endl;
}
else{
    cout<<"Not palindrome"<<endl;


}
//Problem 3;একটা string-এ কতগুলো vowel (a, e, i, o, u — ছোট হাতের ও বড় হাতের দুটোই ধরতে হবে) আছে গুনে বের করো

string vowel;
cout<<"Enter your string:";
cin>>vowel;
int count_vowel=0;
for(int i=0;i<vowel.length();i++){

    if(vowel[i]== 'a'||vowel[i]=='A'||vowel[i]=='e'||vowel[i]=='E'||vowel[i]=='i'||vowel[i]=='o'||vowel[i]=='I'||vowel[i]=='O'||vowel[i]=='u'||vowel[i]=='U' ){


        count_vowel+=1;

    }
    else{
        continue;
    }
}
cout<<"Total vowel:"<<count_vowel;

//Problem 4:দুইটা word ইনপুট নিয়ে (first name, last name) সেগুলো জোড়া লাগিয়ে full name বানাও, আর substr() ব্যবহার করে শুধু first name-টা আবার আলাদা করে দেখাও
string first_name,last_name;
cout<<"Enter your first name:";
cin>>first_name;
cout<<"Enter your last name:";
cin>>last_name;
string full_name=first_name+" "+last_name;
cout<<"Full name:"<<full_name<<endl;
cout<<full_name.substr(0,full_name.find(last_name));


//Problem 5:একটা sentence-এ একটা নির্দিষ্ট শব্দ (word) আছে কিনা find() দিয়ে খুঁজে বের করো, থাকলে কোন index-এ আছে সেটাও দেখাও

string sentence,desired_word;
cin.ignore();
cout<<"Enter your sentence:";
getline(cin,sentence);

cout<<"Enter your desired word:";
cin>>desired_word;

int pos=sentence.find(desired_word);

if(pos!= string::npos){
    cout<<"Found at index:"<<pos;
}
else{
    cout<<"Not found";
}




































}

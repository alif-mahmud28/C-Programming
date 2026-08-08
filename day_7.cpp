//Problem 1: Function + Array + Pointer.একটা function লেখো int findMax(int arr[], int n) যেটা একটা array আর তার size নিয়ে, array-এর ভেতরের সবচেয়ে বড় element রিটার্ন করবে। main()-এ একটা array বানিয়ে এই function call করে ফলাফল print করো।

//Problem 2: String + Loop + Function.একটা function লেখো bool isPalindrome(string s) যেটা একটা string নিয়ে সেটা palindrome কিনা true/false রিটার্ন করবে (Day 5-এর logic-টাই এখন একটা reusable function বানাও)। main()-এ ৩টা ভিন্ন string দিয়ে টেস্ট করো (একটা palindrome, একটা না)।

//Problem 3: 2D Array + Nested Loop.একটা 3x3 ম্যাট্রিক্স নিয়ে (হার্ডকোডেড ভ্যালু দিয়ে), তার diagonal elements (মানে যেখানে row index = column index, যেমন matrix[0][0], matrix[1][1], matrix[2][2]) যোগ করে দেখাও।

//Problem 4: Pointer + Swap + Array.একটা array-তে প্রথম আর শেষ element swap করো — কিন্তু এবার pointer ব্যবহার করে (Day 6-এ যে swap_func(int *x, int *y) লিখেছিলে, সেটাই ব্যবহার করো, নতুন করে লেখার দরকার নেই)।

#include <iostream>
#include <string>
using namespace std;

//problem 1 function:
int findmax(int arr[],int n){
int max_num=arr[0];
for(int i=1;i<n;i++){

    if(arr[i]>max_num){

        max_num=arr[i];
    }

}
return max_num;

}
//problem 2 function
bool ispaliindrome(string s){

    string new_word;
    for (int i=s.length()-1;i>=0;i--){
    new_word+=s[i];
    }
    if (new_word==s){
        return true;

    }
    else{
        return false;
    }

}
//problem 4 function
void swap_function(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    //Problem 1:
int arr[]={10,30,60,24,25};
int size_of_array=5;

int result=findmax(arr,size_of_array);

cout<<"Max element:"<<result<<endl;

//Problem 2:
string s;
cout<<"Enter a word:";
cin>>s;
bool result1=ispaliindrome(s);
cout<<boolalpha<<result1<<endl;//boolalpha for makeing 1=true,0=false(readable)

//Problem 3:
int arr1[3][3]={{2,78,9},{3,6,8},{3,4,5}};
int sum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i==j){
            sum+=arr1[i][j];
            }
        }
    }
cout<<"SUM OF DIAGONAL ELEMENTS:"<<sum<<endl;

//Problem 4:
int arr2[]={2,3,5,6,7};
int n=5;
swap_function(&arr2[0],&arr2[n-1]);
cout<<"Swapped 1st and last elements:"<<" ";
for(int i=0;i<n;i++){
    cout<<arr2[i]<<" ";

}
return 0;
}


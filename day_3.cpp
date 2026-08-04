//Learning Array:

#include <iostream>
using namespace std;
int main(){
int arr[6]={12,23,45,67,120,12};
int n=6;
//Problem 1:
//finding maximum:
int maximum=arr[0];
for(int i=1;i<n;i++){

    if(arr[i]>maximum){

        maximum=arr[i];
    }
}
//finding minimum:
int minimum=arr[0];
for(int i=1;i<n;i++){

    if(arr[i]<minimum){
        minimum=arr[i];
    }
}
cout<<"Maximum is:"<<maximum<<endl;
cout<<"Minimum is:"<<minimum<<endl;


//Problem 2:reverse the array:
int start=0,endp=n-1;

while(start<endp){
    int temp=arr[start];
    arr[start]=arr[endp];
    arr[endp]=temp;
    start++;
    endp--;
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}



//Problem 3:
int sum=0;
for(int i=0;i<n;i++){

    sum+=arr[i];
}
cout<<"Total sum:"<<sum<<endl;
cout<<"Average:"<<(double)sum/n;
//Problem 4:
bool isduplicate=false;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            cout<<"Duplicate found at Position:"<<arr[i];
            isduplicate=true;
        }

    }
}
if(!isduplicate){
    cout<<"No duplicate";
}







//Problem 5
int value=124;
bool g=false;
for(int i=0;i<n;i++){
    if(arr[i]==value){
        cout<<"found at position:"<<i+1<<endl;
        g=true;
        break;
    }
    else{
        continue;
    }
}
if(!g){
    cout<<"Not found";
}

















return 0;

}

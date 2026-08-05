#include <iostream>
using namespace std;
//Problem 1:
int main() {

   int rows,cols;
   cout<<"Enter rows & cols size:";
   cin>>rows>>cols;

   int matrix[10][10];
   cout<<"Enter elements:"<<endl;
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){

        cin>>matrix[i][j];
    }
    cout<<endl;


   }
   cout<<"The matrix is:"<<endl;
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){

        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;

   }

//Problem 2:
int mat1[2][2]={{2,4},{4,5}};
int mat2[2][2]={{3,5},{4,9}};
int result[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){

        result[i][j]= mat1[i][j]+ mat2[i][j];
    }
    cout<<endl;

}
cout<<"Result is:"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){

       cout<<result[i][j]<<" ";
    }
    cout<<endl;


   }

//Problem 3:

int sum_mat=0;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
            sum_mat+=matrix[i][j];

    }

   }
   cout<<"Total sum of Matrix is:"<<sum_mat;

//Problem 4:
int transpose[10][10];
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){

            transpose[j][i] = matrix[i][j];   // ✅ এটাই সঠিক
    }

   }
   cout<<"Transpose of Matrix:"<<endl;
for(int i=0;i<cols;i++){
    for(int j=0;j<rows;j++){
    cout<<transpose[i][j]<<" ";
    }
    cout<<endl;

   }









}

//https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true
#include<iostream>
using namespace std;
int main()
{
   int N,LeftDigonalSum=0,RightDigonal=0;
   cin>>N;
   int a[N][N];
   for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
           cin>>a[i][j];
           if(i==j)
           {
             LeftDigonalSum=LeftDigonalSum+a[i][j];
           }
           }
       }
       for(int i=0;i<N;i++)
       {
           for(int j=N-1-i;j>=0;)
           {
               RightDigonal=RightDigonal+a[i][j];
              break;
               
           }
       }
       cout<<abs(LeftDigonalSum-RightDigonal)<<endl;
       return 0;
   }

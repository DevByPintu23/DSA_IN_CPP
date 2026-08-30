#include<iostream>
using namespace std;
int main(){
    int marks[]={74,96,91,57,62,35,58,45,74,21,54};
    //cout<<size(marks)<<endl;//this is give erroe old compiler
    cout<<sizeof(marks)/4<<endl;
   /* cout<<marks[2]<<endl;
    cout<<marks[4]<<endl;
    marks[2]=25;
    cout<<marks[2]<<endl;
*/
}
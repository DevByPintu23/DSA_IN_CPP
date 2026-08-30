#include<iostream>
using namespace std;
int main(){
    float height, width;
    cout<<"enter the height of the rectangle:-";
    cin>>height;
    cout<<"enter the width  of the rectangle:-";
    cin>>width;
    float area = height*width;
    float perimeter = (2*height + 2*width);
    if(area>perimeter) cout<<area <<"the area is greter of the perimeter";
    else cout<<perimeter <<"perimeter greater then area";
}
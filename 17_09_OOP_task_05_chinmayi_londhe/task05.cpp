#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

 class Rectangle
 {
 private:
     int length;
     int breadth;

 public:

    
     Rectangle(){
         length=0;
         breadth=0;
     }
     Rectangle(int l1,int b1){
         length=l1;
         breadth=b1;
     }
     Rectangle(int z){
         length=z;
         breadth=z;
     }
     void set_lnb(int l2,int b2)
    {
        length = l2;
        breadth=b2;
    }
      
    int get_length()
    {
        return length;
    }
    int get_breadth()
    {
       return breadth;
    }
     int area(){
        return length*breadth;
     }
     
     
 };
 
 int main(){
    // Object with default constructor
    int l,b;
    Rectangle R1;
    cout<<"Enter the length :\n";
    cin>>l;
    cout<<"Enter the breadth :\n";
    cin>>b;
    cout<<"\nDue to default constructor";
    R1.set_lnb(l,b);
    cout<<"\nArea of Rectangle: "<<R1.area();;
    

    // object with two parameters
    Rectangle R2(10,20);
    cout<<"\n\nDue to constructor with two parameters";
    cout<<"\nThe length was: "<<R2.get_length();
    cout<<"\nThe breadth was: "<<R2.get_breadth();
    cout<<"\nArea of Rectangle: "<<R2.area();;

    

    // object with one parameter
    Rectangle R3(25);
    cout<<"\n\nDue to constructor with one parameter";
    cout<<"\nThe length was: "<<R3.get_length();
    cout<<"\nThe breadth was: "<<R3.get_breadth();
    cout<<"\nArea of Rectangle: "<<R3.area();
    cout<<"\n";
    
     return 0;
 }
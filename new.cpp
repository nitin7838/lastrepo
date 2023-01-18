#include<iostream>
using namespace std;



class A{
    public:
 
     void add(int a,int b){
      cout <<"The sum of both num is "<<(a+b)<<endl;
     }
     
};
int main(){
    A n;
    n(5,6);  
    return 0;
}
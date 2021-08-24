#include <iostream>
#include "Adder/adder.h"
#include <boost/lambda/lambda.hpp>
#include <boost/thread.hpp>

using namespace std; 

void bankAgent(){
    for(int i = 0;i<10;i++)
        cout << i << endl; 
}

int main(){
    using namespace boost::lambda;
    
    boost::thread thread1(bankAgent); 
    thread1.join(); 


    cout << "Hello World! I am here." << endl;
    cout << "Using adder function: " << add(51.1f,72.4f) << endl; 
    return 0; 
}

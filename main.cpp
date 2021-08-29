#include <iostream>
#include "Adder/adder.h"
#include <boost/lambda/lambda.hpp>
#include <boost/thread.hpp>
#include <boost/bind.hpp>

using namespace std; 
using namespace boost::lambda;
using namespace boost::posix_time; 

void bankAgent(){
    for(int i = 0;i<10;i++)
        cout << i << endl; 
}

int main(){

    //boost::thread_group tgroup; 
    
    //boost::thread thread1(bankAgent); 
    //thread1.join(); 

    cout << "Hello World! I am here." << endl;
    cout << "Using adder function: " << add(51.1f,72.4f) << endl; 
    return 0; 
}

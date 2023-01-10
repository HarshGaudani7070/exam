#include<iostream>
using namespace std;

class data{
 public:
 	
 int value = 10;
 
  void opreator ++(){
 	
 	++ value;
 	cout<<value<<endl;
 	
 }	

    void opreator --(){
    	
    	-- value;
    	cout<<value<<endl;
    	
	}
	
};

main(){
	
	data obj;
	++obj;
	--obj;
	
};

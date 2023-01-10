#include<iostream>
using namespace std;

main(){
   
   int a;
   char b [100] = "you cannot able to vote";
   
   cout<<"type your age";
   cin>>a;
   
   try{
   	
        if(a<18){
        	
        	throw b;
        	
		} 	
   	 else{
   	 	   cout<<"you can vote";
   	 	   
   	 	
		}
   }
  
  catch(char e[]){
  	
  	
  	cout<<b;
  }



}

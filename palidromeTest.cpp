#include <iostream>
using namespace std;

  bool  is_palidrome(string Text)
{
	
	cout<<"Enter a string to test if its palidrome:"<<"   ";
	cin>> Text;
	for (int i=0; i<= Text.length()/2;i++)

		 
		 if(Text[i] != Text[Text.length()-i-1])
		 return false;
		 return true; 
}

int main(){
	 string Text;
	
	if(is_palidrome(Text)){
		
		cout<<"The string is a Palidrome"<<Text;
		cout<<endl;
	}
	else{
	
	cout<<"The string is not a PALIDROME";
	cout<<endl;
	
	}
		return 0;
	}

	

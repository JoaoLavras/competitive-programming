//verificar se é um palindromo 

#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

bool isPalindrome(int x) {
	string number = to_string(x);
	string numberReverse = ""; 
    
    for(int i = number.size()-1; i>=0 ;i--){
    	numberReverse += number[i];
    }


    if(number != numberReverse){
    	return false;
    }

    return true;
}


int main(){
	int test = 123;
	bool result = isPalindrome(test);

	if(result==true){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}

	return 0;
}
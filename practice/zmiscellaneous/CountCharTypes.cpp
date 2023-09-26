#include<bits/stdc++.h>
using namespace std;

// global variable to store the counting of char

int upper = 0, lower = 0, number = 0, special = 0, space=0;

void countCharTypes(string str)
{
	
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z'){
			upper++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z'){
			lower++
			;
		}
		else if (str[i]>= '0' && str[i]<= '9'){
			number++;
		
	    }
	    else if(str[i] == ' '){
	        space++;
	    }
		else{
		    	special++;
		}
		
	}

   

	
}


int main()
{
    string str;
    cout<<"Enter the String :";
    getline(cin,str);
	countCharTypes(str);

     cout << "total upper case: " << upper << endl;
    cout << "total lower case letters : " << lower << endl;
    cout << "total numbers : " << number << endl;
    cout << "total special characters : " << special << endl;
    cout << "total spaces : "<< space<<endl;

    
	return 0;
}


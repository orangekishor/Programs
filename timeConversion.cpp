#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

string timeConversion(const string s) {
    string res = "";
    int hr=0,mIn=0,sec=0;
    string am="AM";
    
    char t[2]={};
    strncpy(t,s.c_str(),2);
    cout<<"\nt="<<t<<endl;
    hr =stoi(t);
    cout<<"\nhr="<<hr<<endl;
    
    int len = s.length();
    char ss[len+1] = {};
	strcpy(ss,s.c_str()); 
    cout<<"\nlen="<<len<<endl;
    cout<<"\nss="<<ss<<endl;
    string hr_s = "";
    if(s[len-2] == 'P')
    {
    	cout<<"\nPM"<<endl;
    	if(hr != 12)
    	{
    		hr = 12+hr;
		}
		hr_s = to_string(hr);
		cout<<"\nhr_s="<<hr_s<<endl;
	}
	else
	{
		cout<<"\nAM"<<endl;
		if(hr == 12)
		{
			hr_s = "00";
		}
		else
		{
			hr_s = to_string(hr);
		}
		if(hr_s.length()==1)
		{
			hr_s.insert(0, 1, '0');
		}
		cout<<"\nhr_s="<<hr_s<<"len="<<hr_s.length()<<endl;
	}
	res.append(hr_s);
	char t1[25] = {};
	strncpy(t1,&ss[2],len-4);
	t1[len-3] = '\0';
	cout<<"\nt1="<<t1<<endl;
	res.append(t1);
    
    return res;
}

int main()
{
	string s = "";
    //getline(cin, s);
    s="06:40:03AM";
	string result = timeConversion(s);

    cout << result << "\n";
	return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;
/**
 * Brief:
 * To get the value of a substring from a string until the delimitor
 *
 * IN :
 *  aUri   		: Complete string
 *  aName  		: search key in the string whose value need to be retrieved
 *  aDelim 		: value Delimitor
 *  aseparator 	: key&value separator
 *
 * OUT:
 *  aValue 		: seacrh key value
 *
 * Return:
 *  true/false
 */
bool getStrValueFromStr (string aUri, string aName, string &aValue, string aDelim, string aSeperator)
{
    aName += aSeperator;

    size_t found = aUri.find(aName);

    if(found == string::npos)
    {
        return false;
    }

    size_t valueEndIndex = aUri.find(aDelim,found+1);
    if(valueEndIndex == string::npos)
    {
        valueEndIndex = aUri.size();
    }

    size_t valueStartIndex = found+aName.size();
    size_t length = valueEndIndex - valueStartIndex ;
    aValue = aUri.substr(valueStartIndex,length);

    printf("Search key[%s] value[%s] ",aName.c_str(),aValue.c_str());
    return true;
}


int main()
{
	string aUri = "trace-start/supi-40505000012345/pei-1234500023/hi?/67434";
	string aName = "supi";
	string aValue = "";
	string aDelim = "/";
	string aSeperator = "-";
	
	bool rc = getStrValueFromStr(aUri, aName, aValue, aDelim, aSeperator);
	
	return 0;
}

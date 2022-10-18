#include <iostream>

using namespace std;

int output;

void cb(int out)
{
    output = out;
    cout<<"callback function["<<out<<"]"<<'\n';
}

void principalFn(int input, void (*ptr)(int))
{

	for(;input<=5;input++)
	{
		if(input>3)
    		(*ptr)(input);
    }

    cout<<"principal function"<<'\n';

}

void fn()
{
    cout<<"seen"<<'\n';
}

int main()
{
    int input = 1;

    void (*ptr)(int) = &cb;

    principalFn(input, cb);
    fn();
    cout<<output<<'\n';

   return 0;
}

#include "/Users/salvadormireles/Desktop/Stroustrup/std_lib_facilities2.h"
// Compare inputs strings to detect repeated words

int main()
{
    string previous=" ";
    cout<<"Please enter as many words as you'de like for comparison\n";
    string current;
    while(cin>>current){
      if(previous==current)
        cout<<"repeated word: "<<current<<"\n";
      previous = current;
    }

}

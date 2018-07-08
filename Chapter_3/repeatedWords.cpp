#include "/Users/salvadormireles/Desktop/Stroustrup/std_lib_facilities2.h"
// Compare inputs strings to detect repeated words

int main()
{
    int number_of_words = 0;
    string previous=" ";
    cout<<"\nPlease enter as many words as you'de like for comparison\n";
    string current;
    while(cin>>current){
      ++number_of_words;
      if(previous==current)
        cout<<"Word number " <<number_of_words
          <<" repeated: " <<current <<"\n";
      previous = current;
    }

}

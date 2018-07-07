#include "/Users/salvadormireles/Desktop/Stroustrup/std_lib_facilities2.h"
//This utilizes operators on input int

int main()
{
    cout<<"Please enter an integer value: ";
    //func sqrt doesn't take in ints so will need float conversion
    int n;
    cin>>n;
    cout<<"n == " <<n
      <<"\n\n n+1 == " <<n+1
      <<"\n three times n == " <<3*n
      <<"\n twice n == " <<n+n
      <<"\n n squared == " <<n*n
      <<"\n half of n == " <<n/2
      <<"\n square root of n == " << sqrt(double(n))
      <<"\n\n"; // name for newline ("end of line") in output


}

#include "/Users/salvadormireles/Desktop/Stroustrup/std_lib_facilities2.h"
//Takes name and age input then displays result

int main()
{
  cout<<"Please enter your first name and age\n";
  string first_name;
  double age;


  cin>>first_name;
  cin>>age;
  age = age*12;
  cout<<"Hello, "<<first_name<<"(age"<<age<<")\n";

}

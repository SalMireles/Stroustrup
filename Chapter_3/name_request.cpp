#include "/Users/salvadormireles/Desktop/Stroustrup/std_lib_facilities2.h"
//Takes name and age input then displays result

int main()
{

  string first_name;
  string friend_name;
  char friend_sex = 0;
  int age = 0;


  cout<<"Enter the name of the person you want to write to:\n";
  cin>>first_name;

  cout<<"\nDear "<<first_name<<",\n"
    <<"\n\tHow are you?"<<" I've seen you on my block. Where is my money B?\n\n";

  cout<<"What is the name of your drug dealer?\n";
  cin>>friend_name;

  cout<<"\nHave you seen "<<friend_name<<" lately?\n";

  cout<<"BTW, is your dealer a female or male? Enter f or m.\n";
  cin>>friend_sex;


  if (friend_sex=='m')
    cout<<"\nIf you see "<<friend_name<< " ask that mofo to call me.\n";

  if (friend_sex=='f')
    cout<<"\nIf you see "<<friend_name<<" ask that beezy to call me\n\n";

  cout<<"Enter the age of " <<friend_name<<" :\n";
  cin>>age;
  cout<<"I hear you just had a birthday and you are "
  <<age<< " years old.\n";

  if ((age<=0) or (age>=110))
    simple_error("you're kidding!");

  if (age<12)
  {
    ++age;
    cout<<"Next year you will be "<<age<<".\n";
  }
  if (age==17)
    cout<<"Next year you will be able to vote!\n";
  if ((age>70) and (age<110))
    cout<<"I hope you are enjoying retirement.\n";

  cout<<"Yours sincerely,\n\n\n"<<"Salvador Mireles\n";

}

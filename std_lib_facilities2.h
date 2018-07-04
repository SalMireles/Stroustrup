
   //std_lib_facilities.h
	 #include<iostream>
	 #include<fstream>
	 #include<sstream>
	 #include<cmath>
	 #include<cstdlib>
	 #include<string>
	 #include<list>
	 #include<vector>
	 #include<algorithm>
	 #include<stdexcept>
	 using namespace std;
	 //inline void keep_window_open(){char ch; cin>>ch;}

	 inline void keep_window_open()
	 {
	 	cin.clear();
	 	cout << "Please enter a character to exit\n";
	 	char ch;
	 	cin >> ch;
	 	return;
	 }

	 inline void keep_window_open(string s)
	 {
	 	if (s=="") return;
	 	cin.clear();
	 	cin.ignore(120,'\n');
	 	for (;;) {
	 		cout << "Please enter " << s << " to exit\n";
	 		string ss;
	 		while (cin >> ss && ss!=s)
	 			cout << "Please enter " << s << " to exit\n";
	 		return;
	 	}
	 }



	 // error function to be used (only) until error() is introduced in Chapter 5:
	 inline void simple_error(string s)	// write ``error: s�� and exit program
	 {
	 	cerr << "error: " << s << '\n';
	 	keep_window_open();		// for some Windows environments
	 	exit(1);
	 }

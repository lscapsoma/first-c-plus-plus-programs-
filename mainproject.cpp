


#include "std_lib_facilities.h"


int main()
{
	cout << "Enter the name of the person you want to write to\n"; 
	string first_name;
	cin >> first_name; 
	cout << "Please tell me your best friends name!!\n"; 
	string friends_name;
	cin >> friends_name;
	cout << "please enter your sexual orientation either m or f . ";
	char friend_sex = 0;
	cin >> friend_sex;
	cout << "Enter your best friends current age.";
	int his_age;
	cin >> his_age; 
	if (his_age < 12)
		cout << "Next year you'll be " << ++his_age << "\n";
	if (his_age == 17)
		cout << "You'll be able to vote next year\n";
	if (his_age > 70)
		cout << "I hope you're ready to enjoy retirement\n"; 
	
	if (friend_sex == 'm')
		cout << "Hey your friend is a male\n";
	if (friend_sex == 'f')
		cout << "Hey your friend is a female\n";
	
	cout << "Dear, " << first_name << "\n"; 
	cout << "Hello, how are you? " << first_name << " are you doing good? I would hope you are having a good time\n";
	cout << "I hope you're ready for the snow to melt " << first_name << " isnt it amazing weather isn't it? its almost spring time!!!\n";
	cout << "Hey" << first_name << " have you seen " << friends_name << " Lately? I hope hes doing fine\n";
	                                                                                                                                          

}
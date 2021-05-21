#include <iostream>
#include <string>

using namespace std;

void print_info(string & s) {
  cout << "length = " << s.length() << endl;
  cout << "capacity = " << s.capacity() << endl;
  cout << "max size = " << s.max_size() << endl;
  cout << "---------" << endl;
}

int main()
{
    /* 4.3.1.6 Strings - the basics
     *  Inputting a string
    */
    {
        string line_of_types;
        cin >> line_of_types;
        cout << line_of_types << endl;
    }

    /* 4.3.1.7 Strings - the basics
     *  Inputting a line
    */
    {
        string line_of_types;
        getline(cin, line_of_types);
        cout << line_of_types << endl;
    }

    /* 4.x.x.x
     *
     *
     */
    {
        string str1, str2;
        cout << "Enter 2 lines of text:" << endl;
        getline(cin, str1);
        getline(cin, str2);
        cout << "You've entered:'" << endl;
        if (str1.compare(str2) == 0)
            cout << "\"" << str1 << "\" == \"" << str2 << "\"" << endl;
        else if (str1.compare(str2) > 0)
            cout << "\"" << str1 << "\" > \"" << str2 << "\"" << endl;
        else
            cout << "\"" << str2 << "\" < \"" << str1 << "\"" << endl;
    }

    /* 4.x.x.x
     *
     *
     */
    {
        string str1, str2;
        str1 = "ABCDEF";
        str2 = str1.substr(1, 1) + str1.substr(4) + str1.substr();
        cout << str2 << endl;
    }

    /* 4.x.x.x
     *
     *
     */
    {
        string S = "ABC";
        // equivalent to 
        // cout << string::compare(S.subStr(1,1), "BC") + string::compare(S.SubStr(2, 1), S.SubStr(2, 2)) << endl;
        cout << S.compare(1, 1, "BC") + S.compare(2, 1, S, 2, 2) << endl;
    }

    /* 4.x.x.x
     *
     *
     */
    {
        string greeting = "My name is Bond, James Bond.";
        string we_need_him = "James";
        if (greeting.find(we_need_him) != string::npos)
            cout << "OMG! He's here!" << endl;
        else
            cout << "It's not him." << endl;
        int comma = greeting.find(',');
        if (comma != string::npos)
            cout << "Interesting. He used a comma." << endl;
    }

    /* 4.x.x.x
     *
     *
     */
    {
        string the_string = "content";
        print_info(the_string);
        for (int i = 0; i < 10; i++)
            the_string += the_string;
        print_info(the_string);
    }

    /* 4.x.x.x
     *
     *
     */
    {
        string the_string = "content";
        string new_string;
        new_string.append(the_string);
        new_string.append(the_string, 0, 3);
        new_string.append(2, '!');
        cout << new_string << endl;
    }

    /* 4.5.1.3
     *
     *
     */
    {
        string quote = "Whyserious?", anyword = "monsoon";
        quote.insert(3, 2, ' ').insert(4, anyword, 3, 2);
        cout << quote << endl;
    }

    /* 4.5.1.4
     *
     *
     */
    {
        string sky;
        sky.assign(80, '*');
        cout << sky << endl;
    }

    /* 4.5.1.5
     *
     *
     */
    {
        string to_do = "I'll think about that in one hour";
        string schedule = "today yesterday tomorrow";

        to_do.replace(22, 12, schedule, 16, 8);
        cout << to_do << endl;
    }

    /* 4.5.1.6
     *
     *
     */
    {
        string where_are_we = "I've got a feeling we're not in Kansas anymore";

        where_are_we.erase(38, 8).erase(25, 4);
        cout << where_are_we << endl;
    }

    /* 4.5.1.7
     *
     *
     */
    {
        string where_are_we = "I've got a feeling we're not in Kansas anymore";

        where_are_we.erase(38, 8).erase(25, 4);
        cout << where_are_we << endl;
    }

    /* 4.5.1.8
     *
     *
     */
    {
    }
}

/*
 * **************
 * string methods
 * **************
 * int find(string)
 * string substr()
 * string substr(int)
 * string substr(int, int)
 * int compare(string)
 * int compare(int, int, string)
 * int compare(int, int, string, int, int)
 * boolean empty()
 * int length()
 * int max_size()
 * int capacity()
 * reserve(int)
 * resize(int)
 * clear()
 * char operator[](string, int)
 * string operator+(string, string)
 * string operator+(string, char)
 * string operator+=(string, string)
 * string operator+=(string, char)
 * 
 * string append(string)
 * string append(string, int, int)
 * string append(int, char)
 * push_back(char)
 * insert(int, string)
 * insert(int, int, char)
 * insert(int, string, int, int)
 * assign(int, char)
 * replace(int, int, string)
 * replace(int, int, string, int, int)
 * erase(int = 0, int = strLength)
 * swap(string)
*/
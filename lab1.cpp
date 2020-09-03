
//Darien Ware
//Summer Programming Excercise

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char type;

        cout << "Which simulation would you like to run?" << endl;
        cout << "c - custom word" << endl;
        cout << "a - automatic (from set of words)" << endl;
        cout << "x - exit program" << endl;
        cin >> type;

        switch (type)
        {

            case 'c' :
                {
                    // int dupe = 0;
                    bool dubble = false;
                    do
                    {
                        string word;

                        cout << "Enter a word: ";
                        cin >> word;
                        int length = word.length();

                        for (int i = 0; i < length - 1; i++)
                        {
                            if ( word[i] == word[i + 1])
                            {
                                //dupe++;
                                dubble = true;
                            }
                        }

                    }while (dubble == false);//dupe < 1);

                    if (dubble == true) //dupe >= 1)
                    {
                        cout << "Double letters detected." << endl;
                        cout << "........" << endl;
                        cout << "Program Closing..." << endl;
                    }
                }
                break;
            case 'a' :
                {
                    string words[6] ={"d","aardvark", "book", "fall", "abcdddddd", "test"};

                    for( int c = 0; c < 6; c++)
                    {
                        string test = words[c];
                        cout <<"Word: " << test << endl;

                        bool check = false;

                        int length = test.length();

                        for (int i = 0; i < length - 1; i++)
                        {
                            if ( test[i] == test[i + 1])
                            {
                                if(test[i] != test[i + 2])
                                {
                                    check = true;
                                }
                            }

                        }

                        if (check == true)
                        {
                            cout << "Double letters detected." << endl;
                        }
                        else
                        {
                            cout << "No double letters found in " << test << endl;
                        }
                        cout << endl;

                    }
                    cout << "........" << endl;
                    cout << "Program Closing..." << endl;

                }
                break;
            case 'x' :
                {
                    cout << "Program Closing..." << endl;
                }
                break;
        }

    return 0;
}

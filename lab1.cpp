//Darien Ware
//Summer Programming Excercise

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

        int dupe = 0;
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
                dupe++;
            }
        }

    }while (dupe < 1);

    if (dupe >= 1)
    {
        cout << "Double letters detected." << endl;
        cout << "........" << endl;
        cout << "Program Closing..." << endl;
    }

//for part 2 of step 4, put the words in an array
//then through a for loop in order to "automate it"

    return 0;
}

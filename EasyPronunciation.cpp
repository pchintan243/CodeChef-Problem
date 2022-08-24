// Problem
// Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

// We say that a word is hard to pronounce if it contains 44 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

// You are given a string SS consisting of NN lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

// For the purposes of this problem, the vowels are the characters \{a, e, i, o, u\}{a,e,i,o,u} and the consonants are the other 2121 characters.

#include <iostream>
#include <string.h>
using namespace std;

bool isVowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        return 1;
    }
    return 0;
}
bool isPronunce(int n, string s)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!isVowel(s[i]))
        {
            count++;
        }
        if (count >= 4)
        {
            return 0;
        }
        if (isVowel(s[i]))
        {
            count = 0;
        }
    }
    return 1;
}
int main()
{
    int t, n;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;
        if (isPronunce(n, s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

/*

input:
5
5
apple
15
schtschurowskia
6
polish
5
tryst
3
cry

output:
YES
NO
YES
NO
YES

*/
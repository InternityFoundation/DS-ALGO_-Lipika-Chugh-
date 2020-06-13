Link-https://www.hackerrank.com/challenges/repeated-string/problem

Problem statement-Lilah has a string, , of lowercase English letters that she repeated infinitely many times.

Given an integer, , find and print the number of letter a's in the first  letters of Lilah's infinite string.

For example, if the string  and , the substring we consider is , the first  characters of her infinite string. There are  occurrences of a in the substring.

#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
typedef long long ll;

    ll ans = 0;
    int A = 0;
    int B = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
       if (s[i] == 'a') A++;
       if ((ll)i < n % (ll)s.size() && s[i] == 'a') B++;
    }

    return n / (ll)s.size() * (ll)A + (ll) B ;
   // return 0;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

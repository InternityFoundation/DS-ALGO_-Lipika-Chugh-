Link-https://www.hackerrank.com/challenges/funny-string/problem

Problem statement-In this challenge, you will determine whether a string is funny or not. To determine whether a string is funny, create a copy of the string in reverse e.g. . Iterating through each string, compare the absolute difference in the ascii values of the characters at positions 0 and 1, 1 and 2 and so on to the end. If the list of absolute differences is the same for both strings, they are funny.

Determine whether a give string is funny. If it is, return Funny, otherwise return Not Funny.

#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
char revstr[100000];
int len=s.length();
 int j=0;
 for(int i=len-1;i>=0;i--)
 {
 revstr[j]=s[i];
  j++;
 }
 revstr[j]='\0';
int c=0;
        for(int l=0; l<len;l++){
           if( abs(revstr[l]-revstr[l-1])==abs(s[l]-s[l-1]))
               c++;               
        }
        if(c==len-1)
            return "Funny";
        else
            return "Not Funny";
       // printf("\n");
    }



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

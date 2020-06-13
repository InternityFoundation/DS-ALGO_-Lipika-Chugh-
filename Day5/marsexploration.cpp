Link-https://www.hackerrank.com/challenges/mars-exploration/problem

Problem statement-Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, , determine how many letters of Sami's SOS have been changed by radiation.

#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int len=s.length();
    int i,cnt=0;
     for(int i = 0; i < len; i += 3){
        if(s[i] != 'S')cnt++;
        if(s[i+1] != 'O')cnt++;
        if(s[i+2] != 'S')cnt++;
    
    }
    return cnt;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

Link-https://www.hackerrank.com/challenges/equality-in-a-array/problem

Problem statement-Karl has an array of integers. He wants to reduce the array until all remaining elements are equal. Determine the minimum number of elements to delete to reach his goal.

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the equalizeArray function below.
int equalizeArray(vector<int> arr) {
map<int,int>m;
int i,res=0,max=0;
for(i=0;i<arr.size();i++){
       m[arr[i]]++;

}

map<int,int>::iterator it;
for(it=m.begin();it!=m.end();it++){
    if(max<it->second){
        max=it->second;
    }
}
res=arr.size()-max;
return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = equalizeArray(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

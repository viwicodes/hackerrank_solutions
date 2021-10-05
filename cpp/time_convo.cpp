#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

    string c, new_hr, mod_hr;
    int hr = 0;
    c += s[0];
    c += s[1];
    // Converting string to int
    stringstream x(c);
    x >> hr;


    if(hr==12){
        if(s[8]=='A'){
            new_hr += "00";
            for(int i=2;i<8;i++){
                new_hr += s[i];
            }
            mod_hr = new_hr;
        }
        else if(s[8]=='P'){
            for(int i=0;i<8;i++){
                new_hr += s[i];
            }

            mod_hr = new_hr;
        }
    }

    else{

        if(s[8]=='P'){
            hr += 12;
            new_hr = to_string(hr);
            for(int i=2;i<8;i++){
                new_hr += s[i];
            }
            mod_hr =  new_hr;
        }
        else{
            for(int i=0;i<8;i++){
                new_hr += s[i];
            }

            mod_hr = new_hr;
        }

    }

    // cout<<mod_hr;

    return mod_hr;



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout<<result;

    fout << result << "\n";

    fout.close();

    return 0;
}

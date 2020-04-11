/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB

 */

string Solution::convertToTitle(int b) {

    string s="";
    while(b){
        s = (char)((b-1)%26+'A')+s;
        b = (int)(b-1)/26;
        //cout<<s<<" "<<endl;
    }
    return s;
}

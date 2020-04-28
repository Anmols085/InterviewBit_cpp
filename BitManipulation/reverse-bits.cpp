/*
Reverse the bits of an 32 bit unsigned integer A.

Example Input 1:
    A = 0
Example Output 1:
    0
Explanation 1:
        00000000000000000000000000000000
=>      00000000000000000000000000000000
Example Input 2:
    A = 3
Example Output 2:
    3221225472
Explanation 2:
          00000000000000000000000000000011
=>        11000000000000000000000000000000
*/

unsigned int Solution::reverse(unsigned int A) {

    unsigned int ans=0;
    for(int i=0;i<32;i++){
        int temp=A&1;
        ans<<=1;
        ans|=temp;
        A>>=1;
    }
    return ans;
}

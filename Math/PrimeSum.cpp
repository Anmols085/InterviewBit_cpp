/*
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture

Example:


Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d]

If a < c OR a==c AND b < d.

*/

vector<int> Solution::primesum(int A) {

    vector<bool> isPrime(A + 1, true);
    isPrime[0] = false; isPrime[1] = false;

    for(int i=2;i<=A;i++){
        if(!isPrime[i]) continue;
        if(i>A/i) break;
        for(int j=i*i;j<=A;j+=i) isPrime[j]=false;
    }

    for(int i=2;i<=A;i++){
        if(isPrime[i] && isPrime[A-i]){
            vector<int> ans;
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
    }
    vector<int> ans;
    return ans;
}

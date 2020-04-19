/*
Given a string, find the rank of the string amongst its permutations sorted lexicographically.
Assume that no characters are repeated.

Input : 'acb'
Output : 2

The order permutations with letters 'a', 'c', and 'b' :
abc
acb
bac
bca
cab
cba
*/

int mod=1000003;
long long int factorial(int n) {
    if (n == 0) return 1;
    return (n * factorial(n - 1))%mod;
}

int Solution::findRank(string A) {
    int n=A.size(), sum=1;
    string b=A;
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        int j=b.find(A[i]);
        sum=(sum+((j)*factorial(n-i-1))%mod)%mod;
        b.erase(b.begin()+j);
    }
    return sum;
}

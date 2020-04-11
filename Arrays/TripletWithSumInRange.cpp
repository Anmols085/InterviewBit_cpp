

int Solution::solve(vector<string> &A) {

    int n = A.size();
    if(n<3) return 0;
    vector<double> B(n);
    for(int i = 0; i<n; i++) B[i] = stod(A[i]);

    double a=B[0], b=B[1], c=B[2];
    for(int i=3;i<n;i++){
        //cout<<i<<" "<<a<<" "<<b<<" "<<c<<" "<<a+b+c<<endl;
        if(a+b+c<2 && a+b+c>1) return 1;
        else if(a+b+c>=2){
            if(a>b && a>c) a=B[i];
            else if(b>a&&b>c) b=B[i];
            else c=B[i];
        }
        else if(a+b+c<=1){
            if(a<b && a<c) a=B[i];
            else if(b<a && b<c) b=B[i];
            else c=B[i];
        }
    }
    if(a+b+c<2 && a+b+c>1) return 1;
    return 0;
}

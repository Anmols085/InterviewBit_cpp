vector<int> Solution::flip(string arr) {
    vector<int> c;
    int size = arr.length(), i=0;
    while(arr[i] == '1') i++;
    if (size == i) return c;
    int b[size];
    for(i=0;i<size;i++){
        if(arr[i]=='0') b[i] = 1;
        else b[i] = -1;
    }
    int temp_sum=0, max_sum=INT_MIN, start=0, end=0;
    c.push_back(start+1);c.push_back(end+1);
    for(i=0;i<size;i++){
        temp_sum += b[i];
        end++;
        if(temp_sum>max_sum){
            max_sum = temp_sum;
            c[0] = start+1;c[1] = end;
        }
        if(temp_sum<0){
            temp_sum = 0;
            start = i+1; end = i+1;
        }
    }
    return c;
}

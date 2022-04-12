int Solution::solve(vector<int> &A, int B) {
    map<int,int> freq;
    int xorr=0,cnt=0;
    for(auto it: A)
    {
        xorr=xorr^it;
        if(xorr==B)
          cnt++;
        if(freq.find(xorr^B)!=freq.end())
           cnt+=freq[xorr^B];
        freq[xorr]+=1;
    }
    return cnt;
}

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int n=A.size();
    long long int sum_n=(n*(n+1)/2),sum_nsq=(n*(n+1)*(2*n+1)/6);
    long long int m=0,r=0;
    for(int i=0;i<n;i++)
    {
        sum_n-=(long long int)A[i];
        sum_nsq-=(long long int)A[i]*(long long int)A[i];
    }
    m=(sum_n+sum_nsq/sum_n)/2;
    r=m-sum_n;
    vector<int> ans;
    ans.push_back(r);
    ans.push_back(m);
    return ans;
}

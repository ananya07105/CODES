int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  int c1=0,c2=0;
  int n=A.size();
  int f=INT_MAX,s=INT_MAX;
  for(int i=0;i<n;i++)
  {
      if(f==A[i])
        c1++;
      else if(s==A[i])
        c2++;
      else if(c1==0)
      {
          c1++;
          f=A[i];
      }
      else if(c2==0)
       { c2++;
        s=A[i];
       }
  
  else{
      c1--;
      c2--;
    }
  }
  c1=0;
  c2=0;
  for(int i=0;i<n;i++)
  {
      if(A[i]==f)
        c1++;
      else if(A[i]==s)
        c2++;
  }
  if(c1>n/3)
    return f;
  if(c2>n/3)
    return s;
 
  return -1;
}


int findMinDiff(int arr[],int n,int m)
{
  if(m==0||n==0)
    return 0;
  sort(arr,arr+n);
  for(int i=0;i+m-1<n;i++)
  { int min_diff=INT_MAX;
    if(diff<min_diff)
      min_diff=diff;}
  return min_diff;
}

// #include <stdio.h>
// int main()
// {
//   int T;
//   scanf("%d", &T);
//   while (T--)
//   {
//     int i, s, max;
//     scanf("%d", &s);
//     int arr[s];
//     for (i = 0; i < s; i++)
//     {
//       scanf("%d", &arr[i]);
//     }
//     max = arr[0];
//     for (i = 0; i < s; i++)
//     {
//       if (max < arr[i])
//       {
//         max = arr[i];
//       }
//     }
//     printf("%d", max);
//   }
// }


#include<stdio.h>
int main()
{
  long long int T;
  scanf("%lld",&T);
  while(T--)
  {
    long long int N;
    scanf("%lld",&N);
    long long int arr[N],arr1[N-1];
    for (int i = 0; i < N; i++)
    {
      scanf("%lld",&arr[i]);
    }
    for (int i = 0; i < N-1; i++)
    {
      arr1[i] = arr[i+1] - arr[i];
      if(arr1[i] < 0)
      {
        arr1[i] = -1 * arr1[i];
      }
    }
    long long int max = 0;
    for(int i = 0; i < N-1;i++)
    {
      if(max<arr1[i])
      {
        max = arr1[i];
      }
    }
    printf("%lld",max);
    
  }
}
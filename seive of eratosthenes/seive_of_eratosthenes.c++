/*

time complexity : O(nloglogn)
memory : O(n)

*/


   #implementation (basic)

   int n;
   vector<bool>is_prime(n+1,true);
   is_prime[0]=is_prime[1]=false;

   for(int i=2;i<=n;++i)
   {
   if(is_prime[i] and (long long )i*i<=n)
   {
   for(int j=i*i;j<=n;j+=i)
   {
   is_prime[j]=false;
   }
   }
   }


note: * the number of prime numbers <=n is n/log(n)
      *  the kth prime no is nearly equal to k log(k)



  #implementation (optimized (same time complexity but faster as less no of operations))

  int n;
  vector<bool>is_prime(n+1,true);
  is_prime[0]=is_prime[1]=false;

  for(int i=2;i*i<=n;++i)
  {
    if(is_prime[i])
    {
      for(int j=i*i;j<=n;j+=i)
      {
        is_prime[j]=false;
      }
    }
  }


  time :O(n log log (sqrt(n)))




  #seive of eratosthenes (linear time complexity )

  (this algorithm uses more memory as compared to sieve of eratosthenes)

  (32 times more memory)

  (effective when the constraints are in the order of 1e7 or less)




  /*

     we find the minimum prime factor in the segment 2 ->n

     we delcare the array lp[i] with zeros
     now we iterate over the numbers from 2 to n and see two observations

     1) if( lp[i]=0)   i is prime and there is no smaller prime factors for it
                       so lp[i]=i (i,e the smallest prime factor for i is i only )
                       and now we add the number i in the primefound array

    2) if(lp[i]!=0)    this means i is composite and its minimum prime factor is lp[i]

*/

  algorithm:
  For every number i where i varies from 2 to N-1:
    Check if the number is prime. If the number
    is prime, store it in prime array.

For every prime numbers j less than or equal to the smallest
prime factor p of i:
    Mark all numbers j*p as non_prime.
    Mark smallest prime factor of j*p as j

    // Remove all multiples of  i*prime[j] which are
       // not prime by making isPrime[i*prime[j]] = false
       // and put smallest prime factor of i*Prime[j] as prime[j]
       // [ for exp :let  i = 5 , j = 0 , prime[j] = 2 [ i*prime[j] = 10 ]
       // so smallest prime factor of '10' is '2' that is prime[j] ]
       // this loop run only one time for number which are not prime



    #implementation((O(n)))

    int mx=1e7;
    vector<longlong>is_prime(mx,true);
    vector<long long>prime;

    vector<long long >spf(mx);

    isprime[0]=is_prime[1]=false;

    for( int i=2;i<n;++i)
    {
      if(is_prime[i])
      {
        prime.pb(i);
        spf[i]=i;
      }


      for(int j=0;j<(int)prime.size() and i*prime[j]<n and prime[j]<=spf[i];j++)
      {
        is_prime[i*prime[j]]=false;
        spf[i*Prime[j]]=prime[j];
      }

    }










    #segmented seive
    

  void  seive(int n, ArrayList<Integer> al){
        boolean prime[]=new boolean[n+1];
        for(int i=0;i<=n;i++){
            prime[i]=true;
        }
        for(int p=2;p*p<=n;p++){
            if(prime[p]==true){
                for(int pp=2*p;pp<=n; pp+=p){
                    prime[pp]=false;
                }
            }
        }
        for(int i=2;i<=n;i++)
            {
            if(prime[i]==true)
                al.add(i);
        }
    }

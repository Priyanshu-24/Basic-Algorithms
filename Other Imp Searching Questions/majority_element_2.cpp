 vector<int> majorityElement(vector<int>& a) {
        
        int n = a.size();
        
        int n1 = -1, n2 = -1, c1 = 0, c2 = 0;
        
        for(int i=0;i<n;i++)
        {
            if(n1 == a[i])
                c1++;
            
            else if(n2 == a[i])
                c2++;
            
            else if(c1 == 0)
            {
                c1++;
                n1 = a[i];
            }
            
            else if(c2 == 0)
            {
                c2++;
                n2 = a[i];
            }
            
            else
            {
                c1--;
                c2--;
            }
        }
        
       // after getting the numbers we still check that they appear more than n/3 times...
        
        c1 = 0;
        c2 = 0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i] == n1)
                c1++;
            
            else if(a[i] == n2)
                c2++;
        }
        
        vector <int>ans;
        
        if(c1 > n/3)
            ans.push_back(n1);
        
        if(c2 > n/3)
            ans.push_back(n2);
        
        return ans;
        
    }
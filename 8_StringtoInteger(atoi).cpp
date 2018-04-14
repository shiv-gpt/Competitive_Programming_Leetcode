class Solution {
public:
    int myAtoi(string str) {
       int len = str.length() ;
        long ans = 0;
        //cout<<(10<<2)<<endl;
        //int ten = 1;
        int minus_flag = 0;
        int num_flag = 0;
        int sign_flag = 0;
        int int_max = 2147483647;
        int int_min = -2147483648;
       for(int i = 0; i<len; i++)
       {
           //cout<<"str[i] = "<<str[i]<<endl;
           cout<<"i = "<<i<<endl;
           if(str[i] == ' ')
           {
               //do nothing
               if(num_flag || sign_flag)
                   break;
           }
           else if(str[i] == '+' || str[i] == '-')
           {
               if(!num_flag && !sign_flag)
               {
                   if(str[i] == '-' && !minus_flag)
                   {
                       minus_flag = -1;
                   }
                   sign_flag = 1;
               }               
               else break;
           }
           else if(str[i] >= '0' && str[i] <= '9')
           {
               //cout<<"ten = "<<ten<<endl;
               //if(ans < 0)
                   //break;
              ans = ans*10 + (str[i] - '0'); 
              if(minus_flag)
              {
                  if(ans*-1 < int_min)
                      return int_min;
              }
              else
              {
                  if(ans > int_max)
                      return int_max;
              }
                   
                //ten = ten * 10;
               
                if(!num_flag)
                    num_flag = 1;
               
           }
           else
           {
               //if(num_flag || sign_flag)
                   break;
           }
           //int a = ans*(10 << i);
           //cout<<ans<<endl;
       }
       if(minus_flag)
       {
           ans*=-1;
       }
       
        /*if(ans > int_max)
            ans = int_max;
        else if(ans < int_min)
            ans = int_min;*/
       return ans;
    }
};

// Online C++ compiler to run C++ program online
    *    
   * *   
  * * *  
 * * * * 
* * * * *

#include <iostream>

using namespace std;

int main() 
{
    
    for(int i=1; i<=5; i++)
    {
        int c=5-i;
        for(int j=1; j<10; j++)
        {
            if(j<=c or j>=10-c)
                cout<<" ";
            else
                if((j%2==1 and i%2==1) or (j%2==0 and i%2==0))
                    cout<<"*";
                else
                    cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Online C++ compiler to run C++ program online
* * * * *
 * * * * 
  * * *  
   * *   
    *    

#include <iostream>

using namespace std;

int main() 
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<10; j++)
        {
            if(j>=i and j<=10-i)
            {
                if((i%2==1 and j%2==1) or (i%2==0 and j%2==0))
                    cout<<"*";
                else
                    cout<<" ";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Online C++ compiler to run C++ program online
* * * * *
 * * * * 
  * * *  
   * *   
    *    
    *    
   * *   
  * * *  
 * * * * 
* * * * *
   
#include <iostream>

using namespace std;

int main() 
{
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<10; j++)
        {
            if(i<=5)
                if(j>=i and j<=10-i)
                    if((i%2==1 and j%2==1) or (i%2==0 and j%2==0))
                        cout<<"*";
                    else
                        cout<<" ";
                else
                    cout<<" ";
            else
                if(j>10-i and j<i)
                    if((i%2==1 and j%2==1) or (i%2==0 and j%2==0))
                        cout<<" ";
                    else
                        cout<<"*";
                else
                    cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}

int main()
{
    int t ,n , i , num ;
    cin >> t ;
    while(t--)
    {
        num = 1 ;
        cin >> n ;
        int a[n] ;
        for(i = 0 ; i <n ;i++)
            cin >> a[i] ;
/*        for(i = n-1 ; i >=0;i--)
        {
            if(a[i] < a[i-1] && a[i] < a[i-2] && a[i] < a[i-3] && a[i] < a[i-4] && a[i] < a[i-5])
            {
                cout << a[i] ;
                num++ ;
            }
        }*/
/*        for( i = 0 ; i< n ;i++)
        {
            if(i>5)
            {
                if(a[i] < a[i-1] && a[i] < a[i-2] && a[i] < a[i-3] && a[i] < a[i-4] && a[i] < a[i-5] )
                {
                    num++ ;
                }
            }
            else if(i == 4)
            {
                if(a[i] < a[i-1] && a[i] < a[i-2] && a[i] < a[i-3])
                    num++ ;
            }
            else if(i == 3)
            {
                if(a[i] < a[i-1] && a[i] < a[i-2] )
                    num++ ;
            }
            else if(i == 2)
            {
                if(a[i] < a[i-1] )
                    num++ ;
            }
        }
        */
        for(i = n-1 ; i >=0 ; i--)
        {
            if(std :: min( {a[i] ,a[i-1] , a[i-2], a[i-3], a[i-4], a[i-5]} , comp ) == a[i])
                num++ ;
        }
        cout << num << endl ;
    }
    return 0;
}

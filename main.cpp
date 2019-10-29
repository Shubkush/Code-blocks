#include <iostream>

using namespace std;

int main()
{
    int  t , n , k ,r ,l;
    cin >> t;
    while(t--)
    {
        cin >> n >> k ;
        r = n%10 ;
        l = n/10 ;
        k = k% 10 ;

        if(n+k > ((l+1)*10) )
            n = n+k -10 ;
        else
            n = n+k ;
        cout << n<< endl ;

    }
    return 0;
}

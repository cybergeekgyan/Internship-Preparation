#include<iostream>

using namespace std;

int main()  {
    int i, N;
    cin>>N;
    // YOUR CODE GOES HERE
    for (i=0; i<=N; i++)
    {
      if ( i % 2 != 0 )
  		{
  			cout << i << endl;
		}
    }

    return 0;
}

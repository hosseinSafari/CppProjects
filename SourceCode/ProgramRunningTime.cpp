#include <iostream.h>
#include <time.h>
using namespace std;


int main()
{
    clock_t t1,t2;
    t1=clock();
    //code goes here
    t2=clock();
    float diff ((float)t2-(float)t1);
    cout<<diff<<endl;
    system ("pause");
    return 0;
    
}

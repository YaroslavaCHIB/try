#include <iostream>


using namespace std;



int main()
{


int a, b , count, max;
count = 0;
max = -1;
cin >> a >> b;
for(int i = a; i = b; i++){

 if((i%16 ==11) && ( i %16==12) && (i%16!=0)){
        count +=1;
        if(i>max)
            max = i;
    }
   }
   cout << count << ' ' << max;
   return 0;
}


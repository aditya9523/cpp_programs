#include <iostream>

using namespace std;


int power(int baseNums, int powerNum){
    int result = 1;

    for(int i=0; i<powerNum; i++){

        result = result * baseNums;
    }



return result;
}

int main()
{
    cout << power(4,2);








    return 0;
}

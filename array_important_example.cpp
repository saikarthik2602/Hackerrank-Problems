#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    
    int array[] = {2, 9, 8, 4, 6, 1, 7, 5, 3, 0};
    for(int i = 0; i < 10; i++)
    {
        array[i/2] = array[array[[i/3]/3]/3];
    }
    
    for(int i = 0; i < 10; i++)
     cout << array[i] << " "; //important example on array
} 
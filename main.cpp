#include <iostream>

using namespace std;

int MinSub(int data){
    int x, y, minSub = 0, subCk;
     for(int i = 1; i < data / 2; i++){
        if(data % i == 0){
           x = data / i;
           y = i;
           subCk = x - y;
        }
        if(minSub == 0){
            minSub = subCk;
        }
        else if(minSub > subCk && subCk >= 0){
            minSub = subCk;
        }
     }
     return minSub;
}
int main()
{
    int value = 25;
    int minSub = MinSub(value);
    cout << "Min sub: " << minSub << endl;
    return 0;
}

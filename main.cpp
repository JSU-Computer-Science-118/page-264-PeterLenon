//Peter Lenon Goshomi
//J00972650
//Page 264
//Programming Assignment Num 22:The first 11 prime integers. 
#include <iostream>
using namespace std;
 
 
int main(){
  int num;
  cin >> num;
  bool isPrime = true;

  const int prime [] {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
  

  if(num > 1000 || num < 2){
    cout << "out of bound";
  }
  else{
    for (const int i : prime)
      if (i != num)
        if ((num % i) == 0){
          if (isPrime)
            cout << "";
            cout << i << " ";
          isPrime = false;
        }
    if (isPrime)
    cout << "Number " << num << " is prime!";
  }
}

//Peter Lenon Goshomi
//J00972650
//Page 264
//Programming Assignment Num 22:The first 11 prime integers. 
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    bool found = false;
    vector <int> ans;
    int prime [] = {2,3,5,7,11,13,17,19,23,29,31};
    
    cin>>num;
  
    for (int j =0 ; j<11; j++)
    {
      if (prime[j] == num)
      { 
        found = true;
        break;
      }
    }
  
    while(num<0)
    {
        cout<<"Num cannot be negative, please re-enter: ";
        cin>>num;
    }
    while(num>1000)
    {
        cout<<"Num cannot be greater than 1000, please re-enter";
        cin>>num;
    }
    if ((found == false) && (num%2 == 0 ||num%3 == 0 ||num%5 == 0 ||num%7 == 0 ||num%11 == 0 ||num%13 == 0 ||num%17 == 0 ||num%19 == 0 ||num%23 == 0 ||num%29 == 0 ||num%31 == 0))
    {
        if (num % 2 == 0)
            ans.push_back(2);
        if (num % 3 == 0)
            ans.push_back(3);
        if (num % 5 == 0)
            ans.push_back(5);
        if (num % 7 == 0)
            ans.push_back(7);
        if (num % 11 == 0)
            ans.push_back(11);
        if (num % 13 == 0)
            ans.push_back(13);
        if (num % 17 == 0)
            ans.push_back(17);
        if (num % 19 == 0)
            ans.push_back(19);
        if (num % 23 == 0)
            ans.push_back(23);
        if (num % 29 == 0)
            ans.push_back(29);
        if (num % 31 == 0)
            ans.push_back(31);
        
        ans.size();
        for (int i =0; i<ans.size(); i++)
        {
          cout<<ans[i]<<" "; 
        }
    }
    else
    {
        cout<<"Number "<<num<<" is prime!"<<endl;
    }
    return 0;
}

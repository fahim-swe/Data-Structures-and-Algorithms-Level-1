#include <bits/stdc++.h>
using namespace std;

bool checkString(string a, string b)
{
    string odd1, even1, odd2, even2;
   
   for(int i = 0; i < a.size(); i++){
       if(i % 2 == 0){
           odd1.push_back(a[i]);
       }
       else{
           even1.push_back(a[i]);
       }
   }
   
   for(int i = 0; i < b.size(); i++){
       if(i % 2 == 0){
           odd2.push_back(b[i]);
       }
       else {
           even2.push_back(b[i]);
       }
   }
   
   sort(odd1.begin(), odd1.end());
   sort(odd2.begin(), odd2.end());
   
   sort(even1.begin(), even1.end());
   sort(even2.begin(), even2.end());

 //  cout << odd1 << " " << odd2 << endl;
  if(odd1 == odd2 && even1 == even2){
       return true;
   }
   return false;
}

int main()
{
    while(true)
    {
 string a,  b;
    cin >> a >> b;

    cout << checkString(a, b) << endl;
    }
   
}
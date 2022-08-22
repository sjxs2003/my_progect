#include <iostream>
 
 int main()
 {
    using std::cout;
    using std::endl;
    using std::cin;
    int n{},i{};
    cout << "please cin a number:";
    cin >> n;
  if(n>=10) cout << "not found" << endl;
  else{
    cout << float(n) << endl;

    for(i=0;i<n;i++)
    {
      cout << "hellow,robotmaster!" << endl;
    }}
    return 0;
 }
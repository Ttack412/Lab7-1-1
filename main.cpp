#include <iostream> 

using namespace std; 

int main(void) {
int a = 8, b = 0, c = 0; 
cin >> b;
//tries b
try {
  if(b == 0){
      //throws error
    throw string();
  }
    c = a / b; 
    cout << c << endl;
}
//catches the error
catch(string &exc){
    //outputs error message
    cout << "Your input is not valid"  << endl;
}

}


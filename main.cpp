#include <iostream>
#include <vector> 
#include <string>
#include <sstream>
#include "bst.h"



using namespace std; // ERASE ME

bool bstVal (vector<int> v){

  int leftChild; // left child 
  int rightChild; // right child 
  int skip=0; 
  int parent=0;
  int size = v.size(); 
  int last= v[size-1]; 
  int prevRChild; // temp variable to store previous rightCHild 
 
   

for (int i = 0; i < size; i++){ // iterate through our vector 

// eg list) {10,5,15,2,7,11,25}

parent = v[i]; // first node is parent (10)

if (parent >v[i+skip+1]){ // if parent is greater than left child, set left child 
leftChild=v[i+skip+1]; //(5)
}
if (parent < v[i+skip+2]){
rightChild=v[i+skip+2]; // (15)
}

cout << parent<< endl  ; 
cout <<"leftChild " <<leftChild << endl ;
cout <<"rightChild " <<rightChild << endl ;

  
if (leftChild<parent&&rightChild>parent){
  skip++; 
}

else {
  return false; // not valid bst
}



// if (parent < leftChild&&parent > rightChild){


//   return false; // happens when bst is invalid 

// }
// else {
//   skip++;  
// }
// }
}

return true;
}
  


int main() {
    string s= "10 5 15 2 7 11 25 1"; // string of elements seperated by space 
    stringstream ss(s);
    vector<int> v; // vector i will be inserting into . 
    bool answer; 

    int n;
    while(ss >> n)
    {
        v.push_back(n); // insert string seperated by spaces into int vector 
    }
    for (int i = 0; i < v.size(); i++){
         cout << v[i]<< " "; // this is just to output list, not needed 
    }
 cout << endl;

bstVal(v); 

// if (bstVal(v)==true){ // if out bool returns true, bst is valid, return true in main
// return true;
// } 
// else return false; 



    return 0;
}
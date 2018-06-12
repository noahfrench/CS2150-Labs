// Noah French (njf5cu)
// Lab 5
// 8/10/17
// TreeCalc.cpp:  CS 2150 Tree Calculator method implementations

#include "TreeCalc.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//Constructor
TreeCalc::TreeCalc() {
}

//Destructor- frees memory
TreeCalc::~TreeCalc() {
  cleanTree(mystack.top());
}

//Deletes tree/frees memory
void TreeCalc::cleanTree(TreeNode* ptr) {
  if (ptr != NULL) {
    if (ptr -> left != NULL)
      cleanTree(ptr -> left);
    if (ptr -> right != NULL)
      cleanTree(ptr -> right);
    delete ptr;
  }
}

//Gets data from user (don't f*cking change this)
void TreeCalc::readInput() {
    string response;
    cout << "Enter elements one by one in postfix notation" << endl
         << "Any non-numeric or non-operator character,"
         << " e.g. #, will terminate input" << endl;
    cout << "Enter first element: ";
    cin >> response;
    //while input is legal
    while (isdigit(response[0]) || response[0]=='/' || response[0]=='*'
            || response[0]=='-' || response[0]=='+' ) {
        insert(response);
        cout << "Enter next element: ";
        cin >> response;
    }
}

//Puts value in tree stack
void TreeCalc::insert(const string& val) {
  TreeNode * valNode = new TreeNode(val);
  
  if (isdigit(val[0])) {
    mystack.push(valNode);
  } else if (val[0] == '-' && isdigit(val[1])) {
    mystack.push(valNode);
  } else {
    valNode -> right = mystack.top();
    mystack.pop();
    valNode -> left = mystack.top();
    mystack.pop();
    mystack.push(valNode);
  } 
}

//Prints data in prefix form
void TreeCalc::printPrefix(TreeNode* ptr) const {
  cout << ptr -> value << " ";
  if (ptr -> left != NULL)
    printPrefix(ptr -> left);
  if (ptr -> right != NULL)
    printPrefix(ptr -> right);
}

//Prints data in infix form
void TreeCalc::printInfix(TreeNode* ptr) const {
  if (!isdigit(ptr -> value[0]) && !isdigit(ptr -> value[1]))
      cout << "(";
  if (ptr -> left != NULL)
    printInfix(ptr -> left);
  // If it's an operator, surround it by whitespace
  if (!isdigit(ptr -> value[0]) && !isdigit(ptr -> value[1]))
    cout << " " << ptr -> value << " ";
  else
    cout << ptr -> value;
  if (ptr -> right != NULL)
    printInfix(ptr -> right);
  if (!isdigit(ptr -> value[0]) && !isdigit(ptr -> value[1]))
    cout << ")";
}

//Prints data in postfix form
void TreeCalc::printPostfix(TreeNode* ptr) const {
  if (ptr -> left != NULL)
    printPostfix(ptr -> left);
  if (ptr -> right != NULL)
    printPostfix(ptr -> right);
  if (ptr -> value != "?")
  cout << ptr -> value << " ";
}

// Prints tree in all 3 (pre,in,post) forms

void TreeCalc::printOutput() const {
  
    if (mystack.size()!=0 && mystack.top()!=NULL) {
        cout << "Expression tree in postfix expression: ";
        // call your implementation of printPostfix()
	printPostfix(mystack.top());
        cout << endl;
        cout << "Expression tree in infix expression: ";
        // call your implementation of printInfix()
	printInfix(mystack.top());
        cout << endl;
        cout << "Expression tree in prefix expression: ";
        // call your implementation of printPrefix()
	printPrefix(mystack.top());
        cout << endl;
    } else
        cout<< "Size is 0." << endl; 
}

//Evaluates tree, returns value
// private calculate() method
int TreeCalc::calculate(TreeNode* ptr) const {
  if (isdigit(ptr -> value[0]) || (ptr -> value[0] == '-' && isdigit(ptr -> value[1])))
    return atoi(&(ptr -> value[0]));  
  if (!isdigit(ptr -> value[0]) && !isdigit(ptr -> value[1])) {
    if (ptr -> value[0] == '+')
      return calculate(ptr -> left) + calculate(ptr -> right);
    else if (ptr -> value[0] == '-')
      return calculate(ptr -> left) - calculate(ptr -> right);
    else if (ptr -> value[0] == '*')
      return calculate(ptr -> left) * calculate(ptr -> right);
    else
      return calculate(ptr -> left) / calculate(ptr -> right);
  }		    
}

//Calls calculate, sets the stack back to a blank stack
// public calculate() method. Hides private data from user
int TreeCalc::calculate() {
    // call private calculate method here
    return calculate(mystack.top());
}

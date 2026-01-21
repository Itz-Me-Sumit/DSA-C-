#include <iostream>
using namespace std;


/*  
                  <--------------------- Can Access? ------------------------->
  
  Type              within-class        derived-class          external-code

  1) public              Yes                  Yes                     Yes

  2) protected           Yes                  Yes                      No

  3) private             Yes                   No                      No

*/



/*

  strong :-> private > protected > public

    #Note Which is stronger among base_class and child_class is considered

    Base_class                Child_class             Result

      public         ->        public        =>      public
      public         ->        protected     =>      protected
      public         ->        private       =>      private

      protected      ->        public        =>      protected
      protected      ->        protected     =>      protected
      protected      ->        private       =>      private

*/



// Base Class:

class Human{

  public:

  string name;
  int weight , age ;  

};


//Child Class:

class student: public Human{

  public:

  int roll_number , fees;

  /* 
    hamne Human class se inherit kiya aur kuch extra attributes bhi add kar diye
  */

};


int main(){

/*
  
  -- Ham student class se Human class ko bhi access kar sakte hai.

*/

  student A;

  A.name = "Sumit";
  A.weight = 55;
  A.age = 21;
  A.roll_number = 2121;
  A.fees = 60000;

  // student class se hi Human class ko bhi access kar liya.

}
#include <iostream>
#include<string>
using namespace std;
//*******************************inheritance**********************************
/* syntax 
      class{{derived class}}:{{visibility-mode}} {{base_class_name}}
      
      1.by default visibility mode is private
      2. private visibility mode--> public member of the base class become private member of the derived class
      3. public visibility mode--> public member of thye base class become public member of the derived class
      4. private member are never inherited
   protected visibility mode
                                                           visibility mode
                                  public derivation          private derivation      protected derivation

      1.private member             Not inherited            Not inherited             Not inherited
      2.public member              public                   private                      protected
      3.protected                  protected                private                       protected
*/
/*
 class emp{
     public:
     int id;
     int salary;
 };
 class atc: emp{   //here the visibility mode is private
     
 };
 int main(){
     atc a;
     a.id=134; //because the visibility mode is private so we cant acces the salary and id directly
     a.salary=23;
 }
 */
  class emp{
     public:
     int id;
     int salary;     
 };

 class atc:public emp{
     
 };
 int main(){
     atc a;
     a.id=134;    //here the visibility mode is public so we can access this directly
     a.salary=23;
 }
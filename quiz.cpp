#include <iostream>
using namespace std;
class Quiz{
  public:
  virtual void question(string answer){
 string answer_one = "Physical";
  try{
      if(answer == "Physical"){
          cout<<"Correct Answer!"<<endl;
      }else{
          throw(answer);
      }
  }catch (string wrong) {
  cout << "Wrong Answer!.\n";
  cout << "Answer is: "<<answer_one<<endl;
} 
}

};
class Quizn2:public Quiz{
    public:
    void question_two(string answer2){
         string answer_two = "Quantum Computing";
  try{
      if(answer2 == answer_two){
          cout<<"Correct Answer!"<<endl;
      }else{
         cout << "Wrong Answer!.\n";
  cout << "Answer is: "<<answer_two<<endl;
      }
  }
  catch (string wrong2) {
  
} 
}
    };
int main(){
    Quiz n;
    Quizn2 n2;
    Quiz *q1 = &n;
    Quizn2 *q2 = &n2;
string question_one = "First Low Layer out of 7 in Osi Layers: ";
 cout<<question_one;
    string ans;
    cin >> ans;
     q1->question(ans);
     string ans_two;
     string question_two = "Is Quantum phenomena such as superposition and entanglement to perform computation: ";
     cout << question_two;
     cin >> ans_two;
     q2->question_two(ans_two);
    return 0;
}

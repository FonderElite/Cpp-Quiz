#include <iostream>
#include <ctime>
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
  cout << "Wrong Answer!!!\n";
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
        throw(answer2);
      }
  }
  catch (string wrong2) {
        cout << "Wrong Answer!!!\n";
  cout << "Answer is: "<<answer_two<<endl;
} 
}
    };
    class Quizn3:public Quiz{
        public:
         virtual void third_question(string third_ans){
      string answer_three = "Pointer";
      try{
          if(third_ans == answer_three){
              cout<<"Correct!"<<endl;
          }else{
              throw(third_ans);
          }
      
      }  catch(string wrong3){
    cout << "Wrong Answer!!!\n";
  cout << "Answer is: "<<answer_three<<endl;
  
      }
  }
        
    };
    
    class Quizn4:public Quiz{
        public:
         virtual void fourth_question(string fourth_ans){
      string answer_four = "JavaScript";
      try{
          if(fourth_ans == answer_four){
              cout<<"Correct!"<<endl;
          }else{
              throw(fourth_ans);
          }
      
      }  catch(string wrong4){
    cout << "Wrong Answer!!!\n";
  cout << "Answer is: "<<answer_four<<endl;
  
      }
  }
        
    };
int main(){
    Quiz n;
    Quizn2 n2;
    Quizn3 n3;
    Quizn4 n4;
    Quiz *q1 = &n;
    Quizn2 *q2 = &n2;
    Quizn3 *q3 = &n3;
    Quizn4 *q4 = &n4;
     // current date/time based on current system
   time_t now = time(0);
   // convert now to string form
   char* dt = ctime(&now);
   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
    cout<<"Quiz By FonderElite"<<endl;
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
     string ans_three;
     string question_three = "Is a variable that holds a memory address where a value lives: ";
     cout<<question_three;
     cin >> ans_three;
     q3->third_question(ans_three);
     string ans_four;
     string question_four = "Is a programming language commonly used in web development,";
     cout<<question_four<<endl;
   cout<<"It was originally developed by Netscape as a means to add dynamic and interactive elements to websites: ";
     cin >> ans_four;
     q4->fourth_question(ans_four);
        return 0;
}


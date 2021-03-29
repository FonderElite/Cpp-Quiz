#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <fstream>
#include <sys/stat.h>
using namespace std;
//First Main Class will be inheritted by other classes
class Quiz{
  public:
  virtual void question(string answer){
 string answer_one = "Physical";
  try{
      if(answer == "Physical"){
          cout<<"Correct Answer!"<<endl;
          ofstream file1;
          file1.open ("correct/correct.txt");
          file1 << "1\n";
          file1.close();
      }else{
          throw(answer);
      }
  }catch (string wrong) {
   printf("\x1B[31mWrong Answer!!!\033[0m\n");
   cout << "Answer is: "<<answer_one<<endl;
} 
}

};

class Quizn2{
    public:
    void question_two(string answer2){
         string answer_two = "QuantumComputing";
  try{
      if(answer2 == "QuantumComputing"){
          cout<<"Correct Answer!"<<endl;
          ofstream outfile2;
   outfile2.open("correct/correct.txt",ios_base::app); // append instead of overwrite
    outfile2 << "2\n";
      }else{
        throw(answer2);
      }
  }
  catch (string wrong2) {
        printf("\x1B[31mWrong Answer!!!\033[0m\n");
  cout << "Answer is: "<<answer_two<<endl;
} 
}
    };
    class Quizn3{
        public:
         virtual void third_question(string third_ans){
      string answer_three = "Pointer";
      try{
          if(third_ans == answer_three){
              cout<<"Correct!"<<endl;
          ofstream outfile3;
   outfile3.open("correct/correct.txt",ios_base::app); // append instead of overwrite
    outfile3 << "3\n";
          }else{
              throw(third_ans);
          }
      
      }  catch(string wrong3){
   printf("\x1B[31mWrong Answer!!!\033[0m\n");
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
          ofstream outfile4;
         outfile4.open("correct/correct.txt",ios_base::app); // append instead of overwrite
         outfile4 << "4\n";
          }else{
              throw(fourth_ans);
          }
      
      }  catch(string wrong4){
    printf("\x1B[31mWrong Answer!!!\033[0m\n");
  cout << "Answer is: "<<answer_four<<endl;
  
      }
  }
    };
      class Quizn5:public Quiz{
        public:
         virtual void fifth_question(string fifth_ans){
      string answer_five = "Algorithm";
      try{
          if(fifth_ans == answer_five){
              cout<<"Correct!"<<endl;
          ofstream outfile5;
         outfile5.open("correct/correct.txt",ios_base::app); // append instead of overwrite
         outfile5 << "5\n";
          }else{
              throw(fifth_ans);
          }
      
      }  catch(string wrong5){
  printf("\x1B[31mWrong Answer!!!\033[0m\n");
  cout << "Answer is: "<<answer_five<<endl;
  
      }
  }
    };
    class makeFile{
        public:
        void checkFile(){
            try{
                struct stat st;
       if (stat("correct",&st) != 0){
             cout<<"Making a directory to store correct answers..."<<endl;
                system("sleep 1.5");
                system("mkdir correct");
       }
       if(stat("correct/correct.txt",&st) == 0){
          system("rm -r correct/correct.txt");
}
  if(stat("correct",&st) == 0){
        printf("Directory for storing answers is present.\n");
        }
        else{
            throw("Error!");
        }
    } catch(string filenotfound){
  printf("\x1B[31mFileNotFoundError\033[0m\n");
        }
    }
    };
    class lineCount{
        public:
         void countLines(){
            string Err = "Error!";
            try{
                struct stat st;
              if(stat("correct/correct.txt",&st) == 0){
                      int count = 0;
                    string line;
         /* Creating input filestream */ 
       ifstream file("correct/correct.txt");
       while (getline(file, line)){
        count++;
       }
        cout << "Score: " << count<<"/5" << endl;
              }else{
                  throw(Err);
              }
            }catch(string Error){
               printf("\x1B[31mFileNotFoundError\033[0m\n");
            };
        };
        
    };
int main(){
    Quiz n;
    Quizn2 n2;
    Quizn3 n3;
    Quizn4 n4;
    Quizn5 n5;
    lineCount lc;
    makeFile m;
    Quiz *q1 = &n;
    Quizn2 *q2 = &n2;
    Quizn3 *q3 = &n3;
    Quizn4 *q4 = &n4;
    Quizn5 *q5 = &n5;
    makeFile *fl = &m;
    lineCount *line = &lc;
    fl->checkFile();
     // current date/time based on current system
   time_t now = time(0);
   // convert now to string form
   char* dt = ctime(&now);
   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   system("sleep 1");
   cout << "The UTC date and time is:"<< dt << endl;
    cout<<"Quiz By FonderElite"<<endl;
    cout<<"All Answers must begin with a capital letter."<<endl;
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
     string ans_five;
     string question_five = "Is a finite list of instructions used to perform a task, specifically in computing: ";
     cout<<question_five;
     cin >> ans_five;
     q5->fifth_question(ans_five);
     line->countLines();
       printf("\x1B[32m======================Thank You For Taking the quiz======================\033[0m\t\t");
    return 0;
}

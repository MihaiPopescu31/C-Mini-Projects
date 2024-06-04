
#include <iostream>
using namespace std;


int main()
{
    //problema notelor la scoala folosind if/else
    
    int score{};
    
    cout<<"Enter the score on the exam(0-100_:"; 
    cin>>score;
    
    char letter_grade{};
    
    if(score>=0 && score<=100){
        if(score > 90)
            letter_grade = 'A';
        else if(score>80)   
            letter_grade = 'B';
        else if(score>70)   
            letter_grade = 'C';
        else if(score>60)   
            letter_grade = 'D';
        else if(score>50)   
            letter_grade = 'E';
        else
            letter_grade = 'F';
        
        cout<<"Your grade is: "<<letter_grade<<endl;
        if(letter_grade == 'F'){
            cout<<"Sorry,You need to repeat the year";
        } 
            else{
            cout<<"Congratiolation, you pass the exam";
            }
    }

     else{   
    cout<<"Sorry,"<<score<<"is not in range"<<endl;
     }
    
    return 0;
}
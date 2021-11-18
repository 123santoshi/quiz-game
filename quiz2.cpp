#include<iostream>
#include<string>
using namespace std;
int total=0;
int guess;
class question{
	public:
	string que;
	string ans1;
	string ans2;
	string ans3;
	string ans4;
	int correct_ans;
	int que_score;
	void setvalues(string,string,string,string,string,int,int);
	void askquestion();
};
void question::setvalues(string q,string a1,string a2,string a3,string a4,int ca,int qa){
	que=q;
	ans1=a1;
	ans2=a2;
	ans3=a3;
	ans4=a4;
	correct_ans=ca;
	que_score=qa;}

void question::askquestion(){
	cout<<endl;
	cout<<que<<endl;
	cout<<"1 "<<ans1<<endl;
	cout<<"2 "<<ans2<<endl;
	cout<<"3 "<<ans3<<endl;
	cout<<"4 "<<ans4<<endl;
	cout<<endl;
	cout<<"what is ur  answer"<<endl;
	cin>>guess;
	if(guess==correct_ans){
		cout<<"u are correct"<<endl;
		total=total+que_score;
		 cout<<"score is"<<que_score<<"out of"<<que_score<<endl;
		cout<<endl;
		cout<<endl;}
	else{
		cout<<"u are wrong"<<endl;
		cout<<"score is 0"<<"out of"<<que_score<<endl;
		cout<<"the correct ans is"<<correct_ans<<endl;
		cout<<endl;
		cout<<endl;}
	}

	

int main(){
	cout<<"********* ********* *********"<<endl;
	cout<<"welcome to quiz"<<endl;
	cout<<"please enter to start the auiz"<<endl;
	string name;
	string age;
	string respond;
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<"enter your age"<<endl;
	cin>>age;
	cout<<"are u ready to start the quiz"<<name<<"yes/no"<<endl;
	cin>>respond;
	if(respond=="yes"){
		cout<<endl;
		cout<<"GOOD LUCK FOR THE QUIZ"<<endl;
		cout<<endl;}
	else{
		cout<<endl;
		cout<<"OK BYE"<<endl;
		cout<<endl;}
	question q1,q2,q3,q4,q5;
	q1.setvalues("in the full form of atm 'a' refers to",
				"auto",
				"automatically",
				"any",
				"always",
				2,
				20);
	q2.setvalues("in the full form of atm 't' refers to",
				"teller",
				"tell",
				"time",
				"tranform",
				1,
				20);
	q3.setvalues("in the full form of atm 'm' refers to",
				"math",
				"matter",
				"money",
				"machine",
				4,
				20);
	q4.setvalues("in the full form of sms 'm' refers to",
				"message",
				"matter",
				"money",
				"mean",
				1,
				20);
	q5.setvalues("in the full form of who 'w' refers to",
				"when",
				"water",
				"world",
				"whole",
				3,
				20);
	q1.askquestion();
	q2.askquestion();
	q3.askquestion();
	q4.askquestion();
	q5.askquestion();
cout<<"total  score is"<<total<<endl;
	if(total>=70){ 
		cout<<"u have passed the quiz"<<endl;
		cout<<endl;	
		cout<<"CONGRATULATIONS"<<endl;
		cout<<endl;
		cout<<endl;}
	else{
		cout<<"sorry u failed the exam"<<endl;
		cout<<endl;	
		cout<<"BETTER LUCK NEXT TIME"<<endl;
		cout<<endl;
		cout<<endl;}
}
	
	
		
	
	
	
